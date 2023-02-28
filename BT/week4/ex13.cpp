#include <iostream>

using namespace std;

int main()
{
    int iterations;
    cin >> iterations;
    for (int i = 0; i < iterations; i++)
    {
        int n;
        cin >> n;
        int a[n];

        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        bool found = false;
        int left , right;
        for (int j = 0; j < n; j++)
        {
            right = 0;
            left = 0;
            for (int l = 0; l < j; l++)
                left += a[l];
            for (int r = j+1; r < n; r++)
                right += a[r];
            if (left == right)
                found = true;
        }
        if (found == true)
            cout << "YES";
        else
            cout << "NO";
    }
}
