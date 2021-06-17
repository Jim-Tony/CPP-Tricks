//this is a very interseting problem  
//U will be given a string containing both characters and integers
//Your task is to extract the integer value alone(either negative or positive) with sign
//If the integer is out of bound[-2^31 to 2^31] u should clampdown 

#include<bits/stdc++.h>
using namespace std;
class classTony {
public:
    int myAtoi(string s) {
        s.append("tony");
        stringstream ss;
        int x=0;
        ss<<s;
        ss>>x;
        return x;
    }
};

int main(){
    string qn = "4000111 is a number";
    cout<<"After extracting the integer from the string\n";
    classTony ob;
    cout<<ob.myAtoi(qn)<<" is the integer \n";
    return 0;

}