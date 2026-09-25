class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0;
        int r=heights.size()-1;
        int maxa=0;
        while(l<r){
            int area=(r-l)*min(heights[l],heights[r]);
            maxa=max(maxa,area);
            if(heights[l]<heights[r])l++;
            else r--;
        }
        return maxa;
    }
};
