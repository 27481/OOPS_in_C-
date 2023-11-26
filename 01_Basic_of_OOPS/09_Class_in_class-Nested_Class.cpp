#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Gun{
    public:
    int ammo;
    int damage;
    int scope;
};

class player{
    private:
     int health;
     int age;
     int score;
     bool alive;
     Gun gun;
     Helmet helmet;

     class Helmet{
        int hp;
        int level;

        public:
        int setHp(int hp){
            this->hp=hp;
        }
        int setLevel(int level){
            this->level=level;
        }
        int getHp(){
            return hp;
        }
        int getLevel(){
            return level;
        }
     };
    
    public:
      //! Getter method 
     int getHealth(){
        return health;
     }
     int getAge(){
        return age;
     }
     int isAlive(){
        return alive;
     }

     Gun getGun(){
        return gun;
     }
     //! Setter method
     void setHealth(int score){
        this->score=score;
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
     void setGun(Gun gun){
        this->gun=gun;
     }
     void setHelmet(int level){
        Helmet *helmet = new Helmet;
        helmet->setLevel(level);
        int health;
        if(level==1)
             health=25;
        else if(level==2)
           health=50;
        else if(level==3)
           health=100;
        else 
          cout<<"error, invalid level!";
        helmet->setHp(health);
        this->helmet=*helmet;
     }

     void setScore(int score){
        this->score=score;
     }

     void ammo(int ammo){
        this->ammo=ammo;
     }
};


int main(){  
    player harsh;      // object creation , statically 
    player utkarsh;   // compile time , static allocation 

    player *urvi = new player; // run time , dynamic allocation 

    Gun akm;
    akm.ammo=100;
    akm.damage=50;
    akm.scope=2;

    harsh.setAge(22);
    harsh.setScore(100);
    harsh.setIsAlive(true);
    harsh.setHealth(78);
    harsh.setGun(akm);


    Gun awm;
    awm.ammo=15;
    awm.damage=150;
    awm.scope=8;

    utkarsh.setGun(awm);
    utkarsh.setAge(21);
    utkarsh.setScore(100);
    utkarsh.setIsAlive(true);
    utkarsh.setHealth(500);


    urvi->setHealth(20);
    cout<<urvi->getHealth()<<endl;


    return 0;
}