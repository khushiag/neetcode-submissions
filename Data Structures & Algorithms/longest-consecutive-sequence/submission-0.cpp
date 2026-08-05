class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest = 0;
        unordered_set<int> mp(nums.begin(), nums.end());

        for(int i=0; i<nums.size(); i++){
            if(mp.find(nums[i]-1)==mp.end()){
                int current = nums[i];
                int curlen = 1;

                while(mp.find(current+1) != mp.end()){
                    curlen++;
                    current++;
                }
                longest = max(longest, curlen);
            }
        }
        return longest;
    }
};
