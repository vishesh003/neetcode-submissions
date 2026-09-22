class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s;
        int longest=0;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            int b=nums[i];
            int cnt=1;
            if(s.find(b-1)==s.end()){
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
