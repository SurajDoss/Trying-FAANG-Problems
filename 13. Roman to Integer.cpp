class Solution {
public:
    int romanToInt(string s) {
      
    std::map<char, int>  value= { {'I', 1},{'V', 5},{'X', 10},{'L', 50},{'C', 100},{'D', 500},{'M', 1000}};
        
        int num = 0, previous = INT_MIN;
        
        for(int i = s.size()- 1; i>= 0; i--){
            if(value[s[i]]>= previous){
                num += value[s[i]];
            }else{
                num -= value[s[i]];
            }
            
            previous = value[s[i]];
        }
        return num;
    }
};
