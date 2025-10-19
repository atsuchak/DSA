#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

class CQ {
    int* arr;
    int currSize, capacity;
    int f, r;

    public:
    CQ(int size) {
        capacity = size;
        currSize = 0;
        arr = new int[capacity];
        f = 0;
        r = -1;
    }

    void push(int val) {
        if(capacity == currSize) return;

        r = (r+1) % capacity;
        arr[r] = val;
        currSize++;
    }

    void pop() {
        if(empty()) return;

        f = (f+1) % capacity;
        currSize--;
    }

    int peek() {
        return arr[f];
    }

    bool empty() {
        return currSize == 0;
    }

    void print() {
        for(int i = 0; i < capacity; i++) cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // freopen("D:/Sublime file/input.txt", "r", stdin);
    // freopen("D:/Sublime file/output.txt", "w", stdout);

    CQ cq(3);

    cq.push(4);
    cq.push(3);
    cq.push(1);

    cq.pop();
    cq.pop();
    cq.push(7);
    cq.push(9);

    cq.print();
    

    return 0;
}