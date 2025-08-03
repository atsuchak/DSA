#include <bits/stdc++.h>
using namespace std;

void checkMissing(vector<int> &a, int n) {
    sort(a.begin(), a.end());

    bool checkMissing = 0;
    for(int i = 0; i < n-1; i++) {
        if(a[i+1] - a[i] > 1) {
            cout << a[i] + 1 << " "; 
            checkMissing = 1;
        }
    }

    if(!checkMissing) cout << "All digit exist";
}

int main() {

    int n = 5; 
    vector<int> a = {3, 4, 5, 2, 5};

    checkMissing(a, n);

    return 0;
}