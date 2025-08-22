#include <iostream>  
using namespace std;  

int main() {
    double num1, num2;  
    char op;            


    cout << "=== Calculator ===" << endl;


    cout << "Enter first number: ";
    cin >> num1;   

    // Pedimos el operador
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;    
    
    // Pedimos el segundo número
    cout << "Enter second number: ";
    cin >> num2;   // Guardamos el número en la variable num2

    // Usamos switch para decidir la operación
    switch(op) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) // Verificamos que no se divida por cero
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        default:  // Si el operador no es válido
            cout << "Invalid operator!" << endl;
    }

    return 0; // Fin del programa
}