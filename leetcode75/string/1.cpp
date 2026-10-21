class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res = "";
        int i =0;
        while(i<word1.length() and i < word2.length())
        {
            res += word1[i];
            res += word2[i];
            i++;
        }

        while(i<word1.length())
        {
            res+= word1[i]; i++;
        }
        while(i<word2.length())
        {
            res += word2[i++];
        }
        return res;

    }
};