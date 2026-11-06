class Solution {
   public:
    int majorityElement(vector<int>& nums) {
        int ans;
        unordered_map<int, int> temp;
        for (int i = 0; i < nums.size(); i++) {
            temp[nums[i]]++;
        }
        for (auto i : temp) {
            if (i.second > nums.size() / 2) {
                ans = i.first;
            }
        }
        return ans;
    }
};