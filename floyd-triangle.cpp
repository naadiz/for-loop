#include <iostream>
using namespace std;

int main() 
{
    int n;                              
    int m = 1;
    cin >> n;                 

    for (int i = 0; i < n; i++)         
    {                                   
        for (int j = 0; j < i; j++)     
        {
            cout << m << " ";         
            m++;                        
        }
        cout << endl;                 
    }                                   
}
