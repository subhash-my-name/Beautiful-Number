#include<stdio.h>
int isPrime(int x)
{
    int flag = 0;

    for(int i = 2; i < x; i++)
    {
        if(x%i == 0)
            flag = 1;
    }

    if(flag == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int n, sum = 0, pdt = 1, f[2], k=0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // to calculate sum and product of the factors
    for(int i = 2; i < n; i++)
    {
        if(n%i == 0)
        {
            sum += i;
            pdt *= i;

            // to count the number of primes; this way, uniqueness can be confirmed
            if(isPrime(i))
            {
                k++;
                printf("%d\n", i);
            }
        }
    }

    // "playing" with the number of 1s because in mulitplication we can have any number of them
    while(sum < n)
        sum++;

    if((k == 2) && (sum == pdt) && (pdt == n))
        printf("The number is beautiful. %d\n ", k);
    else
        printf("The number is not beautiful. %d\n", k);

    return 0;
}
