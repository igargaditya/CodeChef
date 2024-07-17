#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int fones = 0;
        int fzero = 0;
        int sones = 0;
        int szero = 0;
        vector<char> arr1(n);
        for (int i = 0; i < n; i++)
        {
            char ele;
            cin >> ele;
            if (ele == '0')
                fzero++;
            else
                fones++;

            arr1[i] = ele;
        }
        vector<char> arr2(n);
        for (int i = 0; i < n; i++)
        {
            char ele;
            cin >> ele;
            if (ele == '0')
                szero++;
            else
                sones++;

            arr2[i] = ele;
        }

        if ((fones != sones) || (fzero != szero))
        {
            cout << "NO" << endl;
        }
        else
        {
            //  cout << "HERE" << endl ;
            int diff = 0;
            for (int i = 0; i < n; i++)
            {
                if (arr1[i] != arr2[i])
                    diff++;
            }
            int needed = diff / 2;
            if (diff != 0 && fones == 1 && fzero == 1)
            {
                if (k % 2 == 0)
                    cout << "NO" << endl;
                else
                    cout << "YES" << endl;
            }
            else if (diff == 0 && fones == 1 && fzero == 1)
            {
                if (k % 2 == 1)
                    cout << "NO" << endl;
                else
                    cout << "YES" << endl;
            }
            else
            {
                if (needed <= k)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }
}