class Solution {
public:
    void solve(vector<int>&nums,int i,vector<int>&ans,vector<vector<int>>&allsubsets){
        if(i==nums.size()){
            allsubsets.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        solve(nums,i+1,ans,allsubsets);
        ans.pop_back();
        int idx=i+1;
        while(idx<nums.size()&&nums[idx]==nums[idx-1])idx++;
        solve(nums,idx,ans,allsubsets);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>allsubsets;
        vector<int>ans;
        solve(nums,0,ans,allsubsets);
        return allsubsets;
    }
};
