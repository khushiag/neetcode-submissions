class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int beginning= 0;
        int end = numbers.size()-1;

        while(beginning < end){
            if(numbers[beginning] + numbers[end] == target){
                return {beginning+1, end+1};
            }
            else if(numbers[beginning] + numbers[end] < target){
                beginning++;
            }
            else{
                end--;
            }
        }
    

    }
};
