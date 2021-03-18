class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> ans;
        for(int a= 0; a<nums.size()-1; a++){
            //int ntf = target - nums[a];
            for(int b = a + 1; b< nums.size(); b++){
                if(nums[a]+nums[b] == target){
                    ans.push_back(a);
                    ans.push_back(b);
                    return ans;
                }
            }
        }
       return ans;
    }
}; 
