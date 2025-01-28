#include <iostream>
using namespace std;

unsigned long long silnia(int n) {
    if (n == 0 || n == 1) return 1;
    return n * silnia(n - 1);
}

int main() {
    int number;
    cin >> number;
    cout << silnia(number) << endl;
    return 0;
}
