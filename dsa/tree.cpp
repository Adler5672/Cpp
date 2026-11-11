#include <algorithm>
#include <memory>
#include <print>
#include <set>
#include <algorithm>
#include <vector>

namespace tree {

struct Node {
  int data;
  std::unique_ptr<Node> left, right;

  Node(const int& value) {
    data = value;
    left = nullptr;
    right = nullptr;
  }
};

void printTree(const Node* node) {
  node == nullptr
      ? void()
      : (std::println("Node: {}", node->data), printTree(node->left.get()),
        printTree(node->right.get()));
}

void createNodes(Node* node, const int depth) {
  depth > 0
      ? (node->left = std::make_unique<tree::Node>(depth),
        node->right = std::make_unique<tree::Node>(depth),
        createNodes(node->left.get(), depth - 1),
        createNodes(node->right.get(), depth - 1))
      : void();
}
}  // namespace tree


auto main() -> int {

  // Self balanced binary search tree using std::set
  std::set<int> bst = {5, 3, 7, 2, 4, 6, 8};
  std::println("Binary Search Tree (in-order):");
  for (const auto& value : bst) {
    std::println("{}", value);
  }
  std::unique_ptr<tree::Node> root = std::make_unique<tree::Node>(1);
  tree::createNodes(root.get(), 3);

  tree::printTree(root.get());

  // Heap data structure using std::vector
  std::vector<int> heap = {10, 20, 15, 30, 40};
  std::ranges::make_heap(heap);
  std::println("Heap (max-heap):");
  for (const auto& value : heap) {
    std::println("{}", value);
  }
  return 0;
}
