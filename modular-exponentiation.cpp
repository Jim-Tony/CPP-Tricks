// Calculating modular exponentiation using normal takes O(N) time complexity
// Using the below method the time complexity reduces to O(log(n))

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007

ll modularexpo(ll x,ll y){
    if(y==0) return 1;
    else if(!(y&1)) return modularexpo((x*x)%mod,y>>1)%mod;
    else return x*modularexpo((x*x)%mod,y>>1)%mod;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<modularexpo(3,7)<<"\n";
    return 0;
}
