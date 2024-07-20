// Complete Guide to C++ Programming Foundations
// Exercise 09_02
// Opening a Text File for Reading, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <fstream>

int main(){
    std::ifstream inFile;
    std::string str;
    int number;
    char letter;

    inFile.open("people.txt");
    if (inFile.fail())
        std::cout << std::endl << "File not found!" << std::endl;
    else{
        while (!inFile.eof()){
            getline(inFile, str);
            std::cout << str << std::endl;
        }
        inFile.close();
    }
    
    std::cout << std::endl << std::endl;
    return (0);
}