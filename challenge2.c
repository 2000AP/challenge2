#include <stdio.h>
int prime(int n, int i);
int main()
{
    int n, result;
    printf("\n\n\t*Welcome! to Akash Prime Number Calculator*\n\n");
    printf("______________________________________________________\n\n");
    printf("Enter the number you want to check if number is prime number or not: \n");
    scanf("%d", &n);
    if (n == 0 || n == 1)
    {
        printf("%d is not a prime number.", n);
    }
    
    else
    {
        result = prime(n,n/2);  // its difficult to check big number so we divide it by 2 or take half to make it easy.
        if (result == 1)
        {
            printf("%d is a prime number.", n);
        }
        else
        {
            printf("%d is not a prime number.", n);
        }
    }
    
    return 0;
}
int prime(int n, int i)
{
    if (i == 1)
    {
        return 1;
    }
    else
    {
        if (n % i ==0)
        {
            return 0;
        }
        else
        {
            prime(n, i-1);
        }
            
    }
    
}
