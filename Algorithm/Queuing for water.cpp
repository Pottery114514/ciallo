#include <bits/stdc++.h>
using namespace std;
//n个人排队接水,每个人时常不一,求出最短总平均时长,及排序(index)
//这不就是排序吗??
struct timeAndIndex{
    int index;  
    double time; 
};

bool compare(timeAndIndex& a,timeAndIndex& b){
    return a.time<b.time;
}

int main(){
    int n;
    long long totaltime=0,cumulateTime=0;
    cin>>n;
    vector<timeAndIndex> costimes(n);
    for (int i=0;i<n;i++){
        cin>>costimes[i].time;
        costimes[i].index=i;
    }
    sort(costimes.begin(),costimes.end(),compare);
    
    for (int i=0;i<n;i++){//简洁而又优雅!
        totaltime+=cumulateTime;
        cout<<costimes[i].index+1<<' ';
        cumulateTime+=costimes[i].time;
    }
    cout<<endl;
    cout<<fixed<<setprecision(2)<<totaltime/(double)n<<endl;
    return 0;
}
