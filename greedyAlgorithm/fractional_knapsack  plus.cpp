//依旧是分数背包,这次除了sort()函数的比较函数,其它都是自己写的哦

#include <bits/stdc++.h>//如果早知道写了这个就不用写一大堆头文件...
using namespace std;
struct Coin{
    double m,v;
    //double CP=v/m; 注意!这没有初始化!!
    
};
bool compareCP(Coin& a,Coin& b){
    return (a.v/a.m)>(b.v/b.m);
}

double packThecoin(vector<Coin>& coin,int t){
    double sum_m=0,sum_v=0;
    //要用到序列,不用范围for循环
    for (int i=0;i<coin.size();i++){
    //确定能放下后才装,否则装一部分
        if(sum_m+coin[i].m<=t){
            sum_m+=coin[i].m;
            sum_v+=coin[i].v;
        } else{
            sum_v+=coin[i].v*(t-sum_m)/coin[i].m;
            break;//就一次,一次就好...
        }
   }
    return sum_v;
    }

int main(){
    int n,t;
    cin>>n>>t;
    vector<Coin> coin(n);
    for (int i=0;i<n;i++){
        cin>>coin[i].m>>coin[i].v;
    }
    sort(coin.begin(),coin.end(),compareCP);//
    cout<<fixed<<setprecision(2)<<packThecoin(coin,t);//set_precision
    return 0;
}
