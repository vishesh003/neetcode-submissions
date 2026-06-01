class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        quicksort(nums,0,n-1);
        return nums;
    }
    void quicksort(vector<int>&nums,int p,int q){
        if(p<q){
            int r=partition(nums,p,q);
            quicksort(nums,0,r-1);
            quicksort(nums,r+1,q);
        }
    }
    int partition(vector<int>&nums,int p,int q){
        int i=p-1;
        int pivot=nums[q];
        for(int j=p;j<q;j++){
            if(nums[j]<pivot){
                i++;
                swap(nums[i],nums[j]);
            }
        }
        swap(nums[i+1],nums[q]);
        return i+1;

    }

};