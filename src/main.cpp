#include <iostream>
#include "header.h"
using namespace std;

// Rock, Paper, Scissor game

int main(){
    char input;
    cout<<"Welcome to this game!"<<endl;
    cout<<"[R]rock , [P]paper , [S]scissor"<<endl;
    cout<<"Enter your choice: ";
    cin>>input;

    char bots_choice = bot();
    if (bots_choice == input){
        cout<<"Tie"<<endl;
    }
    else if ((bots_choice == 'R' && input == 'S')||(bots_choice == 'P' && input == 'R') || (bots_choice == 'S' && input == 'P')){
        cout<<"You've Lost"<<endl;
        cout<<"Bots choice was: "<<bots_choice<<endl;
    }
    else{
        cout<<"You won!"<<endl;
        cout<<"Bots choice was: "<<bots_choice<<endl;
    }
    
    return 0;
}