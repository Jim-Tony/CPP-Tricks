#include<bits/stdc++.h>
using namespace std;
int main(int argc, const char** argv) {
    string u = "JIM TONY CSE";
    string l = "please make a way";
    transform(begin(u),end(u),begin(u),::tolower);
    transform(begin(l),end(l),begin(l),::toupper);
    cout<<"In lower->"<<u<<endl<<"In upper->"<<l<<endl;
    return 0;
}
