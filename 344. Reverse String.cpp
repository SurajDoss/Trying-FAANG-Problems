/*

Write a function that reverses a string. The input string is given as an array of characters s.

 

Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
Example 2:

Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
 

Constraints:

1 <= s.length <= 105
s[i] is a printable ascii character.

https://leetcode.com/problems/reverse-string/

*/

//////////////////////////////////////////////
////////////  solution 2
//////////////////////////////////////////////

class Solution {
public:
    void reverseString(vector<char>& s) {
        return reverse(s.begin(), s.end());
    }
};


//////////////////////////////////////////////
////////////  solution 2
//////////////////////////////////////////////

class Solution {
public:
    void reverseString(vector<char>& s) {
        int sz = s.size();
        int pointer_1 = 0;
        int pointer_2 = sz-1;
        
        for(int i =1; i<=sz/2; i++){
             swap(s[pointer_1++], s[pointer_2--]);
        }

    }
};
