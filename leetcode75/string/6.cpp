class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int i=0,j=0;
        while(j<s.length() and s[j]!=' ')j++;
       int swp = j-1;
       while(i<s.length())
       {
        while(i<=swp){
            char temp = s[i];
            s[i] = s[swp];
            s[swp] = temp;
            i++;swp--;
        }
        i = j+1;j++;
        while(j<s.length() and s[j]!=' ')j++;
        swp = j-1;

       }
       i = 0 , j = s.length()-1;
       while(s[i]==' ')i++;
       while(s[j]==' ')j--;
       string res;
       for(;i<= j;i++)
       {
        res += s[i];
        if(s[i]==' ')
        {
            while(s[i]==' ')i++; 
            i--;
        }
       }
       return res;
    }

};