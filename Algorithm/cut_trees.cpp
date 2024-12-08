#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int check(vector<int>& trees,int H){//计算结果
    int sum=0;
    for (int tree:trees){
        if (tree>H){
            sum+=tree-H;//筛选所有高于标准的树
        }
    }
    return sum;
}
int adjustHeight(vector<int>& trees,int goal){//value-based binary
    int left=0,right=trees.back();//back()指向最后一个元素
    int result=0;
    while(left<=right){
        int mid=left+(right-left)/2;//mid需要不断更新,定义在循环里
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
    cout<<adjustHeight(trees,goal)<<endl;
    return 0;
}
