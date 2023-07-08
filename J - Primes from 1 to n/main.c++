#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;

    for (int i = 2; i <= n; i++) {
        bool isPrime = true;

        for (int j = 2; j < i; j++) {
            
            if (i % j == 0 && i != j) {
                isPrime = false;
                break;  // Exit the inner loop once a divisor is found
            }
        }

        if (isPrime) {
            cout << i << " ";
        }
    }

}
