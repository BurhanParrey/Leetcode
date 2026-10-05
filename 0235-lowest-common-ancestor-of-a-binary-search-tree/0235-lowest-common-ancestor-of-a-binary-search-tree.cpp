/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* ans = NULL;
    TreeNode* fun(TreeNode* root, TreeNode* p, TreeNode* q){
         if(root==p || root==q){
            ans=root;
            return root;
        }
        if(root->val<p->val){
            return fun(root->right,p,q);
        }
        else if(root->val>q->val){
            return fun(root->left,p,q);
        }
        else{
            ans = root;
            return  root;
        }
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL){
            return NULL;
        }
        if(p->val<q->val){
            fun(root,p,q);
            
        }else{
            fun(root,q,p);
            
        }
        
        // if(root==p){
        //     return root;
        // }
        // if(root==q){
        //     return root;
        // }
       return ans;
         
    }
};