#include<bits/stdc++.h>
using namespace std;
bool strLength(const string &str1,const string &str2){
    return str1.length()<str2.length();
}
int main(int argc, const char** argv) {
    vector<string> s {"hello","Welcome","Programmer","Competition"};
    auto it  = max_element(begin(s),end(s),strLength);
    cout<<"The longest string in the vector of strings is\n"<<;
    cout<<*it<<endl;
    return 0;
}