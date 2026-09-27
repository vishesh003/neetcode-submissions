class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dq;
        vector<int>ans;
        int l=0;
        int r=0;
        while(r<nums.size()){
          
            l=r-k+1;
          
          while(!dq.empty()&&dq.front()<l){
            dq.pop_front();
          }
          while(!dq.empty()&&nums[dq.back()]<=nums[r]){
            dq.pop_back();
          }
          dq.push_back(r);
          if(r >= k - 1) ans.push_back(nums[dq.front()]);
                        

          r++;  
        }
        return ans;
    }
};
