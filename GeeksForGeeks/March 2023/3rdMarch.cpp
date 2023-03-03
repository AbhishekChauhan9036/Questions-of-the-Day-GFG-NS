class Solution{
public:
    vector<long long int> minimumSquares(long long int L, long long int B)
    {
        return { (L/__gcd(L,B))*(B/__gcd(L,B)) , __gcd(L,B) };
    }
};

