// Online C compiler to run C program online
#include <stdio.h>
void bubble_sort(int *array,int size);

int main() {
    int array[]={1,2,3,4,5,7,6},size,i;
    size=sizeof(array)/sizeof(int);
    bubble_sort(array,size);
    for(i=0;i<size;i++){
        printf("%d ",array[i]);
    }
    

    return 0;
}void bubble_sort(int*array,int size){
    int i,j,temp,flag,no=0;
    for(i=0;i<size-1;i++){
        flag=0;
          no++;
          printf("The number of pass : %d \n",no);
        for(j=0;j<size-1-i;j++){
            if(array[j]>array[j+1]){
                temp=array[j];
                  array[j]=array[j+1];
                array[j+1]=temp;
             flag=1;
            }
        }
       if (flag==0){
           return;
       }
    }
}

Output/-
/tmp/o8k6afxrkD.o
The number of pass : 1 
The number of pass : 2 
1 2 3 4 5 6 7 
