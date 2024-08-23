//natural numbers from 1 to n;
void naturalNumbers(int n)
{
    printf("Natural number from 1 to %d are ",n);
    int i=1;
    while(i<=n)
    {
        printf("%d ",i);
        i=i+1;
    }
}

//reverse natural numbers from n to 1;
void reverseNaturalNumbers(int n)
{
    printf("Reverse Natural number from 1 to %d are ",n);
    int i=1;
    while(n>=i)
    {
        printf("%d ",n);
        n=n-1;
    }
}

//even numbers from 2 to n;
void evenNumbers(int n)
{
    printf("Even numbers from 1 to %d are ",n);
    int i=2;
    while(i<=n)
    {
        printf("%d ",i);
        i=i+2;
    }
}

//odd numbers from 1 to n;
void oddNumbers(int n)
{
    printf("Odd numbers from 1 to %d are ",n);
    int i=1;
    while(i<=n)
    {
        printf("%d ",i);
        i=i+2;
    }
}

//sum of natural numbers from 1 to n;
void sumNaturalNumbers(int n)
{
    printf("Sum of natural numbers from 1 to %d are ",n);
    int i=1;
    int sum=0;
    while(i<=n)
    {
        sum=sum+i;
        i=i+1;
    }
    printf("%d ",sum);
}

//sum of even numbers from 1 to n;
void sumEvenNumbers(int n)
{
    printf("Sum of even numbers from 2 to %d are ",n);
    int i=2;
    int sum=0;
    while(i<=n)
    {
        sum=sum+i;
        i=i+2;
    }
    printf("%d ",sum);
}

//sum of odd numbers from 1 to n;
void sumOddNumbers(int n)
{
    printf("Sum of odd numbers from 1 to %d are ",n);
    int i=1;
    int sum=0;
    while(i<=n)
    {

        sum=sum+i;
        i=i+2;
    }
    printf("%d ",sum);
}
