//   <----          JAI SHREE RAM !!         --->


#include <bits/stdc++.h>
using namespace std;

#define f(i,x,y) for(int i=x;i<y;++i)
#define f1(i,x,y) for(int i=x;i<=y;++i)
#define f2(i,x,y) for(int i=x;i>=y;--i)
#define nl cout<<endl
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef vector<char> vc;
typedef pair<int, int> pii;
const int MOD = 1e9 + 7;
const int INF = 1e9;
#define fast_io ios::sync_with_stdio(false); cin.tie(0);
#define pb push_back
int gcd(int a, int b) {
return b == 0 ? a : gcd(b, a % b);
}
ll power(ll a, ll b, ll mod = MOD) {
ll result = 1;
while (b > 0) {
if (b & 1) result = (result * a) % mod;
a = (a * a) % mod;
b >>= 1;
}
return result;
}
int main() {
fast_io;
int t;
cin >> t;
while (t--) {
    cout<<t*t;
}
return 0;
}

// Author : Akshat Sao _IND *