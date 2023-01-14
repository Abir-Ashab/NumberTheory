//it works for m = 1e6, n = 1e6
#include<bits/stdc++.h> 
using namespace std;
int const mod = 1000003;
typedef long long ll;
ll f[mod];

void factorial() {
    f[0] = 1; 
    for(ll i = 1; i < mod; i++) {
       f[i] = (((i % mod) * (f[i-1] % mod)) % mod);
    }
}

ll bigmod (ll a, ll p) { 
    ll res = 1; 
    ll x = a; 
    while ( p ) { 
        if ( p & 1 ) { 
            res = ( res * x ) % mod;
        }
        x = ( x * x ) % mod;
        p = p >> 1; 
    }
    return res;
}

ll nCr(ll n, ll r) {
    ll x = ((f[n-r] % mod) * (f[r] % mod)) % mod;

    ll y = bigmod(x, mod - 2);

    ll z = ((f[n] % mod) * (y % mod)) % mod;
    return z;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    factorial();
    ll test; cin >> test; ll k = 1;
    while(test--) {
        ll n,r; cin >> n >> r;
        cout << nCr(n, r) << '\n';
        k++;
    }
    return 0;
}