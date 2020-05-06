class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>m;
        int maxi = 0;
        int maxi_element=0;
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(nums[i])==m.end())
                m[nums[i]]=1;
            else
                m[nums[i]]++;
        }
        for(auto i : m)
        {
            if(i.second > maxi){
                maxi = i.second;
                maxi_element = i.first;
            }
        }
        return maxi_element;
    }
};
