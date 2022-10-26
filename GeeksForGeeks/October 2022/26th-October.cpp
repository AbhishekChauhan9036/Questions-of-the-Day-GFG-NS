class Solution{

public:

    int findMin(int n, char a[]){

        // code here

        int r = 0, g = 0, b = 0;

        // COUNT FREQUENCY

        for(int i = 0; i < n; i++){

            if(a[i] == 'R')  r++;

            else if(a[i] == 'G')  g++;

            else b++;

        }

        

        // If all are of same color, they remain

        if(r == n or g == n or b == n)  return n;

        /* If all elements are even or odd, 

        *      they will again fuse to 

        *      convert to some other color, and by 

        *      dry run, if they were 2, 2, 2.   // ALL EVEN 

        *      they will convert to 1, 1, 1.    // ALL ODD

        *      then RG changes to B. 

        *      so BB or 2 remains. hence return 2

        */

        else if((r%2 == 0 and g%2 == 0 and b%2 == 0) or 

                (r%2==1 && g%2==1 && b%2==1)) return 2;

        // Remaining ones end up in 1

        /*      like this:

        *       2, 2, 1

        *       1, 1, 1

        *       1, 1

        *       1

        */

        return 1;

    }

};