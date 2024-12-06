#include <bits/stdc++.h>
using namespace std;
//近似计算pi/4,直到最后一项小于10^-6;
//在需要根据值来决定是否继续循环的场合,do-while语句很合适
//先试试直接计算,毕竟目标是解决问题.保留6位小数
#include <bits/stdc++.h>
using namespace std;
int main(){
    const double pi=acos(-1.0);
    cout<<fixed<<setprecision(6)<<pi/4<<endl;//seccessful

//以下算法并不算好,因为误差会不断累计.
    int n=1;
    double result=0.0,cumulation;//0.0只是为了语义,0会隐式转换
    do{
        cumulation = (n % 2 != 0 ? 1.0 : -1.0) / (2 * n - 1); // 计算当前项
        result += cumulation; // 累加到结果中
        n++; // 更新 n
    } while (abs(cumulation) > 1e-6); // 单项的绝对值是否足够小
    cout<<result;
    return 0;
} 
