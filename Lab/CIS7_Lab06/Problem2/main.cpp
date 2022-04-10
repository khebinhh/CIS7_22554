#include <iostream>
#include <stdlib.h>
using namespace std;
//function main begins program execution
int main(){
    int frequency1 = 0;
    int frequency2 = 0;
    int frequency3 = 0;
    int frequency4 = 0;
    int frequency5 = 0;
    int frequency6 = 0;
    int roll;
    int face;
    //loop 6000 times
    for (roll = 1; roll <= 1000; roll++){
        face = 1 + rand() % 6;
        //determine face value and increment appropriate counter
        switch (face){
            case 1:
                ++frequency1;
                break;
            case 2:
                ++frequency2;
                break;
            case 3:
                ++frequency3;
                break;
            case 4:
                ++frequency4;
                break;
            case 5:
                ++frequency5;
                break;
            case 6:
                ++frequency6;
                break;
        }
    }

    cout << "\n" << "Face   " << "Frequency";
    cout << "\n" << "Face 1 " << (frequency1);
    cout << "\n" << "Face 2 " << (frequency2);
    cout << "\n" << "Face 3 " << (frequency3);
    cout << "\n" << "Face 4 " << (frequency4);
    cout << "\n" << "Face 5 " << (frequency5);
    cout << "\n" << "Face 6 " << (frequency6);
    return 0;
}