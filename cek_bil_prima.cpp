#include <iostream>
using namespace std;

int main(){

    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        int bil;
        scanf("%d", &bil);
        int cnt = 0;
        for(int j = 1; j <= bil; j++)
            if(bil % j == 0)
                cnt++;
            
        if(cnt == 2)
            printf("YA\n");
        else 
            printf("BUKAN\n");

    }

    return 0;
}