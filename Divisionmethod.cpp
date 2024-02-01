#include <iostream>
using namespace std;

int main() {
    int s, i, indexes[3];
    int keys[3] = {10, 11, 12};

    cout << "Enter the size of the Hash Table: ";
    cin >> s;

    int M = s;

    for (i = 0; i < 3; i++)
        indexes[i] = (keys[i] % M);

    cout << "\nThe indexes of the values in the Hash Table:" << endl;
    for (i = 0; i < 3; i++)
        cout << indexes[i] << "\t";

    return 0;
}
