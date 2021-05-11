//Works in c++ 17 and above
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str = "   trim me";
    string_view v = str;
    v.remove_prefix(min(v.find_first_not_of(" "), v.size()));
    cout << "String: '" << str << "'\n"
              << "View  : '" << v << "'\n";
}