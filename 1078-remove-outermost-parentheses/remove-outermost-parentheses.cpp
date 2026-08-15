class Solution {
public:
    string removeOuterParentheses(string s) {
        int check=0;
        string ans;
        for(char c:s){
            if(c=='('){
                check++;
                if(check>1)ans+=c;
            }
            else {
                check--;
                if(check>0)ans+=c;
            }
        }
        return ans;
        
    }
};