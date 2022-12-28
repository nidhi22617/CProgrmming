

#include<stdio.h>
void class9Fee();
void class10Fee();
int main(){
    int n;
    printf("Enter Your clas 9 or 10 :");
    scanf("%d",&n);
    if(n==9){
        class9Fee();
    }else{
        class10Fee();
    }
    return 0;
}
void class9Fee(){
    printf("Fee = Rs 500");
}
void class10Fee(){
    printf("Fee = Rs 750");
}

