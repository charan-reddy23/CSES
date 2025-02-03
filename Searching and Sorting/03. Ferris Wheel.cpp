#include <bits/stdc++.h>

using namespace std;
#define ll long long 

template <typename T>
istream &operator>>(istream &istream, vector<T> &v){for (auto &it : v) cin >> it; return istream;}
template <typename T>
ostream &operator<<(ostream &ostream, vector<T> &v){for (auto &it : v) cout << it << ' '; return ostream;}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n, x; cin >> n >> x;
    vector<int>w(n);
    cin >> w;
    sort(w.begin(),w.end());
    int cnt = 0;
    int i = 0, j = n-1;
    while(i < j){
        long long sum = w[i]+w[j] ;
        if(sum <= x){
            cnt++;
            w[i] = 0; w[j] = 0;
            i++; j--;
        }else{
            j--;
        }
    }
    for(auto x : w){
        if(x) cnt++;
    }
    cout << cnt << '\n';
    

    return 0;
}
/*
What is the optimal way of matching weights ?
so that we minimize the number of gondolas? An intuitive way to figure this out is to ask ourselves who best matches the heaviest children ?
It has to be the lightest. It's easy to match two light children but it's much harder to match two heavy children. 
Therefore, it is optimal to try to match a light children with a heavy children.
and then even if there are childeren then we should manually add them
*/
