class Solution{
public:
    void insertatbottom(stack<int> &St, int x){
        
        //base case
        if(St.empty()){
            
            St.push(x);
            return ;
            
        }
        int num = St.top();
        St.pop();
        insertatbottom(St, x);
        St.push(num);
        
        
    }
    void Reverse(stack<int> &St){
        //base case
        if(St.empty()){
            return ;
        }
        int top = St.top();
        
        St.pop();
        
        Reverse(St);
        insertatbottom(St, top);
    }
};
