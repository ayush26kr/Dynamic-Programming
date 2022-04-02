class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.length()==NULL)
            return true;
        int idx=0;
        for(int i=0;i<t.length();i++){
            if(t[i]==s[idx])
                idx++;
        if(idx>=s.length())
            return true;
        }
        return false;
    }
};
