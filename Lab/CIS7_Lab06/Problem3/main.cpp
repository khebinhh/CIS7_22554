#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


//function main begins program execution
int main(){
    int i;

    srand(time(NULL));

    for (i = 1; i <= 20; i++){


        cout << ( 1 + (rand() % 6));


        if (i % 5 == 0){
            cout << "\n";
        }
    }

    return 0;
}