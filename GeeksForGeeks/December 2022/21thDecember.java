class Solution

{

 Node sortList(Node head) {

 ArrayList<Integer> list=new ArrayList<>();

 Node curr=head;

 while(curr!=null) {

     list.add(curr.data);

     curr=curr.next;

 }

 Collections.sort(list);

 curr=head;

 int i=0;

 while(curr!=null) {

     curr.data=list.get(i);

     curr=curr.next;

     i++;

 }

 return head;

 }

}
