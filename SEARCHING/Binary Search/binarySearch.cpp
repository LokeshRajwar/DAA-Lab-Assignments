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

int binarySearch(int arr[], int l, int r, int key, int &count) {
    if(r >= l) {
        count ++;
        int mid = (l+r)/2;
        if(arr[mid] == key) {
            return mid;
        }
        if(arr[mid] > key)
            return binarySearch(arr, l, mid-1, key, count);
        else
            return binarySearch(arr, mid+1, r, key, count); 
    }
    return -1;
}

void solve() {
    int t; cin >> t;
    while(t--) {
        int n;      
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }
        int key;
        cin >> key;
        int count = 0;

        if(binarySearch(arr, 0, n-1, key, count) == -1)
            cout << "NOT PRESENT" << " " << count << endl;
        else
            cout << "PRESENT" << " " << count << endl;
    }
}

int main() {
    init_code();
    solve();
    return 0;
}