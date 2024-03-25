#include <iostream>
using namespace std;

int main()
{
    int n, count, cur; // O(n)
    scanf("%d", &n);   // O(n)
    count = 0;
    cur = 2;

    while (count < n)
    {
        bool prima = true; // O(n)
        for (int i = 2; i <= cur - 1; i++)
        {
            if (cur % i == 0)
            {
                prima = false;
                break;
            }
        }

        if (prima)
        {
            printf("%d\n", cur);
            count++;
        }
        cur++;
    }

    return 0;
}