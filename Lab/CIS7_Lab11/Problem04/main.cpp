#include<iostream>
#include<string>
using namespace std;

string Encrypt(string, int);

int main(int argc, char *argv[]) {
    string Source;
    int Key;

    cout << "Input message: ";
    getline(cin, Source);

    cout << "Input shift: ";
    cin >> Key;

    cout << "Encrypted: " << Encrypt(Source, Key) << endl; 
}

string Encrypt(string Source, int Key) {
    string Crypted = Source;

    for (int Current = 0; Current < Source.length(); Current++)
        Crypted[Current] += Key;
    return Crypted;
}