#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class player{
    public:
    int score;
    int health;
};

int main(){
    int score[100]={};
    int health[100]={};

    // player player[10];
    player amit;
    amit.score=90;
    amit.health=100;
    // player[0]=amit;
    // player[1]=utkarsh;
    cout<<amit.score<<endl;
    cout<<amit.health<<endl;

    player utkarsh;
    utkarsh.score=20;
    cout<<utkarsh.score<<endl;
    cout<<utkarsh.health<<endl;

    player riti;
    riti.score=200;
    riti.health=50;


    return 0;
}