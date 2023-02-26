#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int mx = a[0];
    int mn = a[0];
    double med;
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > mx)
            mx = a[i];
        if (a[i] < mn)
            mn = a[i];
        sum += a[i];
    }
    med = sum/n;
    cout << "Mean: " <<  med << endl;
    cout << "Max: " << mx << endl;
    cout << "Min: " << mn << endl;
}