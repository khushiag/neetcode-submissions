class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i=0, j=0, k=nums.size()-1;
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int i=0; i<nums.size()-2; i++){
            if (i > 0 && nums[i] == nums[i-1]) continue;
            j=i+1;
            k=nums.size()-1;
            int target = -nums[i];
            while(j<k){
                if(nums[j]+nums[k] == target){
                    ans.push_back({nums[i], nums[j], nums[k]});
                    while (j < k && nums[j] == nums[j+1]) j++;
                    while (j < k && nums[k] == nums[k-1]) k--;
                    j++; k--;
                }
                else if(nums[j]+nums[k] < target){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return ans;
    }
};