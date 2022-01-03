/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Output: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]
Constraints:

2 <= nums.length <= 103
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.

https://leetcode.com/problems/two-sum/
*/
/////////////////////////////////////////
//o(n^2)
////////////////////////////////////////
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int a= 0; a<nums.size()-1; a++){
            //int ntf = target - nums[a];
            for(int b = a + 1; b< nums.size(); b++){
                if(nums[a]+nums[b] == target){
                     return {a,b};
                }
            }
        }
    }
}; 

////////////////////////////////////////
////////////////////////////////////////

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map <int, int> mp;            // 2 -> 0, 7-> 1....
       vector <int> ans;
        for(int i =0; i<nums.size(); i++){
            auto it = mp.find(nums[i]);
            if(it == mp.end())
                mp[nums[i]] = i;
            auto targetValue = mp.find(target - nums[i]);
            if(targetValue != mp.end() && i != mp[target - nums[i]]){
                ans.push_back(mp[target - nums[i]]);
                ans.push_back(i);
                break;
            }
        }
        return ans;
    }
};
    
