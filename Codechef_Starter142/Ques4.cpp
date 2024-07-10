#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int orop = 0;
        for (int i = 0; i < n; i++)
            orop = orop | arr[i];

        int temp = orop;
        int rightzero = 0;
        while (temp & 1 == 1)
        {
            temp = temp >> 1;
            rightzero++;
        }
        //   cout << rightzero << endl ;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int element = arr[i] >> rightzero;
            if (element)
                ans++;
        }
        cout << ans << " " << endl;
    }
}
