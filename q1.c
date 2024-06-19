#include<stdio.h>
int revNum(int num){
    int rev = 0;
    while (num>0)
    {
        rev*=10;
        rev+=num%10;
        num/=10;
    }
    return rev;
}
void revArr(int arr[],int arr2[],int size){
    for(int i=0;i<size;i++){
        arr2[i]=revNum(arr[i]);
    }
}
int main(){
    int arr[10],arr2[10];
    printf("Enter 10 numbers: ");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    revArr(arr,arr2,10);
    printf("Orginal array: ");
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    printf("\nReversed array: ");
    for(int i=0;i<10;i++){
        printf("%d ",arr2[i]);
    }

    return 0;
}