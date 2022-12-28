// write Sum Function

#include <stdio.h>
int sum(int n, int m);
void printTable(int n);
int main()
{
    int a, b;
    printf("Enter first number :");
    scanf("%d", &a);
    printf("Enter second number :");
    scanf("%d", &b);
    int s = sum(a, b);
    printf("The Sum of a and b is : %d", s);    
    int n;
    printf("Enter Number for table printing : ");
    scanf("%d",&n);
    printTable(n);    
    return 0;
}
int sum(int n, int m)
{
    return n + m;
}
void printTable(int n){
    for(int i=1; i<=10;i++){
        printf("%d\n",n*i);
    }
}