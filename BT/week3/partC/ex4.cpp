#include <iostream>

using namespace std;

int main()
{
    int M, N;
    cin >> M >> N;
    char a[M][N];
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> a[i][j];
        }
    }
    int count = 0;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (a[i][j] == '*')
                cout << a[i][j] << ' ';
            else
            {
                if (a[i][j-1] == '*' && j-1 >= 0)
                    count++;
                if (a[i][j+1] == '*' && j+1 < N)
                    count++;
                if (a[i-1][j] == '*' && i-1 >= 0)
                    count++;
                if (a[i+1][j] == '*' && i+1 < M)
                    count++;
                if (a[i-1][j-1] == '*' && j-1 >= 0 && i-1 >= 0)
                    count++;
                if (a[i+1][j-1] == '*' && j-1 >= 0 && i+1 < M)
                    count++;
                if (a[i-1][j+1] == '*' && j+1 < N && i-1 >=0)
                    count++;
                if (a[i+1][j+1] == '*' && i+1 < M && j+1 < N)
                    count++;
            }
            if (count != 0)
            {
                cout << count << ' ';
                count = 0;
            }
            else if (count == 0 && a[i][j] != '*')
                cout << count << ' ';
        }
        cout << endl;
    }
}
