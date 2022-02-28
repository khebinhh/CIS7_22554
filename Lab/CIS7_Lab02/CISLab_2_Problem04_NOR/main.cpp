/*
    Create a program to determine if a student has earned an 
    associate degree by completing 60+ credits or
    5+ semesters as a full-time student
*/

#include <iostream>
using namespace std;

int main(){
    //constants for minimum income and years
    const double MIN_CREDITS = 60.0;
    const int MIN_SEMESTER = 5;
    double credit;                          // amount of credit completed
    int semester;                          //semesters completed as a full-time student

    //get the amount of credit
    cout << "How many credits have you completed?\n";
    cout << "Enter the amount of credits: ";
    cin >> credit;

    //get the number of semesters for being enrolled as a full time student

    cout << "How many semesters have you been considered as a\n";
    cout << " full-time student?" << endl;
    cout << "Enter the amount of semesters: ";
    cin >> semester;

    //determine the user's loan qualifications
    if (!(credit >= MIN_CREDITS || semester > MIN_SEMESTER)){
        cout << "You must have completed at least " << MIN_CREDITS << " or \n";
        cout << "have been a full-time student for ";
        cout << "more than " << MIN_SEMESTER << " semesters.\n";
    }
    else
    cout << "You are eligible for an associate degree!" << endl;
    return 0;
}