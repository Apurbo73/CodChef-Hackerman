#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b, d = 0, e = 0, f = 0;
        cin >> a >> b;
        int c = a + b;

        for (int i = 2; i < c; i++)
        {
            if (c % i == 0)
            {
                d++;
                break;
            }
        }

        if (d == 0)
        {
            cout << "Alice" << endl;
        }
        else
        {
            cout << "Bob" << endl;
        }
    }
}