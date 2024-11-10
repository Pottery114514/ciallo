#include<cstdio>
#include<vector>
using namespace std;
//approach:将每个数字的每一位存入map,then遍历,当找到对应数字后储存结果.
#include<set>
#include<iostream>
#include<map>
#include<string>

int find_digit(){}

int main(){
  int n;
  int m;//
  cin>>n>>m;
  set<char> target_digits;//
  map<int,int> numbers;
  for (int i=1;i<=n;i++){
    int number;
    cin>>number;
    numbers[i]=number;
  }
  for (int i=0;i<m;i++){
    char digit;
    cin>>digit;
    target_digits.insert(digit);
  }
  int result = find_digit(numbers,target_digits);
  if(result!=-1) cout<<result<<' ';
  else cout<<"-1 ";
  return 0;
}
