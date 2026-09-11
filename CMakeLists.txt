cmake_minimum_required(VERSION 3.15)
project(CppLearning LANGUAGES CXX)

# 1. Automatically generate compile_commands.json for clangd
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Use the installed libc++ headers, including C++23-only headers such as <print>.
add_compile_options(-stdlib=libc++)
add_link_options(-stdlib=libc++)

# 2. Setup standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Build the classes example from its main file and all implementation files
# in its subdirectories.
file(GLOB_RECURSE CLASSES_SOURCES CONFIGURE_DEPENDS
    "${CMAKE_SOURCE_DIR}/classes/*.cpp")
add_executable(classes_main ${CLASSES_SOURCES})
target_include_directories(classes_main PRIVATE
    "${CMAKE_SOURCE_DIR}/classes")

# 3. Find ALL .cpp files anywhere in your project recursively
file(GLOB_RECURSE ALL_SOURCES CONFIGURE_DEPENDS "${CMAKE_SOURCE_DIR}/*.cpp")

# 4. Turn each individual file into its own standalone executable
foreach(source_file ${ALL_SOURCES})
    # Skip generated CMake compiler-id sources and build artifacts
    if(source_file MATCHES "/CMakeFiles/" OR
       source_file MATCHES "CompilerIdCXX_CMakeCXXCompilerId" OR
       source_file MATCHES "/classes/")
        continue()
    endif()

    # Skip header-only or support files that shouldn't be built as standalone
    if(source_file MATCHES "/hell\\.cpp$")
        continue()
    endif()

    # Get just the filename without the path (e.g., "chapter1/main.cpp" -> "main")
    get_filename_component(exe_name ${source_file} NAME_WE)

    # Get the parent folder name to avoid naming collisions (e.g., "chapter1_main")
    get_filename_component(parent_dir ${source_file} DIRECTORY)
    get_filename_component(folder_name ${parent_dir} NAME)

    set(target_name "${folder_name}_${exe_name}")

    # Collect source files for this target
    set(target_sources ${source_file})

    # Special case: link function.cpp with hell.cpp
    if(source_file MATCHES "/function\\.cpp$")
        list(APPEND target_sources ${CMAKE_SOURCE_DIR}/function/hell.cpp)
    endif()

    # Register it automatically
    add_executable(${target_name} ${target_sources})
endforeach()
