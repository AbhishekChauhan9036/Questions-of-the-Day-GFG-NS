class Solution{   
public:
    int klengthpref(string arr[], int n, int k, string str){   
        int count =0;
        string temp;
        for(int i =0; i<n;i++){
            temp = arr[i];
            for(int j = 0;j<=k;j++){
                if(j==k){
                    count++;
                    break;
                }
                else if(temp[j] == '\0'){
                    break;
                }
                else if(temp[j] != str[j]){
                    break;
                }
                
            }
        }
        return count;
    }
};
