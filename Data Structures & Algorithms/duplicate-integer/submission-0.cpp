class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        vector<int> Table;
        for(int i = 0; i < nums.size(); i++){
            if(std::count(Table.begin(),Table.end(),nums[i]) >= 1) return true;
            Table.push_back(nums[i]); 
        }
        return false;
    }
};