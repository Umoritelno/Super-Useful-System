﻿#include <iostream>

using namespace std;

class HelloWorld {
private:
    string m_verySuperMegaSecretString = "No Hello World :(";
public:
    void print() {
        cout << m_verySuperMegaSecretString << endl;
    }
};

int main()
{
    HelloWorld cat;
    cat.print();
}
