class Solution {
public:
    int hammingWeight(uint32_t n) {
        int counter = 0; 
        uint32_t mask = 1;
        for(int i =0; i<32; i++){
            if((n & mask) != 0) counter++;
            mask = mask << 1;
        }
        return counter;
    }
};


/////////////////////////////////////////////////////

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int counter = 0; 
        while(n){
            n = n & (n -1);
            counter++;
        }
        return counter;
    }
};
