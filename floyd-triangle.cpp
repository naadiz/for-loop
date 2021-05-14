#include <cstdio> 

int main() 
{
    int n;                              
    int m = 1;
    scanf("%d", &n);                    

    for (int i = 0; i < n; i++)         
    {                                   
        for (int j = 0; j < i; j++)     
        {
            printf("%d ", m);           
            m++;                        
        }
        printf("\n");                   
    }                                   
    for (int i = n; i > 0; i--)         
    {
        for (int j = 0; j < i; j++)     
        {
            printf("%d ", m);           
            m++;                        
        }
        printf("\n");                   
    }
}
