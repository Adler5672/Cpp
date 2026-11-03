#include <print>

namespace tree {

struct TreeNode {
  int data;
  TreeNode *left{};
  TreeNode *right{};

  TreeNode(int value) : data(value) {}
};

void printTree(TreeNode *node) {
  if (node == nullptr) {
    return;
  }
  std::println("Node: {}", node->data);
  printTree(node->left);
  printTree(node->right);
}

void createNodes(TreeNode *node, int depth) {
  if (depth <= 0) {
    return;
  }
  node->left = new tree::TreeNode(depth);
  node->right = new tree::TreeNode(depth);
  createNodes(node->left, depth - 1);
  createNodes(node->right, depth - 1);
}
} // namespace tree
auto main() -> int {
  auto *root = new tree::TreeNode(1);
  tree::createNodes(root, 3);

  tree::printTree(root);
  return 0;
}
