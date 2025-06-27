#include <bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode {
   public:
    T data;
    TreeNode* left;
    TreeNode* right;

    TreeNode() : data(0), left(nullptr), right(nullptr) {}
    TreeNode(T data_val) : data(data_val), left(nullptr), right(nullptr) {}
    TreeNode(T data_val, TreeNode* leftNode, TreeNode* rightNode)
        : data(data_val), left(leftNode), right(rightNode) {}
    ~TreeNode() {
        delete left;
        delete right;
    }
};

template <typename T>
class BST {
   private:
    TreeNode<T>* root;
    bool searchHelper(TreeNode<T>* node, T target) {
        if (node == nullptr) return false;
        if (node->data == target) return true;

        if (target < node->data) {
            return searchHelper(node->left, target);
        } else {
            return searchHelper(node->right, target);
        }
    }

    TreeNode<T>* insertHelper(TreeNode<T>* root, T value) {
        if (root == nullptr) {
            return new TreeNode<T>(value);
        }

        if (value < root->data) {
            root->left = insertHelper(root->left, value);
        } else {
            root->right = insertHelper(root->right, value);
        }
        return root;
    }

    void printHelper(TreeNode<T>* root, int tabs) {
        if (root == nullptr) return;
        cout << (tabs == 1 ? "\t" : tabs == 2 ? "\t\t"
                                : tabs == 3   ? "\t\t\t"
                                              : "")
             << root->data << endl;
        printHelper(root->left, 1);
        printHelper(root->right, 3);
    }

    TreeNode<T>* deleteHelper(TreeNode<T>* root, T value) {
        if (root == nullptr) return new TreeNode<T>(value);

        // 1
        if(!root->left && !root->right) {
            retu
        }

        // 2
        if(!root->left || !root->right) {}

        // 3
        if(root->left && root->right) {}
    }

   public:
    BST() : root(nullptr) {}
    BST(TreeNode<T>* rootNode) : root(rootNode) {}
    ~BST() { delete root; }

    void print() {
        return printHelper(root, 2);
    }

    bool search(T target) {
        return searchHelper(root, target);
    }

    void insert(T value) {
        root = insertHelper(root, value);
    }
    void delete(T value) {
        root = deleteHelper(root, value);
    }
};

int main() {
    TreeNode<int>* root = new TreeNode<int>(10);
    root->left = new TreeNode<int>(5);
    root->right = new TreeNode<int>(15);
    root->left->left = new TreeNode<int>(2);
    root->left->right = new TreeNode<int>(7);

    BST<int> bst(root);

    cout << boolalpha << bst.search(7) << endl;   // true
    cout << boolalpha << bst.search(11) << endl;  // false
    cout << noboolalpha;

    bst.insert(8);
    bst.print();

    return 0;
}