#include <cstdio> 

int main() 
{
    int n;                              // deklarasi integer n, m
    int m = 1;
    scanf("%d", &n);                    // masukin input ke integer n

    for (int i = 0; i < n; i++)         // semisal n=3; i<3(true) maka jalanin perintah; i+1 jika perintah diulang
    {                                   
        for (int j = 0; j < i; j++)     // j=0; 0<0 (didalam cpp dianggap true); diulang sampai j<i(false); j+1 jika perintah diulang
        {
            printf("%d ", m);           // mengeluarkan output sebesar m=1
            m++;                        // m = m+1
        }
        printf("\n");                   // new line 
    }                                   // jalanin sampe i<n(false)
    for (int i = n; i > 0; i--)         // i=3; i>0(true); perintah diulang sampai i>0(false)
    {
        for (int j = 0; j < i; j++)     // j=0; 0<3(true); perintah diulang sampai j<i(false); j+1 jika perintah diulang
        {
            printf("%d ", m);           // mengeluarkan otput sebesar m
            m++;                        // tambah nilai m
        }
        printf("\n");                   //new line
    }
}