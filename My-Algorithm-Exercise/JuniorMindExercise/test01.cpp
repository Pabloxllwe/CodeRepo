//编写程序，要求从键盘输入年份和月份，输出这一年的这个月份共有多少天。
#include<iostream>
using namespace std;
int main(){
    //case:2023 9
    int year, month;
    cin>>year>>month;
    int arr[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    //先判断平闰年
    if (month != 2)
    {
        /* code */
        cout<<arr[month-1];
    }else{
        if ((0 == year % 4 && year % 100 != 0) || (0 == year % 400))
        {
            /* code */
            cout<<arr[month];
        }else{
            cout<<arr[month]-1;
        }
        
    }
    
}