/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL){
            return {};
        }
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> res;
        bool LeftToRight = true;

        while(!q.empty()){
            vector<int> tmp;
            int ls = q.size();
            

            while(ls--){
                TreeNode* t=q.front();
                q.pop();
                // if(LeftToRight){
                    tmp.push_back(t->val);
                // }
                // else{
                //     tmp.push_back(t->val);
                //     reverse(tmp.begin(),tmp.end());
                // }
                if(t->left!=NULL){
                    q.push(t->left);
                }
                if(t->right!=NULL){
                    q.push(t->right);
                }
            }
            if(!LeftToRight){
                     
                    reverse(tmp.begin(),tmp.end());
                }
            res.push_back(tmp);
            LeftToRight =!(LeftToRight);
        }
        return res;
    }
};