class Solution {
public:
    bool match(string word,string pattern){
        int mp1[26]={0};
        int mp2[26]={0};
        for(int i=0;i<pattern.size();i++){
            int a=pattern[i]-'a';
            int b=word[i]-'a';
            if(mp1[a]!=mp2[b])return false;
            mp1[a]=i+1;
            mp2[b]=i+1;

        }
        return true;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
        for(string word:words){
            if(match(word,pattern))ans.push_back(word);
        }
        return ans;
        
    }
};