class Solution{
public:
int res,k;
void help(Node *root,unordered_set<int> &s)
{
    if(!root)
    return;
    unordered_set<int> s1;
    help(root->left,s1);
    help(root->right,s1);
    s1.insert(root->data);
    
    auto itr=s1.begin();
    while(itr!=s1.end())
        s.insert(*itr),itr++;
    if(s1.size()<=k)
    res++;
    return;
}
    int goodSubtrees(Node *root,int k1){
        // Code here
        res=0;
        unordered_set<int> s;
        k=k1;
        help(root,s);
        return res;
    }
};
