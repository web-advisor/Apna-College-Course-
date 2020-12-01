#include<iostream>
using namespace std;

int main(){
    int n, div = 2;             // Initialising divisor by 2 since everyhting is divisible by 1
    cin >> n;                   // Input number to be checked a prime or not 
    check:                      // To check each time
    if(div<n){                  // if divisor has exceeded dividend then it's no need to check anymore
        if(n%div==0){           // Checking if the remainder is 0 i.e. number is divided by any other number than 1 and itself
            cout << "Not a prime Number.";
        }else{
            div = div + 1;      // Incresing value of divisor by 1 each time
            goto check;         // And Checking
        }
    }else{
        cout << "Prime Number .";
    }
    return 0;
}