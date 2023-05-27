// EASY C++ SOLUTION O(N),O(1)
int getNthFromLast(Node *head, int n)
{
       int len = 0;
       Node* cur = head;
       while(cur){
           len++;
           cur = cur->next;
       }
       if(n>len) return -1;
       int cnt = len-n+1;
       cur = head,len = 0;
       while(cur){
           len++;
           if(len==cnt) return cur->data;
           cur = cur->next;
       }
       return -1;
}
