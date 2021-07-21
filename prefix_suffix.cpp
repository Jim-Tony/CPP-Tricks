//The sequence of characters in both prefix and suffix are same is called a happy string  
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string happyString(string &s){
        for(int i=s.size()-1;i>=0;i--){
            if(equal(end(s)-i,end(s),begin(s))) return string(end(s)-i,end(s));
        }
        return "";
    }
};
int main(){
    string s  = "HelloiamnotHello";
    Solution obj1;
    string ans = obj1.happyString(s);
    cout<<ans<<"\n";
    return 0;
}