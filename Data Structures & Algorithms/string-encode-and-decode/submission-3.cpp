class Solution {
public:

    string encode(vector<string>& strs) {
        string result="";
        for(auto s:strs){
            string encoded=to_string(s.size())+"#"+s;
            result+=encoded;
        }
        return result;                           
    }

    vector<string> decode(string s) {
        vector<string>ans;
        int i=0;
        while(i<s.size()){
            int j=i;
            while(s[j]!='#'){
                j++;

            }
            int length=stoi(s.substr(i,j-i));
            string len=s.substr(j+1,length);
            ans.push_back(len);
            i=j+1+length;
        }
        return ans;

    }
};
