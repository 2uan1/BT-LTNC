#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], b[n+1];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i <= n; i++)
        cin >> b[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (a[i] == b[j])
            {
                b[j] = 0;
                break;
            }
        }
    }
    bool gay = false;
    for (int i = 0; i <= n; i++)
        if (b[i] != 0)
        {
            gay = true;
            cout << b[i] << " ";
        }
    if (gay == false)
        cout << 0;
}
