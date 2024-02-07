#include<iostream>
#include<cmath> // Use cmath for pow function
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 0) {
        cout << "Cannot convert negative numbers to binary using this method." << endl;
        return 0;
    }

    int ans = 0;
    int i = 0;

    while (n != 0) {
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }

    cout << "Answer is: " << ans << endl;

    return 0;
}

