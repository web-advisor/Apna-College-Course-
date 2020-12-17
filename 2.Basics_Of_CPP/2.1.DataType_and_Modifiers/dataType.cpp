#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    cout << "\n\t Size of Character                : "<<sizeof(char);
    cout << "\n\t Size of Unsigned Character       : "<<sizeof(unsigned char);
    cout << "\n\t Size of Signed Character         : "<<sizeof(signed char);
    cout << "\n\t Size of Integer                  : "<<sizeof(int);
    cout << "\n\t Size of Short Integer            : "<<sizeof(short int);
    cout << "\n\t Size of Long Integer             : "<<sizeof(long int);
    cout << "\n\t Size of Long Long Integer        : "<<sizeof(long long int);
    cout << "\n\t Size of Unsigned Integer         : "<<sizeof(unsigned int);
    cout << "\n\t Size of Unsigned Short Integer   : "<<sizeof(unsigned short int);
    cout << "\n\t Size of Unsigned Long Integer    : "<<sizeof(unsigned long int);
    cout << "\n\t Size of Signed Integer           : "<<sizeof(signed int);
    cout << "\n\t Size of Signed Short Integer     : "<<sizeof(signed short int);
    cout << "\n\t Size of Signed Long Integer      : "<<sizeof(signed long int);
    cout << "\n\t Size of Float                    : "<<sizeof(float);
    cout << "\n\t Size of Boolean                  : "<<sizeof(bool);
    cout << "\n\t Size of Double                   : "<<sizeof(double);
    cout << "\n\t Size of Long Double              : "<<sizeof(long double);
    cout << "\n\t Size of Void                     : "<<sizeof(void);
    cout << "\n\t Size of Wide Character           : "<<sizeof(wchar_t);
    cout << endl;
    return 0;
}