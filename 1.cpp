ass Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> lookup;
        for(size_t i = 0; i < nums.size(); ++i)
        {
            int& cur = nums[i];
            auto iter = lookup.find(target - cur);
            if (iter != lookup.end())
            {
                return vector<int>({iter->second, i});
            }
            else
            {
                lookup[cur] = i;
            }
        }
        return vector<int>();
    }
};
