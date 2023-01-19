class Solution{
    carpetBox(A, B, C, D){
        //code here
        let temp = A + B;
        A = Math.min(A, B);
        B = temp - A;
        temp = C + D;
        C = Math.min(C, D);
        D = temp - C;
        
        for (let ans = 0; true; ans++) {
            if (A <= C && B <= D) {
                return ans;
            }
            else if (B <= D) {
                A >>= 1;
            }
            else {
                B >>= 1;
                temp = A + B;
                A = Math.min(A, B);
                B = temp - A;
            }
        }
    }
}
