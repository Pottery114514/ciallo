//只有当局部最优选择始终可以导致全局最优解时，贪心算法才能保证得到最优解。
//由最朴素的思考,经过优化得到贪心算法
/*涉及到的语言知识
pair数据类型
匿名函数
指针
*/
#include<iostream>
#include<vector>
#include<utility>//工具库,包含pair
#include<algorithm>
using namespace std;

int main(){
    int n,V;
    double weight,val;
    int sum=0,val_max=0;
    vector<pair<double,double>> stones; 
    cin>>n>>V;

    for (int i=1;i<n;i++){
        cin>>weight>>val;
        stones.push_back(make_pair(weight,val));

    }

    sort(stones.begin(),stones.end(),[stones](
        const pair<double,double>&a,const pair<double,double>&b){
            return (a.second/a.first)>(b.second/b.first);});

    for (const auto& pair:stones){
        weight=pair.first;
        val=pair.second;
        if(sum+weight<=V){//先判断再加
        sum+=weight;
        val_max+=val;}
        else {
            double remaining=V-sum;//剩余空间
            val_max+=(val/weight)*remaining;
            break;//装满跳出循环
        }}
    cout<<val_max;
    return 0;
}