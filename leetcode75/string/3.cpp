class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int mx = 0;
        for(auto it:candies) mx = max(mx,it);

        vector<bool>res;
        for(int i =0 ;i<candies.size();i++)
        {
            if(extraCandies+candies[i]>=mx)res.push_back(true);
            else res.push_back(false);
        }
        return res;
    }
};