#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n;cin >> n;
    int a[n];
    for(int i = 0;i<n;i++) cin >> a[i];
    sort(a,a+n);int cnt = 1;
    for(int i = 0;i<n-1;i++){
        if(a[i]==a[i+1]){
            continue;
        }
        cnt++;
    }
    cout << cnt << "\n";
}
/*
Here it is better to sort and check for adjacent elements which are not same and increase the count
TC : O(nlogn)
*/
