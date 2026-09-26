class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        vector<int>count1(26,0);
        vector<int>count2(26,0);
        int l=0;
        int r=0;
        for(char s:s1){
            count1[s-'a']++;
        }
        while(r<s2.size()){
            count2[s2[r]-'a']++;
               if(r - l + 1 > n) {
            count2[s2[l] - 'a']--;
            l++;
        }

        if(r - l + 1 == n && count1 == count2) {
            return true;
        }
        r++;
        }
       
        return false;
    }
};
