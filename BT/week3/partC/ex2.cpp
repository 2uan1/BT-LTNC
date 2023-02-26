#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int i = 0, j = str.length() - 1;
    bool doixung = true;
    while(i < j)
    {
        if (str[i] != str[j])
        {
            doixung = false;
            cout << "No" << endl;
            break;
        }
        i++;
        j--;
    }
    if (doixung == true)
        cout << "Yes";
}
