class Solution {
public:
    string defangIPaddr(string address) {
        string temp=address;
        string ans="";
        for(int i=0;i<temp.size();i++){
            if(temp[i]=='.')ans+="[.]";
            else ans+=temp[i];
        }
        return ans;
        
    }
};