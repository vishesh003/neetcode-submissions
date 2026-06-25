class Solution {
public:
    void solve(vector<int>&nums,int i,vector<int>&combine,vector<vector<int>>&ans,int target){
         if(target==0){
            ans.push_back(combine);
            return;
        }
        if(i==nums.size()||target<0)return;
       
        combine.push_back(nums[i]);
        
         solve(nums,i,combine,ans,target-nums[i]);
         combine.pop_back();
         solve(nums,i+1,combine,ans,target);

    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>combine;
        solve(nums,0,combine,ans,target);
        return ans;
    }
};
