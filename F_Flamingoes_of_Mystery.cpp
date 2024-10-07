#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

// Function to perform the interaction and get a response from the system
int solve(int L, int R) {
    cout << "? " << L << " " << R << endl;
    int x;
    cin >> x;
    return x;
}

int main() {
    int n;
    cin >> n;
    vector<int> ans(n);
    
    // Step 1: Query sums of ranges to find individual values
    for (int i = 0; i < n - 1; ++i) {
        ans[i] = solve(i + 1, n);  // Query from position i+1 to n
    }

    // Step 2: Compute the differences to get the actual values
    vector<int> temp(n);
    for (int i = 0; i < n - 2; ++i) {
        temp[i] = ans[i] - ans[i + 1];
    }

    // Step 3: Calculate the last two elements of the sequence
    int lastQuery = solve(1, n - 1);  // Query the sum from position 1 to n-1
    temp[n - 2] = ans[0] - lastQuery; // Calculate the second last element
    temp[n - 1] = ans[n - 2] - temp[n - 2];  // Calculate the last element

    // Step 4: Print the sequence
    cout << "!";  // Output the response prefix
    for (int i = 0; i < n; ++i) {
        cout << " " << temp[i];
    }
    cout << endl;

    return 0;
}
