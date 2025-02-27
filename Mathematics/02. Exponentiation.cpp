#include <bits/stdc++.h>

using namespace std;
#define int long long
const int mod = 1e9+7;
int mulmod(int a,int b){
    int re = ((a%mod)*(b%mod))%mod;
    return re;
}
int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    cin >> tt;

    while(tt--){

        int a,b;        
        cin >> a >> b;
        int res = 1;
        while (b > 0) {
            if (b & 1){
                res = mulmod(res,a);
            }
            a = mulmod(a,a);
            b >>= 1;
        }
        cout << res << '\n';
    }
    return 0;
}
