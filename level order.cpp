class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      //Your code here
      vector<int> v;
      if(node==NULL)return v;
      queue<Node *> q;
      q.push(node);
      while(!q.empty()){
          int size = q.size();
          Node *node1 = q.front();
          q.pop();
          if(node1->left!=NULL)q.push(node1->left);
          if(node1->right!=NULL)q.push(node1->right);
          v.push_back(node1->data);
      }
      return v;
    }
};
// time O(N) traversing all nodes of the tree once
// space O(N) usage of vector for storing that answer
