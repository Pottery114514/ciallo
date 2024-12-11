//保证pt<=100000
#include <bits/stdc++.h>
using namespace std;
struct Time{
    int h,m,s;
};
//感觉特别臃肿。
Time add(Time T,int pt){
        if (T.s+pt<60){
            T.s+=pt;
        }else{//s进位
            if ((T.s+pt)/60+T.m<60){
                T.m+=(T.s+pt)/60;
                T.s=(T.s+pt)%60;
            }else{//m进位
                if (T.h+(pt/3600)<24){
                    T.h+=pt/3600;
                    T.m+=(pt%3600)/60;
                    T.s+=(pt%60);
                }//else{//h进位}
            }
        }
        return T;
    }
int main()
{
    int pt;
    Time nowTime;
    //cin>>nowTime.h>>nowTime.m>>nowTime.s;
    scanf("%d:%d:%d",&nowTime.h,&nowTime.m,&nowTime.s);
    cin>>pt;
    
    Time ans=add(nowTime,pt);
    printf("%d:%d:%d",ans.h,ans.m,ans.s);//未设置前补0

    return 0;
}
