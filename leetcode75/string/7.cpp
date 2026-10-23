class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int temp = 1;
        int temp2 = 1;
        vector<int>preProd;
        vector<int>postProd;
        for(int i=0;i<nums.size();i++)
        {
            preProd.push_back(temp);
            temp *= nums[i];
            postProd.push_back(temp2);
            temp2 *= nums[nums.size()-1-i];
        }

        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            ans.push_back(preProd[i]*postProd[nums.size()-1-i]);
        }
        return ans;
    }
};