class GfG
{
    Node merge(Node head1, Node head2)
    {
        Node start = new Node(-1);
        Node node = start;
        
        while(head1 != null && head2 != null)
        {
            int h1 = head1.data;
            int h2 = head2.data;
            
            if(h1<h2)
            {
                node.bottom = head1;
                node = head1;
                head1 = head1.bottom;
            }
            else
            {
                node.bottom = head2;
                node = head2;
                head2 = head2.bottom;
            }
            
        }
        
        while(head1!=null)
        {
            node.bottom = head1;
            node = head1;
            head1 = head1.bottom;
        }
        
        while(head2!=null)
        {
            node.bottom = head2;
            node = head2;
            head2 = head2.bottom;
        }
        
        return start.bottom;
        
    }
    
    Node flatten(Node root)
    {
        if(root==null) return null;
        
        root = merge(root, flatten(root.next));
        
        return root;
    }
}
