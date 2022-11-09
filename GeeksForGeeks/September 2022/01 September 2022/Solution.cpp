class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        // code here
        vector<pair<int,int>> ans;
        
        Node *left = head, *right = head;
        
        while(right->next!=NULL){
            right = right->next;
        }
        //if(left==right) return ans;
        while(left!=right && left!=right->next &&left->prev!=right){
            
            if(left->data+right->data == target){
                ans.push_back({left->data,right->data});
                left=left->next;
                right=right->prev;
            }
            else if(left->data+right->data > target){
                right=right->prev;
            }
            else{
                left=left->next;
            }
        }
        return ans;
        //ans
    }
};
