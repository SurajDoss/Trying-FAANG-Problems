/*


The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,

F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1.
Given n, calculate F(n).

 

Example 1:

Input: n = 2
Output: 1
Explanation: F(2) = F(1) + F(0) = 1 + 0 = 1.
Example 2:

Input: n = 3
Output: 2
Explanation: F(3) = F(2) + F(1) = 1 + 1 = 2.
Example 3:

Input: n = 4
Output: 3
Explanation: F(4) = F(3) + F(2) = 2 + 1 = 3.
 

Constraints:

0 <= n <= 30

https://leetcode.com/problems/fibonacci-number/


*/


//////////////////////////////////////////////////////
/////////////   solution 1 recursive
//////////////////////////////////////////////////////
class Solution {
public:
    int fib(int n) {
        if(n==0){
            return 0;
        }if(n==1){
            return 1;
        }
        return fib(n-1)+fib(n-2);
    }
};


//////////////////////////////////////////////////////
/////////////   solution 2 dynamic
//////////////////////////////////////////////////////
class Solution {
public:
    int fib(int n) {
        
        int memo[n+1];
        
        if(n<2){
            return n;
        }
        
        memo[0] = 0;
        memo[1] = 1;
        
        for(int i = 2; i<=n; i++){
            memo[i] = memo[i-1] + memo[i-2];
        }
        return memo[n];
    }
};

//////////////////////////////////////////////////////
/////////////   solution 3 Binets
//////////////////////////////////////////////////////

class Solution {
public:
    int fib(int n) {
        
        double phi_1 = pow((1+sqrt(5))/2 , n);
        double phi_2 = pow((1-sqrt(5))/2 , n);
        
        return round(( phi_1 - phi_2) / sqrt(5) );
    }
};


//////////////////////////////////////////////////////
/////////////   solution 4
//////////////////////////////////////////////////////
class Solution {
public:
    int fib(int n) {
        
        int temp;
        int a = 0;
        int b = 1;
        if(n<2){
            return n;
        }
        for (int i =1; i <n; i++){
            temp = a+b;
            a = b;
            b = temp;
        }
        return temp;
    }
};


