#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//!OOP says value of member variable should be private and we should use functions to edit these value
class Player{
    private:
    int health;
    int age;
    int score;
    char name;
    bool alive;

    public:
    //! getter functions 
    int getHealth(){
        return health;
    }
    int getAge(){
        return age;
    }
    int getScore(){
        return score;
    }
    bool isAlive(){
        return alive;
    }
    //! setter functions 
    void setHealth(int health){
        this->health=health;
    }    
    void setAge(int age){
        this->age=age;
    }
    void setScore(int score){
        this->score=score;
    }
    void setIsAlive(bool alive){
        this->alive=alive;
    }
};

int add(Player a, Player b){ //! here this function is taking 2 parameter of Player dataType 
    return a.getScore()+b.getScore();
}

Player getMaxScorePlayer(Player a, Player b){
    if(a.getScore()>b.getScore()) return a;
    else return b;
}

int main(){
    Player utkarsh; // Object creation 
    Player pandey;  //! It is a statically allocated memory i.e compile time, static allocation

    Player *urvi = new Player; // run time allocation of memory i.e dynamic allocation 
    //! it is a pointer to a  object i.e it is storing address of the object only 

    Player urviObject = *urvi; 

    utkarsh.setAge(21);
    utkarsh.setScore(100);
    utkarsh.setIsAlive(true);

    pandey.setAge(22);
    pandey.setScore(100);
    pandey.setIsAlive(true);
    pandey.setHealth(10);

    urviObject.setScore(50);
    urviObject.setAge(500);

    cout<<add(utkarsh,pandey);
    cout<<"\n";
    Player sanket=getMaxScorePlayer(utkarsh, pandey);
    // cout<<getMaxScorePlayer(utkarsh,pandey); //! you can not print an object as it as 
    cout<<sanket.getScore()<<"\n";
    cout<<sanket.getHealth();
    return 0;
}

//* So here its clear that we can a Pass a class as Parameter and as a return type too