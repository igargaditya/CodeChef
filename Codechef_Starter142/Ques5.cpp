#include <iostream>
using namespace std;

bool isprime(long long n)
{

    for (long long i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;

    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (n == 1)
            n++;
        long long firstprime = n;
        while (isprime(firstprime) == false)
        {
            firstprime++;
        }
        long long secondprime = firstprime + 1;
        while (isprime(secondprime) == false)
        {
            secondprime++;
        }
        cout << secondprime * firstprime << endl;
    }
}