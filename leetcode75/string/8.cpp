class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
     int p = INT_MAX;
     int q = INT_MAX;
     for(auto it : nums)
     {
        if(it<=p) p = it;
        else if(it <= q) q =it;
        else return true;
     }
     return false;
    }
};