#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    bool found = false;
    char midchr;
    int len;
    for (int i = 0; i < n; i++)
    {
        if (a[i].length() % 2 == 1)
        {
            string tmp;
            tmp = a[i];
            int mid = tmp.length()/2;
            for (int j = i+1; j < n; j++)
            {
                if (tmp.length() == a[j].length())
                {
                    for (int k = 0; k < tmp.length(); k++)
                    {
                        if (tmp[k] != a[j][tmp.length()-1-k])
                        {
                            cout << "no ";
                            break;
                        }
                        if (k+1 == tmp.length())
                        {
                            found = true;
                            midchr = tmp[mid];
                            len = tmp.length();
                        }


                    }
                }
            }
        }

    }
    
    if (found == true)
        cout << len << " " << midchr;
}
