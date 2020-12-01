#include<iostream>
using namespace std;

int main()  
{
    int n,num=2;
    cin >> n;                       // Input number till which prime number is to be found
    check:
    if(num>n)
        ;                           // To directly return if condition cimes to true
    else{
        int div = 2;                // Applying same algo as for 1.c
        checking:
        if(div<num){
            if(num%div==0){
                num = num + 1;
                goto check;
            }else{
                div = div + 1;
                goto checking;
            }
        }else{
            cout << num<< " ";
            num = num + 1;
            goto check;
        }
    }
    return 0;
}

