#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/* 
Q-> Solve this question using OOPS 

Create a class "cricketer" that contains name of cricketer, his age, number of test matches that he 
has has played and the average runs that he has scored in each test match
Create an array of dataType "cricketer" to hold records of 20 such cricketers and then
 write a program to read these records 
 */

class Cricketer{
    public:
    char name;
    int age;
    int noofTestMatches;
    int averageScore;
};

int main(){
    Cricketer utkarsh;
    utkarsh.name='v';
    utkarsh.age=30;
    utkarsh.noofTestMatches=100;
    utkarsh.averageScore=100;

    Cricketer pandey;
    pandey.name='vi';
    pandey.age=10;
    pandey.noofTestMatches=10;
    pandey.averageScore=50;

    for(int i=0; i<2; i++){
        Cricketer *cricketers = new Cricketer;
        cricketers->name= h;
        
        cricketers.add(*cricketers);
    }

    Cricketer cricketers[2]={utkarsh, pandey};

    for(int i=0; i<2; i++){
      cout<<cricketers[i].name<<endl;
      cout<<cricketers[i].age<<endl;
      cout<<cricketers[i].noofTestMatches<<endl;
      cout<<cricketers[i].averageScore<<endl;
    }


    return 0;
}