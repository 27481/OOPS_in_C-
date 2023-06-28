#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//! when we study OOPS we follow some standards 

//! One of the standard of OOPS is ->
//* when you make a Class keep the data member abstracted and member function public 
//! getter gives the values and setter sets the values of data member 

class player{
    private:
    int score;
    int health;

    public:
    // setter
    void setScore(int s){
        cout<<"Score set kiya ja raha hai"<<endl;
        score=s;
    }
    void setHealth(int h){
        cout<<"health change kiya ja raha hai"<<endl;
        health=h;
    }

    //getter
    int getScore(){
        return score;
    }
    //getter
    int getHealth(){
        return health;
    }
    void showHealth(){
        cout<<"Health is :"<<health<<endl;
    }
    void showScore(){
        cout<<"Score is :"<<score<<endl;
    }
};


int main(){
    player utkarsh;

    utkarsh.setScore(10);
    utkarsh.setHealth(50);
    cout<<utkarsh.getScore();
    cout<<endl;
    cout<<utkarsh.getHealth();
    return 0;
}
