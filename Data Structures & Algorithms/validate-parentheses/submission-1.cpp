class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(char sl:s){
            if(sl=='('||sl=='{'||sl=='['){
              st.push(sl);
            }
            else{
                if(st.empty())return false;
                if(sl==')'&&st.top()!='(')return false;
                if(sl=='}'&&st.top()!='{')return false;
                if(sl==']'&&st.top()!='[')return false;
                st.pop();
            }
        }
        return st.empty();
    }
};
