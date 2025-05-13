#include<stdio.h>
  int main(){
              float arr[7];
              printf("ENTER TEMERATURE OF 7 DAYS FROM SUNDAY TO SATURDAY:");
              
              for(int i=0;i<7;i++){
                                    scanf("%f",&arr[i]);
                                    }
              
              float sum,average;
              
              sum=arr[0]+arr[1]+arr[2]+arr[3]+arr[4]+arr[5]+arr[6];
              average=sum/7;
              
              printf("YOUR AVERAGE TEMPERATURE IS :%f",average);                      
                                    
                                    
                                    
                                    
                                    
              return 0;
              }                      
              