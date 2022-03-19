#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr_A[] = {1, 5, 0, 3};
    int arr_B[] = {0, 5, 3, 11};

    //Check if array B includes all elements of
    //array A
    if(is_permutation ( arr_A, arr_A+4, arr_B ) ){
        cout << "B is a permutation of A\n";
    }
    else{
        cout << "B is not a permutation of A\n";
    }
    return 0;
}