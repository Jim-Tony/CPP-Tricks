#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
	cin>>n;
	vector<int> v = {1,4,5};

	unordered_map<int,int> mp;
	for(int i=1;i<=n;i++){
        if(mp.find(i)!=end(mp)) {
            cout<<i<<" ";
        }
        mp[i] =1;
         
    }
	
	return 0;
}