#include <stdio.h>

int MaxSubSeqSum1(int L[], int N);
int main()
{
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&A[i]);  //&??
    }
    printf("%d\n", MaxSubSeqSum1(A,n));

}

int MaxSubSeqSum1(int L[], int N)
{
    int Sum, MaxSum;
    int i;
    for( i = 0; i < N; i++){
        Sum += L[i];
        if(Sum > MaxSum)
            MaxSum = Sum;
        else if(Sum < 0)
            Sum = 0;
    }
    return Sum;

}

