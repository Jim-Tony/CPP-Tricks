#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int val;
    Solution(int num){
        this->val = num;
    }
    int count_set_bits() {
        return __builtin_popcount(val);
    }
    int count_trail_zero_bits(){
        return __builtin_ctz(val);
    }
    int count_lead_zero_bits(){
        return __builtin_clz(val);
    }
};
int main(int argc, const char** argv) {
    Solution ob(23);
    Solution ob1(16);
    Solution ob2(18);
    //Count the no of ones in the bit format of the integer
    //For 23 binary number is 0001 0111, Hence the no of ones is 4
    cout<<ob.count_set_bits()<<endl;
    //Count the no of trailing 0 bits in the number
    //For 16 binary form is 0001 0000, Hence the trailing no of zero bits is 4
    cout<<ob1.count_trail_zero_bits()<<endl;
    //Count the no of leading 0 bits in the number
    //For 18 binary form is 0001 0010, Hence the leading no of zero bits is 32 - 5  = 27(For unsigned_int32)
    cout<<ob2.count_lead_zero_bits()<<endl;
    return 0;
}