#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll bigmod(ll a, ll b, ll mod)
{
    if(b == 0)
        return 1;
    ll res = bigmod(a, b>>1, mod);
    res = (res*res)%mod;
    if(b&1)
        return (a*res)%mod;
    return res;
}

int main()
{
    ll a, b, mod;
    cin >> a >> b >> mod;
    cout << bigmod(a%mod, b, mod);
}