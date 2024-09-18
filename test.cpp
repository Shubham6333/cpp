#include<bits/stdc++.h>
using namespace std;

int main()
{
     map<int,int> mp;
     for(int i = 0; i <= 10; i++) mp[i] = (i + i - 1) * 10;

     for(auto [a, b] : mp)
     {
         cout << a <<" " << b << "\n";
     }
}