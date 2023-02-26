#include <iostream>

using namespace std;

int main()
{
    int n;

    while (true)
    {
        cin >> n;
        n%5 == 0 ? n = n/5 : n = -1;
        cout << n << endl;
        if (n == -1)
        {
            cout << "bye" << endl;
            break;
        }
    }
}