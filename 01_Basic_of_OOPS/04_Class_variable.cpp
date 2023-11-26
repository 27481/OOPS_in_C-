#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//! variables declared inside a class is called (data member or class variable)
//! member function -> function declared inside a class 

class player{
    public:
    int score; //! data member 
    int health;

    void showHealth(){ //! memeber function
        cout<<"Health is :"<<health<<endl;
    }

    void showScore(){ //! member function 
        cout<<"Score :"<<score<<endl;;
    }
};

class Calculator{ 
  public:
    int a;
    int b;

  public:
     void add(){
        cout<<a+b<<endl;
        }
    void subtract(){
        cout<<a-b<<endl;;
    }
};

int main(){
    // int score[100]={};
    // int health[100]={};

    player amit;
    amit.score=90;
    amit.health=100;

    amit.showHealth();
    amit.showScore();

    Calculator c;
    c.a=10;
    c.b=7;
    c.add();
    c.subtract();
    
    return 0;
}