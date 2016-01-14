#include <iostream>
#include <sstream>
//#include <string>

using namespace std;

//int numbers(){
//    int num = 34;
//    int num2 = 5;
//    int suma = num * num2;
//
//    const int num3 = 13;
//
//    char* letra;
//    letra = (char *) "Casita";
//    bool variable = 67;
//
//    double decimal = 768.78675;
//
//
//    std::cout << num3 << std::endl;
//    return 0;
//}


int StringSample() {

    string input = "";

    // How to get a string/sentence with spaces
    cout << "Please enter a valid sentence (with spaces):\n>";
    getline(cin, input);
    cout << "You entered: " << input << endl << endl;

    // How to get a number.
    int myNumber = 0;

    while (true) {
        cout << "Please enter a valid number: ";
        getline(cin, input);

        // This code converts from string to number safely.
        stringstream myStream(input);
        if (myStream >> myNumber)
            break;
        cout << "Invalid number, please try again" << endl;
    }
    cout << "You entered: " << myNumber << endl << endl;

    // How to get a single char.
    char myChar;

    while (true) {
        cout << "Please enter 1 char: ";
        getline(cin, input);

        if (input.length() == 1) {
            myChar = input[0];
            break;
        }

        cout << "Invalid character, please try again" << endl;
    }
    cout << "You entered: " << myChar << endl << endl;

    cout << "All done. And without using the >> operator" << endl;

    return 0;
}

void hola(){
    string input = "";
    cout << "Please enter a valid sentence (with spaces):\n>";
    getline(cin, input);
    cout << "You entered: " << input << endl << endl;
}


bool comprobador;

int numero1 = 12;
int numero2 = 134;

int main(int argc, char const *argv[]){
    StringSample();


    hola();


    cout << "Escribe un numero: " << endl;
    cin>>numero1;
    if (numero1 <= numero2)
    {
        cout << numero1 << endl;
    }
    else
    {
        cout << "No es menor" << endl;
    }
    comprobador = (numero1 <= numero2 && numero2 == numero1);
    cout << comprobador << endl;

    cout << "\n \n" << endl;


    int q = 0;
    do
    {
        cout << q << endl;
        q++;
    }
    while (q <= 100);




    char c[5];
    c[0] = 'H';
    c[1] = 'o';
    c[2] = 'l';
    c[3] = 'a';
    c[4] = '!';

    int i;
    for (i = 0; i < 5; i++)
    {
        cout << c[i] << endl;
    }

    return 0;
}