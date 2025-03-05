class Solution {
    public:
        bool hasDuplicate(vector<int>& nums) {
            map<int,int> dub;
            for (int i=0;i<nums.size();i++) {
                dub[nums[i]]++;
                if (dub[nums[i]]>1) {
                    return true;
                }
            }
            return false;
        }
    };