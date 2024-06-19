#include<stdio.h>
#include <stdlib.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num<0){
        num=abs(num);
    }
    int arr[10]={0};
    while (num>0)
    {
        arr[num%10]++;
        num/=10;
    }
    int max=0,index=-1;
    for(int i=0;i<10;i++){
        if(arr[i]>0){
            printf("The digit %d appears %d times.\n",i,arr[i]);
            if(arr[i]>max){
                max=arr[i];
                index=i;
            }
        }
    }
    printf("The most common digit is: %d",index);
    return 0;
}