#include <stdio.h>
int calcPercentage(int science, int math, int nepali);

int main()
{
    int sc = 98;
    int math = 95;
    int nepali = 99;
    printf("Percentage is : %d", calcPercentage(sc, math, nepali));
    return 0;
}
int calcPercentage(int science, int math, int nepali)
{
    return (science + math + nepali) / 3;
}