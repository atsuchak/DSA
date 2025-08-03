#include<bits/stdc++.h>
using namespace std;

void checkDup(vector<int> &a, int n) {
    sort(a.begin(), a.end());

    bool checkDup = 0;
    for(int i = 0; i < n-1; i++) 
        if(a[i] == a[i + 1]) {
            checkDup = 1; 
            break;
        }
    if(checkDup) cout << "YES:" << endl;
    else cout << "NO" << endl;
}

int main() {

    int n = 5; 
    vector<int> a = {4, 2, 5, 3, 5};

    checkDup(a, n);

    return 0;
}