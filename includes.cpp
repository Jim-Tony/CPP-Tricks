#include<bits/stdc++.h>
using namespace std;
int main(int argc, const char** argv) {
    //In Strings
    string s1 = "aand";
    string s2 = "and";
    set<char> set1(begin(s1),end(s1));
    set<char> set2(begin(s2),end(s2));
    // checking if the characters in string s2 is present in s1 also
    cout<<"In the strings\n";
    (includes(set1.begin(),set1.end(),set2.begin(),set2.end()))?cout<<"Present\n":cout<<"Not Present\n";
    
    //In vectors of integers
 
    vector<int> v1 = {2,1,5,4,8,9,6};
    vector<int> v2 = {1,4,9};
    //Sort first to check or move each vector to a ordered set
    sort(begin(v1),end(v1));
    sort(begin(v2),end(v2));
    cout<<"In the vector\n";
    // checking if the integers in vector v2 is present in v1 also
    (includes(v1.begin(),v1.end(),v2.begin(),v2.end()))?cout<<"Present\n":cout<<"Not Present\n";
    return 0;
}
