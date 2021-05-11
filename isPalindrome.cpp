#include<bits/stdc++.h>
using namespace std;
bool is_Palindrome(string i){
    int t = i.size();
    //Equal algorithm checks the first half of the string with the second half from the last
    return equal(begin(i),begin(i)+t/2,rbegin(i));
}
int main(int argc, const char** argv) {
    string s =  "";
    cout<<"Enter a string\n";
    cin>>s;
    (is_Palindrome(s))?cout<<"Palindrome\n":cout<<"Not a Palindrome\n";
 
 
    return 0;
}