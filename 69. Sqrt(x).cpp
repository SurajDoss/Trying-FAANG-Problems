class Solution {
public:
    int mySqrt(int x) {
        int high = x;
        int low = 0;
        int mid = 0;
        int ans = 0;
        if(x<=1) {
            return x;
        }
        while(low<=high){
            mid = low + (high - low)/2;
        
            if(mid == x/mid){
                return mid;
            }else if(mid<x/mid){
                ans = mid;
                low = mid +1;
            }else{
                high = mid -1;
            }
        
        }
       
        return ans;
    }
};
