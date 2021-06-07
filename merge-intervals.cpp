//Mdel Problem Leetcode - https://leetcode.com/problems/merge-intervals/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
class first{
    public:
        vector<vector<int>> mergeInt(vector<vector<int>> &inter){
            // Please sort before using the unique algorithm
            sort(begin(inter),end(inter));
            //We are using lambda function to compare between two vectors
            
            auto it = unique(begin(inter),end(inter),[&](vector<int> &a,vector<int> &b){

                if(a[1]>=b[0]){
                    a[1] = max(a[1],b[1]);
                    return true;
                }
                else return false;
            });
            inter.resize(it-begin(inter));
            return inter;
        }

};
int main(){
    //lets create a vector of vectors containing intervals
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<vector<int>> vi = {{1,3},{2,6},{8,10},{15,18}};
    first obj1;
    vector<vector<int>> ans = obj1.mergeInt(vi);
    for(auto i:ans){
        cout<<"["<<i[0]<<","<<i[1]<<"]"<<",";
    }
    return 0;
}