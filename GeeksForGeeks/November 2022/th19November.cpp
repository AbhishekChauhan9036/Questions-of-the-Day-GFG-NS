class Solution{

    public:

    

    void levelOrder(Node* root, set<multiset<int>> &st) {

        queue<Node*> q;

        q.push(root);

        while(!q.empty()){

            multiset<int> m;

            int count = q.size();

            for(int i=0; i<count; i++){

                Node* r = q.front();

                q.pop();

                m.insert(r->data);

 

 

                if(r->left != NULL){

                    q.push(r->left);

                }

                if(r->right != NULL){

                    q.push(r->right);

                }

            }

            st.insert(m);

        }

    }

    

    bool areAnagrams(Node *root1, Node *root2)

    {

        set<multiset<int>> s, s1;

        levelOrder(root1, s);

        levelOrder(root2, s1);

        

        if(s == s1)

            return 1;

        return 0;

    }

};
