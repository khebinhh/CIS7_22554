#include <iostream>
#include <stdlib.h>
using namespace std;
/* function main begins program execution */
int main(){
    int i;  //counter
            //loop 20 times
    for (i =1; i <= 20; i++){
        //pick random number from 1 to 6 and output it
        cout << (1 + (rand() % 6));
        //if counter is divisible by 5, begin new line of output
        if (i % 5 == 0){
            cout << ("\n");
        }
    }
    return 0;
}