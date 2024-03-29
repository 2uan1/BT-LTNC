#include <iostream>

using namespace std;

int is_prime(int n)
{
    if (n == 1)
        return 1;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main()
{
    int n;
    cout << "n: ";
    cin >> n;
    for (int i = 1; i < n; i++)
        if (is_prime(i) == 1)
            cout << i << ' ';
}
