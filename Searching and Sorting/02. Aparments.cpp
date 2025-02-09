#include <bits/stdc++.h>

using namespace std;

#define ll long long
template <typename T>
istream &operator>>(istream &istream, vector<T> &v){for (auto &it : v) cin >> it; return istream;}
template <typename T>
ostream &operator<<(ostream &ostream, vector<T> &v){for (auto &it : v) cout << it << ' '; return ostream;}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int tt = 1;// cin >> tt;

    while (tt--){ 
        int n,m,k; 
        cin >> n >> m >> k;
        vector<int>a(n),b(m);
        cin >> a;
        cin >> b;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int j = 0, ans = 0;
        for (int i = 0; i < n; i++) {
            while (j < m) {
                if (b[j] < a[i] - k) {
                    j++;
                } else if (b[j] > a[i] + k) {
                    break;
                } else {
                    j++, ans++;
                    break;
                }
            }
        }

        cout << ans << '\n';

    }
    return 0;
}
/*
What is the optimal way to match applicants with appropriate housing? To answer this question, one must make an observation.
If possible, the smallest apartment should be given to the applicant who needs less space. 
This is true because if we give it to another applicant, we may lose the opportunity to give housing to the applicant who needs less space.
TC : O(max(n,m) * log(max(n,m))
SC : O(max(n,m))
*/
