#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int check(vector<int>& trees,int H){//计算结果
    int sum=0;
    for (int tree:trees){
        if (tree>H){
            sum+=tree-H;
        }
    }
    return sum;
}
int Ajust(vector<int>& trees,int goal){
    int left=0,right=trees.back();
    int result=0;
    while(left<=right){
        int mid=left+(right-left)/2;
        int collected=check(trees,mid);
        if (collected>=goal){
            result=mid;
            left=mid+1;
        }else {
            right=mid-1;
        }
    }
    return result;
}
int main(){
    int n,goal;
    cin>>n>>goal;
    vector<int> trees(n);
    for (int i=0;i<n;i++){
        cin>>trees[i];
    }
    sort(trees.begin(),trees.end());
    int result=Ajust(trees,goal);
    cout<<result<<endl;
    return 0;
}
