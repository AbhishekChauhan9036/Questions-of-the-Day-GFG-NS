class Solution{
    public:
    // Function to insert element into the queue
   void insert(queue<int> &q, int k){
        q.push(k);
    }
int findFrequency(queue<int> &q, int k){
             queue<int>d;
             d=q;
             int cnt=0;
             while(!d.empty())
             {
                 if(d.front()==k)
                 cnt++;
                 
                 d.pop();
             }
             if(cnt>0)
             return cnt;
             else
             return -1;
    }
    
};
