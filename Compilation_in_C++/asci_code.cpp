//!WAP to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){ 

    int i=0;

    while(i<26){
        cout<<char(i+'a')<<" "<<i+'a';
        i--;
    } 
    return 0;
}