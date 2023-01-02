struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

class Solution {
 
   public:

    vector<int> maximumValue(Node* node) {

        

        queue<Node*> qu;

        vector<int> vec;

        qu.push(node);

        while(qu.empty()==false)

        {

            int n = qu.size();

            int ans = -1;

            while(n--)

            {

                Node* temp = qu.front();

                

                qu.pop();

                if(temp->left)

                {

                    qu.push(temp->left);

                }

                if(temp->right)

                {

                    qu.push(temp->right);

                }

                ans = max(ans,temp->data);

            }

            vec.push_back(ans);

        }

        return vec;

        

    }
};
