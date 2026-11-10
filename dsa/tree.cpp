#include <print>

namespace tree {

struct Node {
  int data;
  Node *left, *right;

  Node(const int& value) {
    data = value;
    left = nullptr;
    right = nullptr;
  }
};

void printTree(const Node* node) {
  node == nullptr
      ? void()
      : (std::println("Node: {}", node->data), printTree(node->left),
         printTree(node->right));
}

void createNodes(Node* node, const int depth) {
  depth > 0
      ? (node->left = new tree::Node(depth),
         node->right = new tree::Node(depth),
         createNodes(node->left, depth - 1),
         createNodes(node->right, depth - 1))
      : void();
}
}  // namespace tree

auto main() -> int {
  auto* root = new tree::Node(1);
  tree::createNodes(root, 3);

  tree::printTree(root);
  return 0;
}
