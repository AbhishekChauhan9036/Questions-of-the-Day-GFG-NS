class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
       vector<int> lower(26,0),upper(26,0);
      
      for( int i=0;i<n ;i++){
          if( str[i]>='a' && str[i]<='z'){
              lower[str[i]-'a']++;}
          else{
              upper[str[i] -'A']++;
           
              }                           }
  
       int k=0,m=0;   
      for( int i=0;i<n ;i++){
          if( str[i]>='a' && str[i]<='z'){
              while(lower[k]==0){k++;}
              lower[k]--;
             str[i]=k+'a';
          }
          else{
            while(upper[m]==0){m++;}
            upper[m]--;
           str[i]=m+'A';
           
          } }
    return str;
    }
};

