class Solution {
public:
    int minDepth(TreeNode* root) {
        if(!root)return 0;
        queue<pair<TreeNode*,int>>q;
        q.push({root,1});
        while(!q.empty()){
            int s = q.size();
            while(s--){
                TreeNode* curr = q.front().first;
                int depth = q.front().second;
                q.pop();

                if(!curr->left && !curr->right)return depth;
                if(curr->left)q.push({curr->left,depth+1});
                if(curr->right)q.push({curr->right,depth+1});
            }
        }
        return 0;
    }
};
