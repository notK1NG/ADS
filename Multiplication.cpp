#include<iostream>
using namespace std;

const int size = 11;
const float A = 0.6;

int hashing(int key) {
    return static_cast<int>(::size * (key * A - static_cast<int>(key * A)));
}

int main() {
    int n;
    cout<<"Enter the no' of elements:"<<endl;
    cin>>n;
    int b[::size];
    int j;
    int val;

    cout << "Enter " << n << " elements:" << endl;

    for (int i = 0; i < ::size; i++) {
        b[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        cin>>val;
        int j= hashing(val);
        if (b[j] == 0) {
            b[j] = val;
        }
    }

    for (int i = 0; i < ::size; i++) {
        cout << i << ": " << b[i] << endl;
    }

    return 0;
}

