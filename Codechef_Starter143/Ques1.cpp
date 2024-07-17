#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, w;
        cin >> n >> w;
        int ans = 0;
        int j = n;
        for (int i = 1; i <= w; i++)
        {
            ans += pow(2, j);
            j--;
        }
        for (int i = 1; i <= (n - w); i++)
        {
            ans -= pow(2, i);
        }
        cout << ans << endl;
    }
}
