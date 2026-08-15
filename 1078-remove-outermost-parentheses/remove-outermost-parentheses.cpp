class Solution {
public:
    string removeOuterParentheses(string s) {
        int check=0;
        string ans;
        for(char c:s){
            if(c=='('){
                
                if(check++)ans+=c;
            }
            else {
                
                if(--check)ans+=c;
            }
        }
        return ans;
        
    }
};