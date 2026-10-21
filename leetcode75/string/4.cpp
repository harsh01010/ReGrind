class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        int cnt = 0;
        int prev = 0;
        int next;
        for(int i=0;i<f.size()-1;i++)
        {
            next = f[i+1];
            if(prev == 0 && next ==0 and f[i]==0)
            {    cnt++;
                prev = 1;
            }
            else{
                prev = f[i];
            }
        
        }
        next = 0;
        if(f[f.size()-1]==0 && prev==0)
            cnt++;
        
        return cnt>=n;
    }
};