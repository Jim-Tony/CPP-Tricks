#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    string sortSentence(string s) {
        if(s.size()==0) return "";
        vector<string> v;
        stringstream ss(s);
        string word = ""; 
        //Seperate the strings and push to vector of strings using stringstream
        while(ss>>word){
            v.push_back(word);
        }
        //sort according to last element which contains the integer value
        sort(begin(v),end(v),[](string &a,string &b){return a.back()<b.back();}); 
        //Again concatenate to  a string
        string all = accumulate(begin(v),end(v),string("")); 
        //Replace the numbers with whitespaces ' '
        replace_if(begin(all),end(all),[](char &let){return isdigit(let);},' ');
        //remove the last space
        return all.substr(0,all.size()-1);
    }
};
int main(){
    string qn = "Hello5 I1 am2 tony3 cool4";
    Solution obj1;
    cout<<obj1.sortSentence(qn)<<"\n";
    return 0;
}