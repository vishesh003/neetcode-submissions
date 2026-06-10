class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int largest=0;
        int l=0;
        unordered_map<char,int>mpp;
        for(int r=0;r<s.size();r++){
            if(mpp.find(s[r])!=mpp.end()){
                l=max(mpp[s[r]]+1,l);
            }
            mpp[s[r]]=r;
            largest=max(largest,r-l+1);

        }
        return largest;
    }
};
