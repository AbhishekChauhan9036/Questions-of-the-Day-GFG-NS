#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
int main() {
	    int x,y;
	    cin>>x>>y;
	    int one = x*1;
	    int two = y*2;
	    int sum = one + two;
	    if(sum&1 || (y&1 && x<2)){
	       cout<<"false"<<endl;
	    }
	    else{
	        cout<<"true"<<endl;
	    } 
    return 0;
}
