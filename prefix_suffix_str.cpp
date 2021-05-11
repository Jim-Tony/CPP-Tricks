//WOrks only in c++ 20 compiler
//Compile in a Codechef compiler C++20(gnu)
#include<bits/stdc++.h>
using namespace std;
int main(int argc, const char** argv) {
    string s = "HellloMyDearCoder";
    //prefix checker
    cout<<s.starts_with("Hel");
    //suffix checker
    cout<<s.ends_with("der");
    
    return 0;
}