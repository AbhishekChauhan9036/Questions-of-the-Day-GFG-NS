class Solution{
public:
       bool isHappy(int n) {

    unordered_map<int,int> visited;

    while (visited.find(n) == visited.end()) {

        visited[n]=1;

        int sum = 0;

        while (n > 0) {

            int digit = n % 10;

            sum += digit * digit;

            n /= 10;

        }

        if(sum==1) return true;

        n = sum;

    }

    return false;

}

int nextHappy(int N) {

    while (1) {

        if (isHappy(++N))

            return N;

    }

}
};
