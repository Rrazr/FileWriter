// FileWriter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Ryan is cool

#include <iostream>
#include <fstream>
#include <filesystem>
using namespace std;

int main(){
    // Code for creating and deleting files
    
    /*ofstream outpfile;
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
    }*/
    
    
    // Code for reading files
    
    ofstream outputfile;
    ifstream inputfile;
    string path;
    int nums;
    
    cout << "Enter filename to read: ";
    cin >> path;
    inputfile.open(path);
    
    if (inputfile){
        cout << "Success!\n";
        while (inputfile >> nums){
            cout << nums << '\n';
        }
    }else{
        cout << "Failure\n";
    }
    inputfile.close();
}
