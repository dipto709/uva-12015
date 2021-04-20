#include<stdio.h>
main()
{
    int n,ara[10],i,k,c,d;
    scanf("%d",&n);
    printf("Lumberjacks\n");
    while(n--){
       
        c=0;
        d=0;
        
        for(i=0;i<10;i++){
            scanf("%d",&ara[i]);
        }
        for(i=0;i<9;i++){
            if(ara[i+1]>ara[i]){
           d++;
                }
            else if(ara[i+1]<ara[i]){
                c++;
            }
            }
            if(d==9 || c==9) printf("Ordered\n");
        else printf("Unordered\n");
        }
        return 0;
        }
             
            
    

        