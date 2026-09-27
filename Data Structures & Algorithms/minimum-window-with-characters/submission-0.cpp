class Solution {
public:
    string minWindow(string s, string t) {
      unordered_map<char,int>need;
      for(char st:t){
        need[st]++;
      }
      unordered_map<char,int>window;
      int have=0;
      int needCount=need.size();
      int minLen=INT_MAX;
      int start=0;
      int l=0;
      int r=0;
      while(r<s.size()){
        window[s[r]]++;
        if(need.count(s[r])&&window[s[r]]==need[s[r]]){
            have++;
        }
       
        while(have==needCount){
             if(r-l+1<minLen){
            minLen=r-l+1;
            start=l;
        }
            window[s[l]]--;
            if(need.count(s[l])&&window[s[l]]<need[s[l]]){
                have--;
                
            }
            l++;
        }
        r++;
      }
      if(minLen == INT_MAX)
    return "";

return s.substr(start, minLen);  
    }
};
