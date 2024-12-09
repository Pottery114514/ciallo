//本题为区间调度问题（Interval Scheduling）
//在无时间冲突的情况下,尽量多参加比赛.
//比赛的起止点由数轴表示.例如三场比赛(0,2) (2,4)(1,3),则最多参加2场.
//完全由自己独立实现(喜)
#include <bits/stdc++.h>
using namespace std;
struct race{
    int begin,end;
};

bool compareByEnd(race a,race b){
    return a.end<b.end;
}
int maxRaces(vector<race>& races,int n){
    int i=0,count=1;
    for (int j=1;j<n;j++){
        if (races[i].end<=races[j].begin){
            count++;
            i=j;
        }
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    vector <race> races(n);
    for (int i=0;i<n;i++){
        cin>>races[i].begin>>races[i].end;
    }
    sort(races.begin(),races.end(),compareByEnd);
    cout<<maxRaces(races,n);
    return 0;
}
