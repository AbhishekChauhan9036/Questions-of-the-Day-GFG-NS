
class Solution
{
    public:
    /*You are required to complete this method*/
   int findK(int a[MAX][MAX],int n,int m,int k)
    {
        vector<int> v;
         int i = 0;
         
         int nrow = n;
         int ncol = m;
         int urow = 0;
         int lcol = 0;
         int lrow = n-1;
         int rcol = m-1;

         while(i<m*n)
         {
             
             for(int j=lcol;j<ncol;j++)
             {
                 i++;
                 if(i==k) return a[urow][j];
                 
             }
             urow++;
             for(int j=urow;j<nrow;j++)
             {
                 i++;
                 if(i==k) return (a[j][rcol]);
             }
             rcol--;
            
             for(int j=rcol;j>=lcol;j--)
             {
                 i++;
                 if(i==k) return a[lrow][j];
             }
             
             lrow--;
             for(int j=lrow;j>=urow;j--)
             {
                 i++;
                 if(i==k) return a[j][lcol];
                 
             }
             lcol++;
             
             nrow--;
             ncol--;
         }
         
         return -1;
    }
};
