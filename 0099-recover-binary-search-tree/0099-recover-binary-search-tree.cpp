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
    TreeNode* prev= NULL;
    int galat=0;
    TreeNode* g1first = NULL;
    TreeNode* g1second = NULL;
    TreeNode* g2first = NULL;
    TreeNode* g2second = NULL;
    void funGal(TreeNode* root){
        if(root==NULL){
            return;
        }
        funGal(root->left);
        if(prev==NULL){
            prev=root;
        }else{
            if(root->val<=prev->val){
                if(galat==0){
                   g1first = prev;
                   g1second = root;
                   galat++;
                }else{
                    g2first = prev;
                    g2second = root;
                    galat++;
                }
            }
            prev=root;
        }
        funGal(root->right);

    }
    void recoverTree(TreeNode* root) {
        funGal(root);
        if(galat==1){
            swap(g1first->val,g1second->val);
        }else{
            swap(g1first->val,g2second->val);
        }
        return ;
        
    }
};