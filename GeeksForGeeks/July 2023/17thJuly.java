class Solution
{
    public String FirstNonRepeating(String A)
    {
       Map<Character, Integer> charCount = new HashMap<>();
        List<Character> order = new ArrayList<>();
        StringBuilder res = new StringBuilder();

        for (char c : A.toCharArray()) {
            charCount.put(c, charCount.getOrDefault(c, 0) + 1);
            if (charCount.get(c) == 1) {
                order.add(c);
            } else {
                order.remove(Character.valueOf(c));
            }
            if (!order.isEmpty()) {
                res.append(order.get(0));
            } else {
                res.append("#");
            }
        }

        return res.toString();
    }
}
