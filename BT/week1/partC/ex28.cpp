#include <iostream>

using namespace std;

const int MAX = 22;

int main()
{
    int i = 12, j = 0;
    int half = 1;
    while (j < MAX)
    {
        cout << i;
        if (i == 12)
        {
            i = 1;
            half%2 == 1 ? cout << "midnight " << endl : cout << "noon " << endl;
            half++;
            continue;
        }

        if (i > 0 && i < 12)
        {
            half%2 == 1 ? cout << "am " << endl : cout << "pm " << endl;
            i++;
        }
        j++;
    }
}