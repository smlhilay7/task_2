#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

char bot(){
    srand(static_cast<unsigned> (time(nullptr)));
    char arr[3] = {'R','P','S'};
    int N = 3;
    char bots_choice = arr[(rand() % N)];

    return bots_choice;


}
