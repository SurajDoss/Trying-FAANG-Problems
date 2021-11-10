/*
Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

 

Example 1:


Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.
Example 2:

Input: height = [4,2,0,3,2,5]
Output: 9
 

Constraints:

n == height.length
1 <= n <= 2 * 104
0 <= height[i] <= 105

https://leetcode.com/problems/trapping-rain-water/

*/



class Solution {
public:
    int trap(vector<int>& height) {
        int total = 0;
        for(int ptr = 0; ptr< height.size();ptr++){
            int leftptr = ptr, rightptr = ptr, maxLeft = 0, maxRight = 0;
            while(leftptr>=0){
                maxLeft = max(maxLeft, height[leftptr]);
                leftptr--;
            }
            while(rightptr<height.size()){
                maxRight = max(maxRight, height[rightptr]);
                rightptr++;
            }
            int current_water_level = min(maxLeft, maxRight) - height[ptr];
            if(current_water_level >=0){
                total += current_water_level;
            }
        }
        return total;
    }
};
