#include<bits/stdc++.h>
using namespace std;

void Bhagwat_geeta( int arr[], int brr[], int n )
{
    for(int i=0;i<n;i++)
        {
            if(arr[i]>brr[i])
            {
                cout<<"no"<<endl;
                return ;
            }
            if(brr[i]>arr[i] && brr[i]>(brr[(i+1)%n]+1))
            {
                cout<<"no"<<endl;
                return ;
            }

        }
        cout<<"yes"<<endl;

}
//…............... . . 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        int brr[n];
        for(int i=0;i<n;i++)
        {
            cin>>brr[i];
        }
        Bhagwat_geeta(arr,brr,n);
        
    }
}
