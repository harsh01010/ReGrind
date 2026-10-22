class Solution {
public:
    string reverseVowels(string s) {
        int i = 0 , j = s.length()-1;
        unordered_set<char> st = {'a','e','i','o','u','A','E','I','O','U'};
        while(i<=j)
        {
            if(st.find(s[i]) != st.end() and st.find(s[j]) != st.end())
            {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                i++;j--;
            }
            else if(st.find(s[i]) != st.end()) j--;
            else if(st.find(s[j])!=st.end()) i++;
            else{i++;j--;}
        }
        return s;
    }
};