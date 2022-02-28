/*
    Create a program that uses Logical AND operator
    to check if the user meets the following criteria
    for car insurance
*/
#include <iostream>
using namespace std;

int main(){
    char old21,     //older than 21
    expertdriver;   //years as a license driver

    //ask the user if they are older than 21 and
    //have driven for 5 years or more

    cout << "Hello! Are you older than 21 year? (Respond [Y] for Yes or [N] for No): ";
    cin >> old21;
    cout << endl << "Have you been driving for 5 years or more? ([Y] or [N]): ";
    cin >> expertdriver;

    //determine if they can get the car insurance discount
    if (old21 == 'Y' && expertdriver == 'Y'){
        cout << "Congratulations! You are eligible for the car insurance discount!\n";
    }
    else{
        cout << "You must have to be older than 21 and have driven\n";
        cout << " for 5 years or more...\n";
    }

    return 0;
}