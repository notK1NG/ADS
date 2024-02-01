#include<iostream>
#include<math.h>
using namespace std;

const int cap = 11;

int hashing(int num) {

    // Calculate the number of digits in the integer
    int numDigits = 1;
    int temp = num;
    while (temp /= 10) {
        numDigits++;
    }

    // Calculate the midpoint to divide the number into two equal parts
    int midpoint = numDigits / 2;

    // Divide the number into two parts
    int part1 = num / pow(10, midpoint);
    int part2 = num % static_cast<int>(pow(10, midpoint));

    // Calculate and return the sum of the two parts
    int sum = part1 + part2;
    return sum%cap;
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

