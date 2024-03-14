#include <stdio.h>

int main()
{
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i==1 || i==5 || j==1 || j==5){
                printf("*");
            }else if(j%2==0){
                printf("%d",j);
            }else{
                printf("%d", j);
            }
            
        }
        printf("\n");
    }
    return 0;
}