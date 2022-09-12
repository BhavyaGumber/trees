class Solution{
  public:
  void solve(Node *root, vector<int>&ans,int level){
      if(root==NULL){
          return;
      }
      if(root->left==NULL && root->right==NULL){
          ans.push_back(level);
      }
      solve(root->left,ans,level+1);
      solve(root->right,ans,level+1);
      return;
  }
    
    bool check(Node *root){
    if(root==NULL)
        return false;
        vector<int> ans;
        solve(root,ans,0);
        int val=ans[0];
        for(int i=1; i<ans.size();i++){
            if(val!=ans[i]){
                return false;
            }
            
        }
        return true;
    
   
        //Your code here
    }
};
