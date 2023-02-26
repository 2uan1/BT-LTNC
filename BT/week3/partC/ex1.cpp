#include <iostream>

using namespace std;

int main()
{
    int N;
    cout << "N: ";
    cin >> N;
    int a[N];
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    bool eq = false;
    for (int i = 0; i < N; i++)
    {
        for (int j = i+1; j < N; j++)
        {
            if (a[i] == a[j])
            {
                eq = true;
            }
        }
    }
    if (eq == true)
        cout << "Yes";
    else
        cout << "No";
}