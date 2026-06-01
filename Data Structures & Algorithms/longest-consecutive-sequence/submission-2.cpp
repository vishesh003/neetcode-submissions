class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s;
        int longest=0;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        for(int num:nums){
            int cnt=1;
         if(s.find(num-1)==s.end()){
            int b=num;
            while(s.find(b+1)!=s.end()){
                b++;
                cnt++;

            }
            longest=max(longest,cnt);
         }
        }
        return longest;
    }
};
