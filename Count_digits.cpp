#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,m;
    cin>>n;
    //This is used to count no of digits in an integer
    m = floor(log10(n)) + 1;
    cout<<m<<endl;
    return 0;
}
