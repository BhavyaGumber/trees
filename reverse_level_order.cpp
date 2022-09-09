vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    else{
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            for(int i=0;i<size;i++){
                Node *n1 = q.front();
                q.pop();
                if(n1->right!=NULL){
                    q.push(n1->right);
                }
                if(n1->left!=NULL){
                    q.push(n1->left);
                }
                ans.push_back(n1->data);
            }
            
            
        }
        reverse(ans.begin(),ans.end());
        
    }
    return ans;
}
