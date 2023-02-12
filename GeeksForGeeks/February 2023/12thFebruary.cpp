class Solution{
public:
    Node *primeList(Node *head){
        int arr[100000] = {0};
        vector<int> prime;
        for(long long i = 2; i<1e5; ++i)
        {
            if(!arr[i])
            {
                prime.push_back(i);
                for(long long j = i*i; j<1e5; j += i) arr[j] = 1;
            }
        }
        Node *temp = head;
        while(temp != NULL)
        {
            int val = temp->val;
            auto it = lower_bound(prime.begin(), prime.end(), val);
            if(it != prime.begin() && (*it + *(it-1)) >= 2*val) temp->val = *(it-1);
            else temp->val = *it;
            temp = temp->next;
        }
        return head;
    }
};

