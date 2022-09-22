class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        set<string> ws(wordDict.begin(), wordDict.end());
        vector<bool> t(s.size() +1);
        t[0] = true;
        
        for(int i=1; i<= s.size() ; i++ ) {
            for(int j=0; j<i; j++ ){ 
                if(t[j] && ws.find(s.substr(j, i-j)) != ws.end()) {
                    t[i] = true;
                    break;
                }
            }
        }
        return t[s.size()];
    }
};
