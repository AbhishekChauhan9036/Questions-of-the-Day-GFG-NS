bool is_possible_to_get_seats(int n, int m, vector<int>& seats){
        if(n==0)return true;
        
        if(m==1 && n==1 && seats[0]!=1) return true;
        if(m==1 && n==1 && seats[0]==1) return false;
        int i=0;
        while(i<m && n>0){
            if(seats[i]==1){
                i++;
                continue;
            }
            if(i<m-1 && seats[i+1]!=1  && i>0 && seats[i-1]!=1){
                seats[i]=1;
                
                n--;
            }
            if(i==0 && seats[i+1]!=1){
                seats[i]=1;
                n--;
            }
            if(i==m-1 && seats[i-1]!=1){
                seats[i]=1;
                n--;
            }
            if(n==0){
                return true;
            }
            
            
            i++;
            
        }
        
        
        return false;
        
        
        
    }
