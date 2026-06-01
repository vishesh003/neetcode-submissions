class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        int cnt=0;
        for(int n:nums){
            if(st.find(n-1)==st.end()){
              int length=0;
              while(st.find(n+length)!=st.end()){
                length+=1;
                cnt=max(cnt,length);
              }
            }

        }
        return cnt;
    }
};
