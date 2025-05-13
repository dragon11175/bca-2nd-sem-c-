#include<stdio.h>
  int main(){
              int arr[5];
              printf("ENTER ANY FIVE VALUE:");
              for(int i=0;i<5;i++){
                                   scanf("%d",&arr[i]);
                                   }
               int max;
               max=arr[0];
               for(int i=1;i<5;i++){
                                     if(arr[i]>max){
                                                    max=arr[i];
                                                    }
                                                    }
               printf("%d",max);                                     
                                   
                                    
                                    
                                    
                                    
                                    
              return 0;
              }                      
              