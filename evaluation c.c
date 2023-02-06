#include<stdio.h>

int main(){
    //to find whether the given number is a prime number or not
    
    int n,i,j,count=0;
    printf("enter the number : \n");
    scanf("%d",&n);
    
      for(i=2;i<n/2;i++){
         
             if(n%i==0){
             count++;
               }}
             if(count==0)
             {
               printf("the given number is a prime number\n");
             }
             else
             {
             printf("the given number is not a prime number\n");
             }
 return 0;
 }   