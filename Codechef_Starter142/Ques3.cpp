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
        int leftbit = 0;
        if ((n & (n - 1)) == 0)
            cout << 0 << endl;
        else
        {

            int temp = n;
            int leftbit = 0;
            while (temp)
            {
                temp = temp >> 1;
                leftbit++;
            }

            leftbit--;

            // cout << leftbit << endl;
            int num = 1 << (leftbit);
            // cout << num;
            int diff = n - num;

            cout << (n - num) * 2 << endl;
        }
    }
}
