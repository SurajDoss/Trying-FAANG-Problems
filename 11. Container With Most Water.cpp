/*
Medium

Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). 
n vertical lines are drawn such that the two endpoints of the line i is at (i, ai) and (i, 0). 
Find two lines, which, together with the x-axis forms a container, such that the container contains the most water.

Notice that you may not slant the container
Constraints:

n == height.length
2 <= n <= 105
0 <= height[i] <= 104
Example 2:

Input: height = [1,1]
Output: 1
Example 3:

Input: height = [4,3,2,1,4]
Output: 16
https://leetcode.com/problems/container-with-most-water/
*/

////////////////////////////////////////////////////////////////
//O(n^2)
////////////////////////////////////////////////////////////////
class Solution {
public:
    int maxArea(vector<int>& height) {
        long long int maxi = 0;
        for(int i =0; i<height.size(); i++){
            for(int j = i +1; j<height.size(); j++){
                int temp;
                temp = min(height[i], height[j]) * abs(i - j);
                if(temp> maxi){
                    maxi= temp;
                }
            }
        }
    return maxi;
    }
};
