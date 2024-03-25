#include <iostream>
using namespace std;

int main()
{

    int N, M;
    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // int i = 0;
    // while (i < N)
    // {
    //     int j = 0;
    //     while (j < M)
    //     {
    //         printf("*");

    //         j++;
    //     }
    //     printf("\n");
    //     i++;
    // }

    return 0;
}