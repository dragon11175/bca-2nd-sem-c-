#include<stdio.h>
          int main(){
                      int i,key,flag,arr[5]={12,23,44,55,88};
                      printf("ENTER THE VALUE THAT IS FIND:");
                      scanf("%d",&key);
                      flag=0;
                      
                      for(i=0;i<5;i++){
                                        if(key==arr[i]){
                                                         printf("YOUR ARRAY INDEX NUMBER IS:%d",i);
                                                         flag==1;
                                                         break;
                                                         }
                                                         }
                                                         
                                        if(flag==0){
                                                      printf("your key value not found");
                                                      }
                      
                      
                      
                      
                      return 0;
                      }