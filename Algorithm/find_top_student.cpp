//本题目用到了结构体
//注意for(const auto& student:students)和for循环的差异
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
struct stud {
    string name;
    int ch;
    int math;
    int en;
};

int findTopstud(vector<stud>& students,int n){
    int result=0,index;
    for (int i=0;i<n;i++){
        int sum=students[i].ch+students[i].math+students[i].en;
        if (result<sum){
            result=sum;
            index=i;
        }
    }
    return index;
}
int main()
{
    int n;
    cin>>n;
    vector<stud> students(n);
    for (int i=0;i<n;i++){
        cin>>students[i].name>>students[i].ch>>students[i].math>>students[i].en;
    }
    //sort(students.begin(),students.end());
    int result=findTopstud(students,n);
    cout<<students[result].name<<' '<<students[result].ch<<' ';
    cout<<students[result].math<<' '<<students[result].en<<endl;
    return 0;
}
