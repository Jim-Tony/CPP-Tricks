#include<bits/stdc++.h>
using namespace std;
//Replacing a char with a string in a atring
//Use regex library 
class Solution {
public:
    string defangIPaddr(string address) {
        
        return regex_replace(address, regex("[.]"), "[.]");
    }
};
int main(){
    Solution ob;
    string ans = ob.defangIPaddr("231.12.11.09");
    cout<<ans<<endl;
}