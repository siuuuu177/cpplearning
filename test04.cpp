#include <iostream>
using namespace std;

//常量的定义方式
//1.#define 宏常量 2.const修饰的变量

#define day 7

int main(){
   
    cout<<"一周有"<<day<<"天"<<endl;

   const int month = 12;

   cout<<"一年有"<<month<<"个月"<<endl;

    return 0;
}