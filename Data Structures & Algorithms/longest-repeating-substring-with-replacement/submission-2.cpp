class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        int r=0;
        int maxfreq=0;
        int count[26]={};
        int ans=0;
        while(r<s.size()){
            count[s[r]-'A']++;
            maxfreq=max(maxfreq,count[s[r]-'A']);
            while((r-l+1)-maxfreq>k){
                count[s[l]-'A']--;
                l++;
            }

            ans=max(ans,r-l+1);
            r++;

        }
        return ans;
    }
};
