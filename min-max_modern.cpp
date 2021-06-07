#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    cout<<"Enter 4 numbers\n";
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int mini = std::min({a,b,c,d});
    int maxi = std::max({a,b,c,d});
    cout<<"Minimum element is "<<mini<<"\n"<<"Maximum element is "<<maxi<<"\n";
    return 0;
}