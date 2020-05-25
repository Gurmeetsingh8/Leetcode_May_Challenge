class Solution {
public:
    int findMaxLength(vector<int>& nums) {
     int count = nums.size();
	int maxsize = 0;
	 //bucket[0] --> when all the elements are 0, bucket[bucket.size()-1] --> when all elements are 1, bucket[nums.size()] --> middle element--> when there are equal number of ones and zeros
	vector<int> bucket(2*nums.size()+1, INT_MIN);
	for (auto i=0; i<nums.size(); i++) {
		if (nums[i] == 0)
			count -= 1;
		else
			count += 1;
		if (count == nums.size())
			maxsize = max(i+1, maxsize);
		else if (bucket[count] != INT_MIN) {
			maxsize = max(maxsize, i-bucket[count]);
		} else {
			bucket[count] = i;
		}
	}
	return maxsize;
    }
};
