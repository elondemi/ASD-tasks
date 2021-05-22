class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int j = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> result;
        for(int i = 1; i <= j; i++) {
            if(binary_search(nums.begin(), nums.end(), i) == 0) result.push_back(i);
        }
        return result;
    }
};