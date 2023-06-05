#include<stdio.h>
#include<string.h>
typedef long long LL;
int main()
{
    int days,i,p[600];
    while(~scanf("%d",&days))
    {
        for(i=1;i<=days;i++)
        {
            scanf("%d",&p[i]);
        }
        int mark[600];
        p[days+1]=-1; p[0]=1000;
        for(i=0;i<=days;i++)//Mark whether to buy or sell on the i day
        {
            if(p[i+1]>=p[i]) 
                mark[i]=1;
            else if(p[i+1]<p[i])
                mark[i]=-1;
        }
        LL money=100,stock=0;//stock is the stock currently held in hand
        for(i=1;i<=days;i++)
        {
            if(mark[i]==1&&mark[i-1]==-1)
            {
                if(money>=p[i])
                {
                    LL temp=money/p[i];
                    if(temp>=1e5)
                        temp=1e5;
                    stock=temp;
                    money-=p[i]*temp;
                }
            }
            else if(mark[i]==-1&&mark[i-1]==1)
            {
                  money+=p[i]*stock;
                  stock=0;
            }
        }
        printf("%lld\n",money);
    }
    return 0;
}