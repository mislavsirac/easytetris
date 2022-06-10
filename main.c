#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,br=0,temp,krug=0;
    int ** own;

    own = calloc(3, sizeof(int*));

    for (i=0;i<3;i++){
        own[i] = (int *)calloc(3, sizeof(int));
    }



    while(br==0){
        krug++;
       scanf("%d",&temp);
       if(temp<1 || temp>3){
            do{
                printf("Ponovi unos!\n");
                scanf("%d",&temp);
            }while(temp<1 || temp>3);
       }
       if(temp==1){
            if(own[2][0]==0){
                own[2][0]=1;
            }else if(own[1][0]==0){
                own[1][0]=1;
            }else{
                own[0][0]=1;
                br=1;
            }
       }else if(temp==2){
            if(own[2][1]==0){
                own[2][1]=1;
            }else if(own[1][1]==0){
                own[1][1]=1;
            }else{
                own[0][1]=1;
                br=1;
            }
       } else if(temp==3){
            if(own[2][2]==0){
                own[2][2]=1;
            }else if(own[1][2]==0){
                own[1][2]=1;
            }else{
                own[0][2]=1;
                br=1;
            }
       }
    printf("Nakon %d. kruga:\n",krug);
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                printf("%d",own[i][j]);
            }
            printf("\n");
        }
    }
    printf("Prekid igre.");
    return 0;
}
