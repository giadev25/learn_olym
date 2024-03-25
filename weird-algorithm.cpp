#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    cout << n << " ";
    for (int i = 0; n != 1; i++)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
            cout << n << " ";
        }
        else
        {
            n = n * 3 + 1;
            cout << n << " ";
        }
    }
    cout << "\n";

    cin.get();
    return 0;
}