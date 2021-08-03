// Calculating binary exponentiation using normal for-loop takes O(N) time complexity
// Using the below method the time complexity reduces to O(log(n))

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007

ll binaryexpo(ll x,ll y){
    if (x==0) return 0;
    ll ans = 1;
    x%=mod;
    while(y){
        if(y&1) ans = (ans*x)%mod;
        x = (x*x)%mod;
        y = y>>1;
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout<<binaryexpo(2,5)<<"\n";
    return 0;
}
