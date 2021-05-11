#include<bits/stdc++.h>
using namespace std;
int main(int argc, const char** argv) {
 
    int arr1[] = {7,2,10,14};
    int arr2[]  = {5,9,1,6};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int res_arr[n];
    //using transform algo we can add two array elements and copy in a another array(res_arr[])
    transform(arr1,arr1+n,arr2,res_arr,plus<int>());
    //Display
    for(auto i:res_arr){
        cout<<i<<" ";
    }
    cout<<"\n";
    return 0;
}