#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (x == y)
            cout << "YES" << endl;
        else if (x > y && x - y <= 1)
            cout << "YES" << endl;
        else if (x < y && y - x <= 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
