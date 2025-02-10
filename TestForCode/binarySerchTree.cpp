#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}

    // Insert function
    TreeNode* insert(TreeNode* root, int x) {
        if (root == NULL) {
            root = new TreeNode(x);
        } else if (x < root->val) {
            root->left = insert(root->left, x);
        } else if (x > root->val) {
            root->right = insert(root->right, x);
        }
        return root;
    }

    // Delete function
    TreeNode* minValueNode(TreeNode* node) {
        TreeNode* current = node;
        while (current && current->left != NULL)
            current = current->left;
        return current;
    }

    TreeNode* deleteNode(TreeNode* root, int x) {
        if (root == NULL) return root;
        if (x < root->val)
            root->left = deleteNode(root->left, x);
        else if (x > root->val)
            root->right = deleteNode(root->right, x);
        else {
            if (root->left == NULL) {
                TreeNode* temp = root->right;
                delete root;
                return temp;
            } else if (root->right == NULL) {
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }
            TreeNode* temp = minValueNode(root->right);
            root->val = temp->val;
            root->right = deleteNode(root->right, temp->val);
        }
        return root;
    }
};

int main(){
	BST bst;
    bst.insert(5);
    bst.insert(3);
    bst.insert(7);
    bst.insert()
}
