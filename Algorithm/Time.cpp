#include <bits/stdc++.h>
using namespace std;
struct Time{
    int h,m,s;
};
int toSecond(Time nT){
    return nT.h*3600+nT.m*60+nT.s;
}
Time form(int sum){
    Time ans;
    ans.h=(sum/3600)%24;
    ans.m=(sum%3600)/60;
    ans.s=sum%60;
    return ans;
}
int main()
{
    int pt;
    Time nowTime;
    scanf("%d:%d:%d",&nowTime.h,&nowTime.m,&nowTime.s);
    cin>>pt;
    int nowTime_s=toSecond(nowTime);
    Time result=form(nowTime_s+pt);
    printf("%02d:%02d:%02d",result.h,result.m,result.s);
    return 0;
}
