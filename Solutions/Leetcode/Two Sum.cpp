 class Solution {
 public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int > mp;

        for(int i=0; i<nums.size() ; i++)
        {
            int bud = target - nums[i];
           if(mp.find(bud) != mp.end())
           return { mp[target-nums[i]] ,i };

           mp.insert({nums[i], i });

        }
        return {};
    }
};
