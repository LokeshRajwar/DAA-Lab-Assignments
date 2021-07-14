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

int jumpSearch(int arr[], int x, int n, int &count) {
    // Finding block size to be jumped
    int step = sqrt(n);
    cout << step << endl;
 
    // Finding the block where element is
    // present (if it is present)
    int prev = 0;
    while (arr[min(step, n)-1] < x)
    {   count++;
        prev = step;
        step += sqrt(n);
        if (prev >= n)
            return -1;
    }
 
    // Doing a linear search for x in block
    // beginning with prev.
    while (arr[prev] < x)
    {   count++;
        prev++;
 
        // If we reached next block or end of
        // array, element is not present.
        if (prev == min(step, n))
            return -1;
    }
    // If element is found
    if (arr[prev] == x)
        return prev;
 
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
        int count = 0, len = sizeof(arr) / sizeof(arr[0]);

        if(jumpSearch(arr, key, len, count) == -1) {
            cout << "NOT PRESENT" << " " << count << endl;
        }
        else
            cout << "PRESENT" << " " << count << endl;
    }
}

int main() {
    init_code();
    solve();
    return 0;
}