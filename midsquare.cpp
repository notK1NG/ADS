#include<iostream>
#include<math.h>
using namespace std;

const int cap = 11;

int hashing(int k) {
    k = k * k;
    string check = to_string(k);
    int sSize = check.size();

    if (sSize % 2 != 0)
        return int(check[(sSize / 2)]) - '0';
    int index = sSize / 2;
    index--;

    if (ht.find(check[index] - '0') == ht.end())
        return int(check[index]) - '0';

    index++;
    if (ht.find(check[index] - '0') == ht.end())
        return int(check[index]) - '0';

    return -1;
}

int main() {
    int n;
    cout<<"Enter the no' of elements:"<<endl;
    cin>>n;
    int b[cap];
    int j;
    int val;

    cout << "Enter " << n << " elements:" << endl;

    for (int i = 0; i < cap; i++) {
        b[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        cin>>val;
        int j= hashing(val);
        if (b[j] == 0) {
            b[j] = val;
        }
    }

    for (int i = 0; i < cap; i++) {
        cout << i << "  :  " << b[i] << endl;
    }

    return 0;
}

