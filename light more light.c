#include <stdio.h>
void main()

{
    int bulb[1000],round_no,n,i;
    
    printf("enter no of bulbs");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    bulb[i]=0;
    round_no=1;
    while(round_no<=n)
    {
        for(i=1;i<=n;i++)
        {
            if((i%round_no)==0)
            {
                if(bulb[i]==0)
                bulb[i]=1;
            else
                bulb[i]=0;
            
            }
        }
        round_no++;
        for(i=1;i<=n;i++)
        printf("%d \t",bulb[i]);
        printf("\n");
    }
    if(bulb[n]==0)
    printf("no");
    else
    printf("yes");
    getch();
    
}