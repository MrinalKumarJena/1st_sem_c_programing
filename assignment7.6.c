/*11111
   2222
   333
   44
    5*/
    #include<stdio.h>
    int main(){
        int i,j;
        for(i=1;i<6;i++){
            for(j=1;j<i;j++){
                printf(" ");
            }
            for(j=1;j<7-i;j++){
                printf("%d ",i);
        }
        printf("\n");
        }
        return 0;
    }