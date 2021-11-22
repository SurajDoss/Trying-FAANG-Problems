class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
        vector<int> order = heights;
        int missmatch = 0;
        
        sort(order.begin(), order.end());
        
        for(int i = 0; i<heights.size(); i++)
        {
            if(heights[i] != order[i]){
                missmatch++;
            }
        } 
        
        return missmatch;
    }
};
