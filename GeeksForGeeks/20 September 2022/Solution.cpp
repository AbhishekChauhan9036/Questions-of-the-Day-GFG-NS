class Solution
{
public:
    long long int numberOfSquares(long long int n){
        n = n / 2 - 1;
        return (n * (n + 1)) / 2;}
};