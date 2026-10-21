class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>result;
        vector<int>sol;
        solve(0,nums,target,sol,result);
        return result;
    }
    void solve(int i,vector<int>&nums,int target,vector<int>&sol,vector<vector<int>>&result){
        if(target==0){
            result.push_back(sol);
            return;
        }
        if(target<0||i>=nums.size())return;
        sol.push_back(nums[i]);
        solve(i,nums,target-nums[i],sol,result);
        sol.pop_back();
        solve(i+1,nums,target,sol,result);
    }
};
