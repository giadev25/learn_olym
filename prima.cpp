#include <iostream>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    bool prima = true;
    for (int i = 2; i < n - 1; i++)
    {
        if (n % i == 0)
        {
            prima = false;
        }
    }

    if (prima)
    {
        printf("prima\n");
    }
    else
    {
        printf("bukan prima\n");
    }

    return 0;
}