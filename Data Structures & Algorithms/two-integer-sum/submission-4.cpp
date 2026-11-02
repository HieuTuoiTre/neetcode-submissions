class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result(2);
        for(int i = 0; i < (target)/2 ; i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target)
                return result = {i,j};
            }
        }
    }
};
