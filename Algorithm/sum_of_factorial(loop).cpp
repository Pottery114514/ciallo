//求阶乘和的末六位
#include <bits/stdc++.h>
using namespace std;
    int main(){
        int n;
        cin>>n;
        long long factor=1,sum=0;

//以下每次循环时阶乘基于前一个阶乘计算 (factor *= i)，这样效率较高。
        for (int i=1;i<=n;i++){
            factor*=i;
            //cout<<factor<<endl; test(输出中间结果是相当实用的)
            sum+=factor;
        }
//优于嵌套循环(每次都要重新计算阶乘)
        cout<<sum%1000000;
        return 0;
    }                                                       
