#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/* 

Create a class 'book' with name , price and number of pages as its attributes .The class should contain 
following member functions:

1> countBooks(int price) -> This function will return count of all the books that have a price less than the given price 

2> isbookpresent(string title) ->This will return a boolean value indicating whehter any book with the given title  
 */

class book{
    public:
    char name;
    int page;
    int price;
    int noOfPages;

    public:
    int countBooks(int p){
        if(price>p) return 1;
        else return 0;
    }
    bool isBookPresent(char book){
        if(name==book) return true;
        else return false;
    }
};

int main(){
    book harryPotter;
    harryPotter.name='H';
    harryPotter.price=1000;
    harryPotter.noOfPages=500;

    cout<<harryPotter.countBooks(999)<<endl;
    cout<<harryPotter.isBookPresent('H')<<endl;
    return 0;
}