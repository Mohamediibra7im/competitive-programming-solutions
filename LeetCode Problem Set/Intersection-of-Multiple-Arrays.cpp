class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int,int> umap;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[i].size();j++){
                umap[nums[i][j]]+=1;
                
            }
            
        }
        vector<int> v;
        for(auto i:umap){
            if(i.second==nums.size()){
                v.push_back(i.first);
                
            }
        }
        sort(begin(v),end(v));
    
        return v;
    }
};