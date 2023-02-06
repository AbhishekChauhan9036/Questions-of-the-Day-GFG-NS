class Solution
{
    private Node getTargetNode(Node root,int target){
        if(root == null){
            return null;
        }
        if(root.data == target){
            return root;
        }else if(root.data > target){
            return getTargetNode(root.left, target);
        }else{
            return getTargetNode(root.right, target);
        }
    }
    private void findSum(Node root, int step, Map<Integer, Integer>map){
        if(root == null){
            return;
        }
        map.put(step, map.getOrDefault(step, 0) + root.data);
        findSum(root.left, step - 1, map);
        findSum(root.right, step + 1, map);
    }
    long verticallyDownBST(Node root,int target){
        Node targetNode = getTargetNode(root, target);
        if(targetNode == null){
            return -1;
        }
        Map<Integer, Integer>map = new HashMap<>();
        findSum(targetNode, 0, map);
        return map.get(0) - targetNode.data;
    }
}
