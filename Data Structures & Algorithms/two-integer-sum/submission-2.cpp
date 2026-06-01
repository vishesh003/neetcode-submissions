class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            int complement=target-nums[i];
            if(mpp.find(complement)!=mpp.end()){
                ans.push_back(i);
                ans.push_back(mpp[complement]);
            }
            mpp[nums[i]]=i;
        }
        sort(ans.begin(),ans.end());
        
        return ans;
    }
};
