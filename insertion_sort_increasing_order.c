#include<stdio.h>
#define SIZE 10
int main(){
    int key=0,a[SIZE]={50,20,30,10,9,60,12,3,2},j=0;

    for (int i=1;i<SIZE;i++){
        key=a[i];
        j=i-1;
        while(j>-1 && a[j]>key){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key; 
    }
    for(int i=0;i<SIZE;i++){
        printf("%d \n",a[i]);
    }
    return 0;
}
