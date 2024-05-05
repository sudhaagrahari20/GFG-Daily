class Solution{
  public:
    int mn=INT_MAX,mx=INT_MIN;
    void help(Node *root,unordered_map<int,int> &mm,int vLevel){
        if(!root)return;
        mn=min(mn,vLevel);
        mx=max(mx,vLevel);
        mm[vLevel]+=root->data;
        help(root->left,mm,vLevel-1);
        help(root->right,mm,vLevel+1);
    }
    vector <int> verticalSum(Node *root) {
        // add code here.
        unordered_map<int,int> mm;
        help(root,mm,0);
        vector<int> ans;
        for(int i=mn;i<=mx;i++){
            if(mm[i])ans.push_back(mm[i]);
        }
        return ans;
    }
};
