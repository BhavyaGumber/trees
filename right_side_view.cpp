 
class Solution {
public:
   vector<int> ds;
    void util(TreeNode *root, int level){
        if(root==NULL)return;
        if(level==ds.size()){
            ds.push_back(root->val);
        }
        util(root->right,level+1);
        util(root->left,level+1);
      
    }
        
    vector<int> rightSideView(TreeNode* root) {
   
        util(root,0);
        return ds;
   
     
        
        
        
    }
};
