#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

void init_code() {
    fastio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

void solve() {
    int t; cin >> t;
    while(t--) {
        int n;      
        cin >> n;
        int arr[n];
        for(int i=1; i<=n; i++) {
            cin >> arr[i];
        }
        int key, count = 0, flag = 0;
        cin >> key;

        for(int i=1; i<=n; i++) {
            if(arr[i] == key) {
                flag = 1;
                count = i;
            }
        }

        if(flag == 1)
            cout << "PRESENT" << " " << count << endl;
        else
            cout << "NOT PRESENT" << " " << n << endl;
    }
}

int main() {
    init_code();
    solve();
    return 0;
}