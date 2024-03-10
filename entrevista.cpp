#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>

/*
Given a signed 32-bit integer x, 
return x with its digits reversed. 
If reversing x causes the value to go outside 
the signed 32-bit integer range [-2^31, 2^31 - 1], 
then return 0.

=== Examples ===
INPUT: 524         OUTPUT: 425
INPUT: -78         OUTPUT: -87
INPUT: 2147483648  OUTPUT: 0

*/

class Solution {
public:
    int reverse(int x) {
        long long int reversed = 0;
        while (x != 0) {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }
        if (reversed > INT_MAX || reversed < INT_MIN) {
            return 0;
        }
        return reversed;
    }
};


int main() {
    Solution sol;
    int x = 123;
    std::cout << sol.reverse(x) << std::endl;
    return 0;
}
