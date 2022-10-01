class LUPrefix { 
public: 
    vector<bool>vis; 
    int TT=1; 
    LUPrefix(int _76) { 
        vector<bool>OO(_76+2,false); 
        vis=OO;  vis[0]=true;  TT=1; 
    } 
    void upload(int v) { 
        vis[v]=true; 
        while(vis[TT])TT++;  
    } 
    int longest() { 
        return TT-1; 
    } 
};

/**
 * Your LUPrefix object will be instantiated and called as such:
 * LUPrefix* obj = new LUPrefix(n);
 * obj->upload(video);
 * int param_2 = obj->longest();
 */