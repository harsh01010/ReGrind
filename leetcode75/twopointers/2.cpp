class Solution {
public:
    bool isSubsequence(string s, string t) { 
        int i = 0 , j =0;
        for(;i<t.length();i++)
        {
            if(j == s.length())return true;
            if(t[i]==s[j]) j++;
        }
        
        return j>=s.length();
    }
};