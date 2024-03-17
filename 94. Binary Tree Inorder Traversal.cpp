class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result; // Initialize the vector to store the result
        
        if (root == nullptr) {
            return result; // Return an empty vector if the root is null
        }

        // Traverse left subtree
        vector<int> left = inorderTraversal(root->left);
        result.insert(result.end(), left.begin(), left.end());

        // Process the current node
        result.push_back(root->val);

        // Traverse right subtree
        vector<int> right = inorderTraversal(root->right);
        result.insert(result.end(), right.begin(), right.end());

        return result; // Return the concatenated vectors of left, root, and right subtrees
    }
};
