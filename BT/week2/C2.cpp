#include <iostream>

using namespace std;

int main()
{
    int N;
    cout << "N: ";
    cin >> N;
    for (int i = 0; i < N; i++)
    {   
        for (int j = i; j > 0; j--)
        {
            cout << " ";
        }
        for (int j = i; j < N; j++)
        {
            cout << "*";
        }
        
        cout << endl;
    }
}