class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int k=nums[0];
         int count=1;
            
        for(int i=1;i<nums.size();i++){
               if(k==nums[i]){count++;}
        else{
                count--;
            }
             if(count==0){
                k=nums[i];
                count=1;
            }
          
        }
        return k;
    }
};