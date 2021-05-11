#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        //This structured bindings are available in c++17 and above
        auto [l, r] = equal_range(begin(nums), end(nums), target);
        if (l == end(nums) || *l != target)
            return {-1, -1};
        int i = l - begin(nums), j = r - 1 - begin(nums);
        return {i, j};
    
    }
};
int main(){
    vector<int> v = {1,2,3,3,4,5,5,5,7,7,7};
    //To check the lower_bound and upper_bound we are using equal_range
    Solution ob;
    vector<int> ans = ob.searchRange(v,5);
    cout<<"The lower bound value index is "<<ans[0]<<" The upper bound value index is "<<ans[1]<<"\n";
    return 0;
}
