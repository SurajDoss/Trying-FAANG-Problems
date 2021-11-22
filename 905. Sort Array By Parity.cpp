class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int sz = nums.size();
        vector<int> evenNums;
        vector<int> oddNums;
        for(int i = 0; i <nums.size(); i++){
            if(nums[i]%2 == 0){
                evenNums.push_back(nums[i]);
            }else{
                oddNums.push_back(nums[i]);
            }
        }
        
        evenNums.insert(evenNums.end(), oddNums.begin(), oddNums.end());
        return evenNums;
        
        
    }
};
