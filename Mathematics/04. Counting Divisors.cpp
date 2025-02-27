#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    cin >> tt;

    while(tt--){

        int x;
        cin >> x;
        int cnt = 0;
        for(int i = 1; i*i <= x; i++){
            if(x%i == 0){
                cnt++;
                if((x/i) != i){
                    cnt++;
                }
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}
