//九九乘法表
#include<iostream>
using namespace std;
int main(){
    for (int i = 1; i < 10; i++)
    {
        /* code */
        for (int j = 1; j <= i; j++)
        {
            /* code */
            cout<<i<<'*'<<j<<'='<<i*j<<' ';
        }
        cout<<endl;
    }
    
}
