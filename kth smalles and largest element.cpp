 class Solution {
  public:
  int ans;
 void solve(Node *root, int K,int &idx){
     if(!root)return;
     solve(root->left,K,idx);
     if(K==idx){
         ans=root->data;
         idx++;
         return;
     }
     else{
         idx++;
         solve(root->right,K,idx);
     }
 }
    // Return the Kth smallest element in the given BST
    int KthSmallestElement(Node *root, int K) {
        // add code here.
        int idx=1;
        ans =-1;
        solve(root,K,idx);
        return ans;
       
        
    }
};
