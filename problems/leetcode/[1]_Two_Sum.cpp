class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> numMap;
        for (int i = 0; i < nums.size(); ++i) {
            int currentNum = nums[i];
            int complement = target-currentNum;
            if (numMap.count(complement)) {
                return{numMap[complement],i};
            }
            numMap[currentNum]=i;
        }
        return{};
    }
};