//编写程序，用 1 分钱、2 分钱、5 分钱组成 1 元钱，请给出所有的组合方式。
#include<iostream>
using namespace std;
#include<string>
int main(){
    int count=0;
    for (int i = 0; i <= 100; i++)
    {
        /* code */
        for (int j = 0; j <= 50; j++)
        {
            /* code */
            for (int k = 0; k <= 20; k++)
            {
                /* code */
                if (i + 2*j + 5*k == 100)
                {
                    /* code */
                    cout<<i<<':'<<j<<':'<<k<<endl;
                    count++;
                }
                
            }
            
        }
        
    }
    cout<<count;
}