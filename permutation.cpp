#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        // code here
        next_permutation(arr.begin(),arr.end());
        return arr;
    }
    vector<int> prevPermutation(int N, vector<int> arr){
        // code here
        prev_permutation(arr.begin(),arr.end());
        return arr;
    }
};
int main(int argc, const char** argv) {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        Solution ob;
        cout<<"The next permutaion is ";
        vector<int> ans = ob.nextPermutation(n,v);
        //Find the next Permutation
        for(auto i : ans){
            cout<<i<<" ";
        }
        cout<<"\n";
        //Find the next Permutation
        cout<<"The previous permutaion is ";
        vector<int> ans1 = ob.prevPermutation(n,v);
        for(auto i : ans1){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
 
 
    return 0;
}
