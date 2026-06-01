class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxa=0;
        int left=0;
        int right=heights.size()-1;
        while(left<right){
            int width=right-left;
            int area=min(heights[left],heights[right])*width;
            maxa=max(maxa,area);
            if(heights[left]<=heights[right])left++;
            else{
                right--;
            }
        }
        return maxa;
    }
};
