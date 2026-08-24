class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int l=0; 
        int r=0;
        int maxi = 0;
        for(r=0; r<s.size(); r++){
            while(seen.find(s[r]) != seen.end()){
                seen.erase(s[l]);
                l++;
            }
            seen.insert(s[r]);
            maxi = max(maxi, r-l+1);
        }
        return maxi;
    }
};