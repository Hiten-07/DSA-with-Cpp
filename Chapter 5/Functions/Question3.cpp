/*
Calculate sum of digits of a nuumber*/

#include<iostream>
using namespace std;

int sumOfDigits(int num) {
    int digSum = 0;

    while(num > 0) {
        int lasrDigit =num % 10;
        num /= 10;

        digSum += lasrDigit;
    }

    return digSum;
}

int main() {
    cout<<sumOfDigits(2356)<<endl;
    return 0;
}