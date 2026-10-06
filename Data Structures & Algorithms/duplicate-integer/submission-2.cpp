class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        int n = nums.size();
        bool c = false;
        for (int i = 0; i < n; i++){
            if (s.count(nums[i]) == 1){
                c = true;
            }
            else{
                s.insert(nums[i]);
            }

        }
        return c;
    }
};