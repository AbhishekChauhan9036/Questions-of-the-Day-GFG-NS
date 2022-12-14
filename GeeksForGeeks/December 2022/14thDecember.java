
class Solve {

    Vector<Integer> findRange(String str, int n) {
       
       Vector<Integer> vector = new Vector<>();
       int maxl=0,maxr=0,msf=0,meh=0,s=0;
       
       for(int i=0;i<str.length();i++){
           meh += (str.charAt(i)=='0')?1:-1; 
           if(msf<meh){
               msf=meh;
               maxl=s;
               maxr=i;
           }
           if(meh<0){
               meh=0;
               s=i+1;
           }
       }

       if((maxl==0|| maxr==0) && msf==0){
           vector.add(-1);
           return vector;
       }
       vector.add(maxl+1);
       vector.add(maxr+1);
       
       return vector;
   }
}
