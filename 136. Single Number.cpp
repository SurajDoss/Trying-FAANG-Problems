class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=0, j=1; i<nums.size()-1; i++, j++){
            if(nums[i]!=nums[j]){
                return nums[i];
            }
            i++;
            j++;
        }
        return nums[nums.size()-1];
    }
};
