class Solution
{
    public:
    //Function to serialize a tree and return a list containing nodes of tree.
    void solve1(Node* root, vector<int>&ans){
        if(root==NULL){
            ans.push_back(-1);
            return;
        }
        ans.push_back(root->data);
        solve1(root->left,ans);
        solve1(root->right,ans);
    }
    vector<int> serialize(Node *root) 
    {
        vector<int>ans;
        solve1(root,ans);
        return ans;
    }
    Node* solve2(int& index,vector<int>&A){
        if(index==A.size() || A[index]== -1){
            index++;
            return NULL;
        }
        Node* root = new Node(A[index]);
        index++;
        root->left=solve2(index,A);
        root->right=solve2(index,A);
        return root;
    }
    
    //Function to deserialize a list and construct the tree.
    Node * deSerialize(vector<int> &A)
    {
       //Your code here
       int index = 0;
       return solve2(index,A);
    }
};
