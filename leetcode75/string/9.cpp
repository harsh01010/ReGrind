class Solution {
public:
    void push_num(int n,vector<char>&res)
    {
        string temp;
        while(n)
        {

            temp.push_back(char(48+n%10));
            n/=10;
        }
        reverse(temp.begin(),temp.end());
        for(auto it:temp)
            res.push_back(it);

    }
    int compress(vector<char>& chars) {
        vector<char>res;
        char prev = chars[0];
        int cnt = 1;
        for(int i = 1;i<chars.size();i++)
        {
            if(chars[i]==prev)
            {
                cnt++;
            }
            else{
                res.push_back(prev);
                if(cnt>1){
                push_num(cnt,res);}
                prev = chars[i];
                cnt = 1;
            }
        }
        res.push_back(prev);
        if(cnt>1){
        push_num(cnt,res);}
        chars = res;
        return chars.size();
            } 
};