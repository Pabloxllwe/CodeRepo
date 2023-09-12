//编写程序，要求输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
#include<iostream>
using namespace std;
#include<string>
int main(){
    char c;
    int letter = 0;
    int space = 0;
    int digit = 0;
    int other = 0;

    while ((c = getchar()) != '\n')
    {
        /* code */
        if (c >= 'a'&& c <= 'z' || c>='A' && c<='Z')
        {
            /* code */
            letter++;
        }else if (c == ' ')
        {
            /* code */
            space++;
        }else if (c>='0' && c<='9')
        {
            /* code */
            digit++;
        }else{
            other++;
        }
    }
    cout<<letter<<endl<<space<<endl<<digit<<endl<<other;
    
}