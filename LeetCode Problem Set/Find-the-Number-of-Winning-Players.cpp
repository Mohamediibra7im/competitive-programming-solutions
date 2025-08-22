class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        vector<map<int,int> > vec(n);
        for(int i=0;i<pick.size();i++){
            vec[pick[i][0]][pick[i][1]]++;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            int mx=0;
            for(auto it=vec[i].begin();it!=vec[i].end();it++){
                mx=max(mx,it->second);
            }
            if(i<mx){
                ans++;
            }
        }
        
        return ans;
    }
};