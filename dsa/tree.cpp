#include <bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode {
   public:
    T data;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : data(0), left(nullptr), right(nullptr) {}
    TreeNode(T x) : data(x), left(nullptr), right(nullptr) {}
    TreeNode(T x, TreeNode* leftNode, TreeNode* rightNode) : data(x), left(leftNode), right(rightNode) {}
    ~TreeNode() {
        delete left;
        delete right;
    }
};

template <typename T>
void delete_tree(TreeNode<T>* tree) {
    if (!tree) return;
    delete tree;
    cout << "Tree is destored" << '\n';
}

template <typename T>
void tree_print(TreeNode<T>* tree) {
    if (!tree) return;

    stack<TreeNode<T>*> stk;
    stk.push(tree);

    while (!stk.empty()) {
        TreeNode<T>* temp = stk.top();
        stk.pop();

        cout << temp->data << endl;
        if (temp->right) stk.push(temp->right);
        if (temp->left) stk.push(temp->left);
    }

    // cout << tree->data << endl;
    // tree_print<int>(tree->left);
    // tree_print<int>(tree->right);
}

int main() {
    auto left = new TreeNode<int>(5);
    auto right = new TreeNode<int>(7);

    left->left = new TreeNode<int>(19);
    left->right = new TreeNode<int>(22);

    right->left = new TreeNode<int>(34);
    right->right = new TreeNode<int>(93);

    auto root = new TreeNode<int>(3, left, right);
    tree_print<int>(root);
    delete_tree(root);
}