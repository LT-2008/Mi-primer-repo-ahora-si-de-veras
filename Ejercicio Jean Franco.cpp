#include <iostream>  // Incluye la libreria estandar de entrada y salida de C++
#include <string>    // Incluye la libreria para el manejo de cadenas de texto (string)
#include <cstdlib>   // Incluye la libreria para funciones aleatorias como rand y srand
#include <ctime>     // Incluye la libreria para manejar el tiempo y generar semillas aleatorias

//realice un programa que permita simular una ruleta de opciones y que el usuario pueda elegir entre dos opciones, tres opciones, cuatro o diez.
//todas las opciones deben ser ingresadas y validadas por teclado. las opciones pueden ser palabras, numeros o simbolos especiales.
//no puede usar funciones, estructuras, arreglos bidimensionales, punteros, listas
//una vez listo el ejercicio se sube al repositorio con una pequena descripcion.

using namespace std; // Permite utilizar los elementos del espacio de nombres estandar sin el prefijo std::

int main() {         // Funcion principal donde inicia la ejecucion del programa
    char repetir;    // Variable de tipo char para almacenar la respuesta del usuario sobre si desea repetir

    // Bucle do-while principal que envuelve todo el programa para permitir la repeticion a peticion del usuario
    do {
        int n_opciones; // Variable entera para almacenar cuantas opciones participaran (2, 3, 4 o 10)
        int aleatorio;  // Variable entera para almacenar el indice ganador aleatorio de la ruleta
        string op[10];  // Arreglo unidimensional de tipo string para almacenar hasta 10 opciones ingresadas

        // Bucle do-while para solicitar y validar la cantidad de opciones deseadas por el usuario
        do {
            cout << "Ingrese la cantidad de opciones para la ruleta (2, 3, 4 o 10): "; // Muestra mensaje solicitando el numero de opciones
            cin >> n_opciones; // Lee el valor entero ingresado por teclado y lo almacena en n_opciones
            
            // Condicion para verificar si el numero ingresado no es valido segun las reglas
            if (n_opciones != 2 && n_opciones != 3 && n_opciones != 4 && n_opciones != 10) {
                cout << "Error: Cantidad invalida. Debe ser 2, 3, 4 o 10." << endl; // Muestra mensaje de error en pantalla
            }
        } while (n_opciones != 2 && n_opciones != 3 && n_opciones != 4 && n_opciones != 10); // Repite el ciclo si la opcion es incorrecta

        // Bucle for para solicitar y leer dinamicamente las opciones segun la cantidad seleccionada
        for (int i = 0; i < n_opciones; i++) {
            cout << "Ingrese la opcion " << (i + 1) << " (palabra, numero o simbolo): "; // Solicita la opcion actual al usuario
            cin >> op[i]; // Lee el valor ingresado por teclado y lo guarda en la posicion correspondiente del arreglo
        }

        cout << "\n--- GIRANDO LA RULETA ---\n"; // Imprime un mensaje visual indicando que la ruleta esta girando
        srand(time(0)); // Inicializa la semilla aleatoria del sistema basada en el tiempo actual
        aleatorio = rand() % n_opciones; // Genera un numero aleatorio entero entre 0 y (n_opciones - 1)

        // Muestra en pantalla el resultado ganador seleccionado de forma aleatoria del arreglo
        cout << "El resultado de la ruleta es: " << op[aleatorio] << endl << endl; // Imprime la opcion ganadora con un salto extra

        // Pregunta al usuario si desea volver a ejecutar el programa
        cout << "¿Desea volver a crear una ruleta? (s/n): "; 
        cin >> repetir; // Lee la respuesta del usuario (s para si, n para no)
        cout << endl; // Imprime una linea en blanco para separar esteticamente las ejecuciones

    } while (repetir == 's' || repetir == 'S'); // El bucle se repite si el usuario presiona 's' o 'S'

    cout << "Gracias por usar la ruleta! Saliendo del programa." << endl; // Mensaje de despedida al finalizar

    return 0; // Finaliza el programa retornando 0 para indicar una ejecucion exitosa
} // Llave de cierre de la funcion principal main
