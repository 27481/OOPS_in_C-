#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//! Class is a bluePrint and object is the real impelementation of the program 

//!  

class Player{
    public:
    int health;  // data member ;
    int score;
    string name;

};

class student{
    char name[20];
    int roolNo;
    int age;
    int motNo;
    char address[50];
};


int main(){
    //! Class is a user defined dataType (in short -> a blue-print)
    // int health[100]={};
    // int score[100]={};

    int a=10;
    Player amit;// actually its an object i.e( a variable of class DataType which is defined by the user) also Object is an instance of the class  

    amit.score=90;
    amit.health=100;

    cout<<amit.score<<endl;
    cout<<amit.health<<endl;

    Player harsh;
    
    harsh.score=100;
    harsh.health=20;

    cout<<harsh.score<<endl;
    cout<<harsh.health<<endl;

    return 0;
}