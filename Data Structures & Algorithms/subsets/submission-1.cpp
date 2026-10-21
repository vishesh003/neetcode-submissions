class Solution {
public:
    void solve(int i,vector<vector<int>>&ans,vector<int>&sol,vector<int>&nums){
        if(i==nums.size()){
            ans.push_back(sol);
            return;
        }
        sol.push_back(nums[i]);
        solve(i+1,ans,sol,nums);
        sol.pop_back();
        solve( i + 1, ans,sol,nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>sol;
        solve(0,ans,sol,nums);
        return ans;
    }
};
