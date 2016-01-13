#include <iostream>

using namespace std;

// int num = 34;
// int num2 = 5;
// int suma = num * num2;

// const int num3 = 13;

// // char* letra = "Casita";
// bool variable = 67;

// double decimal = 768.78675;

// using namespace std;

// int main()
// {
// 	std::cout << num3 << std::endl;
// 	return 0;
// }

bool comprobador;

int numero1 = 12;
int numero2 = 134;

int main(int argc, char const *argv[])
{
    std::cout << "Escribe un numero: " << std::endl;
    cin>>numero1;
    if (numero1 <= numero2)
    {
        std::cout << numero1 << std::endl;
    }
    else
    {
        std::cout << "No es menor" << std::endl;
    }
    comprobador = (numero1 <= numero2 && numero2 == numero1);
    std::cout << comprobador << std::endl;
    return 0;
}