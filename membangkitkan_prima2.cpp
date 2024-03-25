#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    FILE *file;
    file = fopen("primes.txt", "w"); // Buka file untuk menulis

    if (file == NULL)
    {
        cout << "Gagal membuka file!";
        return 1;
    }

    int n, count, cur;
    cout << "Masukkan jumlah bilangan prima yang ingin ditampilkan: ";
    cin >> n;
    count = 0;
    cur = 2;

    while (count < n)
    {
        bool prima = true;
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
            fprintf(file, "%d\n", cur); // Menulis ke file
            count++;
        }
        cur++;
    }

    fclose(file); // Tutup file setelah selesai menulis
    cout << "Bilangan prima telah ditulis ke dalam file primes.txt" << endl;
    return 0;
}
