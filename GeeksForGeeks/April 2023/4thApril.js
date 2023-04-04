int minSteps(string str) {
    int a=0,b=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='a'){
            int j=i;
            while(str[j]=='a'){
                j++;
            }
            a++;
            i=j-1;
        }
        else{
            int j=i;
            while(str[j]=='b'){
                j++;
            }
            b++;
            i=j-1;
        }
    }
    int k = min(a,b);
    return k+1;
}
