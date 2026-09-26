class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>map;
        int l=0;
        int r=0;
        int maxlength=0;
        while(r<s.size()){
            if(map.find(s[r])!=map.end()){
                l=max(l,map[s[r]]+1);
            }
            map[s[r]]=r;
            maxlength=max(maxlength,r-l+1);
            r++;

        }
        return maxlength;
    }
};
