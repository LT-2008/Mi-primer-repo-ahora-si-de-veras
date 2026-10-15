#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

//Realice un programa que permita simular una ruleta de opciones y que el usuario pueda elegir entre 2 opciones, 3 opciones
//4 opciones o 10. Todas las opciones deben ser ingresadas y validadas por teclado, las opciones pueden ser palabras
//numeros o simbolos especiales. No puede usar funciones estructuras arreglos bidimensionales, punteros o listas una vez.
//Listo su ejercicio subalo a su repositorio con una pequena descripcion 

int main() {
// Configurar la semilla para números aleatorios
    srand(time(0));

    int cantidad = 0;
    char repetir = 's';

    // Texto en Azul
    cout << "\033[34m";
    cout << "========================================\n";
    cout << "       SIMULADOR DE RULETA DE OPCIONES  \n";
    cout << "========================================\n\n";

    // Validar la cantidad de opciones permitidas (2, 3, 4 o 10)
    while (cantidad != 2 && cantidad != 3 && cantidad != 4 && cantidad != 10) {
        cout << "Ingrese la cantidad de opciones para la ruleta (2, 3, 4 o 10): ";
        cin >> cantidad;

        if (cantidad != 2 && cantidad != 3 && cantidad != 4 && cantidad != 10) {
            cout << "[Error] Cantidad no valida. Por favor, elija exactamente 2, 3, 4 o 10.\n\n";
        }
    }

    // Limpiar el búfer del teclado
    cin.ignore();

    // Arreglo unidimensional de tamaño 10
    string opciones[10];

    cout << "\n---INGRESO DE OPCIONES---\n";
    cout << "Puede ingresar palabras, numeros o simbolos especiales.\n\n";

    // Capturar opciones (el texto ingresado por el usuario se mostrará en VERDE)
    for (int i = 0; i < cantidad; i++) {
        bool opcionValida = false;
        while (!opcionValida) {
            cout << "\033[34mIngrese la opcion " << (i + 1) << ": \033[32m";
            getline(cin, opciones[i]);

            if (opciones[i] == "") {
                cout << "\033[34m[Error] La opcion no puede estar vacia. Intente de nuevo.\n";
            } else {
                opcionValida = true;
            }
        }
    }

    // Bucle principal para girar la ruleta
    while (repetir == 's' || repetir == 'S') {
        cout << "\033[34m\n----------------------------------------\n";
        cout << "GIRANDO LA RULETA...\n";

        // Generar un índice aleatorio entre 0 y (cantidad - 1)
        int indiceGanador = rand() % cantidad;

        // Mostrar el resultado ganador en VERDE brillante/destacado
        cout << "¡El resultado de la ruleta es: \033[32m" << opciones[indiceGanador] << "\033[34m !\n";
        cout << "----------------------------------------\n";

        cout << "¿Desea girar la ruleta nuevamente? (s/n): ";
        cin >> repetir;
        
        while (repetir != 's' && repetir != 'S' && repetir != 'n' && repetir != 'N') {
            cout << "[Error] Responda 's' para si o 'n' para no: ";
            cin >> repetir;
        }
    }

    // Restaurar el color por defecto de la consola al terminar
    cout << "\033[0m\n¡Gracias por usar el simulador de ruleta! Hasta luego.\n";

    return 0;
}
