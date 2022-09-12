class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)return false;
        else{
            return isSymmetricHelp(root->left,root->right);
        }
        
    }
    bool isSymmetricHelp(TreeNode *left, TreeNode *right){
        if(left==NULL||right==NULL){
            return left==right;
        }
        if(left->val!=right->val){
            return false;
        }
        else{
           return isSymmetricHelp(left->left,right->right) && isSymmetricHelp(left->right,right->left);
        }
    }
};
