#include <iostream>
using namespace std;
vector<int> find(int num)
{
    vector<int> ans;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            ans.push_back(i);
            ans.push_back(num / i);
        }
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> ans(n);
        vector<int> temp;
        int ele = 0;
        for (int i = 1; i < n; i++)
        {
            temp = find(i + 1);
            int maxi = 0;
            for (auto it : temp)
            {
                maxi = max(ans[it - 1], maxi);
            }
            ans[i] = maxi + 1;
            ele = max(ele, ans[i]);
        }
        ans[0] = ele + 1;
        cout << ele + 1 << endl;
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}