// FileWriter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <filesystem>
using namespace std;

int main(){
    ofstream outpfile;
    string comm, pa = "";

    while (1) {
        cout << "Enter file path: ";
        cin >> pa;
        cout << '\n' << "Enter command: ";
        cin >> comm;
        if (comm == "create") {
            outpfile.open(pa);

            if (outpfile) {
                cout << "SUCCESS\n";
                outpfile << "Hello World!\n";
                outpfile.close();
            }
            else {
                cout << "Failed to create\n";
            }
        }
        else if (comm == "delete") {
            pa = "C:" + pa;
            if (remove(pa.c_str()) == 0) {
                cout << "Removed successfully\n";
            }
            else {
                cout << "Failed to remove\n";
            }
        }
        cout << '\n';
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
