class Solution {
public:
    int trap(vector<int>& height) {
        int left=0;
        int right = height.size()-1;
        int max_left = 0;
        int max_right = height.size()-1;
        int water = 0;

        while(left<right){
            if(height[left] <= height[right]){
                //find left height greater than left height
                if(height[left] > height[max_left]){
                    max_left = left;
                }else{
                    water += height[max_left] - height[left];
                }
                left++;
            }
            else{
                //find right height greater than right height
                if(height[right] > height[max_right]){
                    max_right = right;
                }else{
                    water += height[max_right] - height[right];
                }
                right--;
            }
        }
        return water;
    }
};
