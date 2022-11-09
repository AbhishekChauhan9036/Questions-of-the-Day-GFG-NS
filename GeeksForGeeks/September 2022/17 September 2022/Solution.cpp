class Solution
{
public:
    int minimumSwaps(int c[], int v[], int n, int k, int b, int T)
    {
        int count = 0, swaps = 0;
        for (int i = n - 1; ~i; i--)
        {
            if ((b - c[i]) / v[i] <= T)
            {
                k--;
                swaps += count;
            }
            else
            {
                count++;
            }
            if (k == 0)
            {
                return swaps;
            }
        }
        if (k > 0)
        {
            return -1;
        }
        return swaps;
        ///66666
    }
};
