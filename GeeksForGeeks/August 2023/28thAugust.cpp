Node *removeDuplicates(Node *head){
   Node* currNode=head;
   while(currNode){
        Node* currNodeNext=currNode->next;
        while(currNodeNext){
            if(currNode->data==currNodeNext->data){
                Node* temp=currNodeNext;
                currNodeNext=temp->next;
                free(temp);
            }else{
                break;
            }
        }
        currNode->next=currNodeNext;
        currNode=currNode->next;
   }
   return head;
}
