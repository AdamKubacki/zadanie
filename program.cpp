#include <iostream>
using namespace std;

unsigned long long silnia(int n) {
    if (n == 0 || n == 1) return 1;
    return n * silnia(n - 1);
}

bool cz_ujemna(int n)
{
    if(n < 0)
    {
        return true;
    }
    else
    {
    return false;
    }
}

int main() {
    int number;
    cin >> number;
    if(cz_ujemna(number))
    {
        cout << "Liczba Ujemna" << endl;
        return 0;
    }
    cout << number << endl;
    return 0;
}
