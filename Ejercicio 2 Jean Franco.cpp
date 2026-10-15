#include <iostream>  // Incluye la libreria estandar de entrada y salida de C++
#include <string>    // Incluye la libreria para el manejo de cadenas de texto
#include <iomanip>   // Incluye la libreria para manipular el formato de salida (fixed y setprecision)

//realice un programa en c++ que permita realizar conversiones entre unidades de longitud, masa y tiempo. considere las mas usadas.
//valide la entrada por teclado y considere las restricciones del ultimo ejercicio.
//importante, el usuario debe ser capaz de seleccionar las unidades que desea convertir.

using namespace std; // Permite utilizar los elementos del espacio de nombres estandar sin el prefijo std::

int main() {         // Funcion principal donde inicia la ejecucion del programa
    char repetir;    // Variable de tipo char para almacenar si el usuario desea repetir el programa

    // Configura la salida estandar para mostrar numeros decimales fijos y evitar notacion cientifica
    cout << fixed << setprecision(4); 

    // Bucle principal do-while para permitir multiples conversiones segun el deseo del usuario
    do {
        int categoria;       // Variable para seleccionar la categoria (1: Longitud, 2: Masa, 3: Tiempo, 4: Temperatura)
        int origen, destino; // Variables para seleccionar la unidad de origen y la unidad de destino
        double valor, resultado = 0; // Variables para el valor a convertir y el resultado obtenido
        string nombre_origen = "", nombre_unidad = ""; // Cadenas para almacenar las etiquetas de las unidades

        // Bucle para validar la seleccion de la categoria con interfaz centrada y colorida
        do {
            cout << "\n\033[1;36m==================================================\033[0m\n";
            cout << "\033[1;33m             CONVERSOR DE UNIDADES (SI)           \033[0m\n";
            cout << "\033[1;36m==================================================\033[0m\n";
            cout << "       \033[1;35m1.\033[0m Longitud (m, km, cm, mm, in, ft, mi)\n";
            cout << "       \033[1;35m2.\033[0m Masa (kg, g, mg, lb, oz, t)\n";
            cout << "       \033[1;35m3.\033[0m Tiempo (s, min, h, dias)\n";
            cout << "       \033[1;35m4.\033[0m Temperatura (Celsius, Fahrenheit, Kelvin)\n";
            cout << "\033[1;36m--------------------------------------------------\033[0m\n";
            cout << "       Seleccione la categoria (1-4): ";
            cin >> categoria;

            if (categoria < 1 || categoria > 4) {
                cout << "\n       \033[1;31m[Error] Categoria invalida. Intente de nuevo.\033[0m\n";
            }
        } while (categoria < 1 || categoria > 4);

        // Evaluacion segun la categoria seleccionada
        if (categoria == 1) { // ---------------- LONGITUD ----------------
            do {
                cout << "\n       \033[1;32m--- UNIDADES DE LONGITUD ---\033[0m\n";
                cout << "       1. Metros (m) [SI]\n       2. Kilometros (km) [SI]\n       3. Centimetros (cm)\n       4. Milimetros (mm)\n       5. Pulgadas (in)\n       6. Pies (ft)\n       7. Millas (mi)\n";
                cout << "       Seleccione la unidad de ORIGEN (1-7): ";
                cin >> origen;
                if (origen < 1 || origen > 7) cout << "       \033[1;31mOpcion invalida.\033[0m\n";
            } while (origen < 1 || origen > 7);

            do {
                cout << "       Seleccione la unidad de DESTINO (1-7): ";
                cin >> destino;
                if (destino < 1 || destino > 7) cout << "       \033[1;31mOpcion invalida.\033[0m\n";
            } while (destino < 1 || destino > 7);

            cout << "       Ingrese el valor a convertir: ";
            cin >> valor;

            // Definicion de etiquetas de origen
            if (origen == 1) nombre_origen = "m";
            else if (origen == 2) nombre_origen = "km";
            else if (origen == 3) nombre_origen = "cm";
            else if (origen == 4) nombre_origen = "mm";
            else if (origen == 5) nombre_origen = "in";
            else if (origen == 6) nombre_origen = "ft";
            else if (origen == 7) nombre_origen = "mi";

            // Paso 1: Convertir la unidad de origen a Metros (unidad base SI de longitud)
            double en_metros = 0;
            if (origen == 1) en_metros = valor;
            else if (origen == 2) en_metros = valor * 1000.0;
            else if (origen == 3) en_metros = valor / 100.0;
            else if (origen == 4) en_metros = valor / 1000.0;
            else if (origen == 5) en_metros = valor * 0.0254;
            else if (origen == 6) en_metros = valor * 0.3048;
            else if (origen == 7) en_metros = valor * 1609.34;

            // Paso 2: Convertir de Metros a la unidad de destino y asignar etiqueta
            if (destino == 1) { resultado = en_metros; nombre_unidad = "m"; }
            else if (destino == 2) { resultado = en_metros / 1000.0; nombre_unidad = "km"; }
            else if (destino == 3) { resultado = en_metros * 100.0; nombre_unidad = "cm"; }
            else if (destino == 4) { resultado = en_metros * 1000.0; nombre_unidad = "mm"; }
            else if (destino == 5) { resultado = en_metros / 0.0254; nombre_unidad = "in"; }
            else if (destino == 6) { resultado = en_metros / 0.3048; nombre_unidad = "ft"; }
            else if (destino == 7) { resultado = en_metros / 1609.34; nombre_unidad = "mi"; }

        } else if (categoria == 2) { // ---------------- MASA ----------------
            do {
                cout << "\n       \033[1;32m--- UNIDADES DE MASA ---\033[0m\n";
                cout << "       1. Kilogramos (kg) [SI]\n       2. Gramos (g)\n       3. Miligramos (mg)\n       4. Libras (lb)\n       5. Onzas (oz)\n       6. Toneladas (t)\n";
                cout << "       Seleccione la unidad de ORIGEN (1-6): ";
                cin >> origen;
                if (origen < 1 || origen > 6) cout << "       \033[1;31mOpcion invalida.\033[0m\n";
            } while (origen < 1 || origen > 6);

            do {
                cout << "       Seleccione la unidad de DESTINO (1-6): ";
                cin >> destino;
                if (destino < 1 || destino > 6) cout << "       \033[1;31mOpcion invalida.\033[0m\n";
            } while (destino < 1 || destino > 6);

            cout << "       Ingrese el valor a convertir: ";
            cin >> valor;

            // Definicion de etiquetas de origen
            if (origen == 1) nombre_origen = "kg";
            else if (origen == 2) nombre_origen = "g";
            else if (origen == 3) nombre_origen = "mg";
            else if (origen == 4) nombre_origen = "lb";
            else if (origen == 5) nombre_origen = "oz";
            else if (origen == 6) nombre_origen = "t";

            // Paso 1: Convertir la unidad de origen a Kilogramos (unidad base SI de masa)
            double en_kg = 0;
            if (origen == 1) en_kg = valor;
            else if (origen == 2) en_kg = valor / 1000.0;
            else if (origen == 3) en_kg = valor / 1000000.0;
            else if (origen == 4) en_kg = valor / 2.20462;
            else if (origen == 5) en_kg = valor / 35.274;
            else if (origen == 6) en_kg = valor * 1000.0;

            // Paso 2: Convertir de Kilogramos a la unidad de destino y asignar etiqueta
            if (destino == 1) { resultado = en_kg; nombre_unidad = "kg"; }
            else if (destino == 2) { resultado = en_kg * 1000.0; nombre_unidad = "g"; }
            else if (destino == 3) { resultado = en_kg * 1000000.0; nombre_unidad = "mg"; }
            else if (destino == 4) { resultado = en_kg * 2.20462; nombre_unidad = "lb"; }
            else if (destino == 5) { resultado = en_kg * 35.274; nombre_unidad = "oz"; }
            else if (destino == 6) { resultado = en_kg / 1000.0; nombre_unidad = "t"; }

        } else if (categoria == 3) { // ---------------- TIEMPO ----------------
            do {
                cout << "\n       \033[1;32m--- UNIDADES DE TIEMPO ---\033[0m\n";
                cout << "       1. Segundos (s) [SI]\n       2. Minutos (min)\n       3. Horas (h)\n       4. Dias (dias)\n";
                cout << "       Seleccione la unidad de ORIGEN (1-4): ";
                cin >> origen;
                if (origen < 1 || origen > 4) cout << "       \033[1;31mOpcion invalida.\033[0m\n";
            } while (origen < 1 || origen > 4);

            do {
                cout << "       Seleccione la unidad de DESTINO (1-4): ";
                cin >> destino;
                if (destino < 1 || destino > 4) cout << "       \033[1;31mOpcion invalida.\033[0m\n";
            } while (destino < 1 || destino > 4);

            cout << "       Ingrese el valor a convertir: ";
            cin >> valor;

            // Definicion de etiquetas de origen
            if (origen == 1) nombre_origen = "s";
            else if (origen == 2) nombre_origen = "min";
            else if (origen == 3) nombre_origen = "h";
            else if (origen == 4) nombre_origen = "dias";

            // Paso 1: Convertir la unidad de origen a Segundos (unidad base SI de tiempo)
            double en_segundos = 0;
            if (origen == 1) en_segundos = valor;
            else if (origen == 2) en_segundos = valor * 60.0;
            else if (origen == 3) en_segundos = valor * 3600.0;
            else if (origen == 4) en_segundos = valor * 86400.0;

            // Paso 2: Convertir de Segundos a la unidad de destino y asignar etiqueta
            if (destino == 1) { resultado = en_segundos; nombre_unidad = "s"; }
            else if (destino == 2) { resultado = en_segundos / 60.0; nombre_unidad = "min"; }
            else if (destino == 3) { resultado = en_segundos / 3600.0; nombre_unidad = "h"; }
            else if (destino == 4) { resultado = en_segundos / 86400.0; nombre_unidad = "dias"; }

        } else if (categoria == 4) { // ---------------- TEMPERATURA ----------------
            do {
                cout << "\n       \033[1;32m--- UNIDADES DE TEMPERATURA ---\033[0m\n";
                cout << "       1. Celsius (C)\n       2. Fahrenheit (F)\n       3. Kelvin (K) [SI]\n";
                cout << "       Seleccione la unidad de ORIGEN (1-3): ";
                cin >> origen;
                if (origen < 1 || origen > 3) cout << "       \033[1;31mOpcion invalida.\033[0m\n";
            } while (origen < 1 || origen > 3);

            do {
                cout << "       Seleccione la unidad de DESTINO (1-3): ";
                cin >> destino;
                if (destino < 1 || destino > 3) cout << "       \033[1;31mOpcion invalida.\033[0m\n";
            } while (destino < 1 || destino > 3);

            cout << "       Ingrese el valor a convertir: ";
            cin >> valor;

            // Definicion de etiquetas de origen
            if (origen == 1) nombre_origen = "C";
            else if (origen == 2) nombre_origen = "F";
            else if (origen == 3) nombre_origen = "K";

            // Paso 1: Convertir la unidad de origen a Celsius como pivote intermedio
            double en_celsius = 0;
            if (origen == 1) en_celsius = valor;
            else if (origen == 2) en_celsius = (valor - 32.0) * 5.0 / 9.0;
            else if (origen == 3) en_celsius = valor - 273.15;

            // Paso 2: Convertir de Celsius a la unidad de destino y asignar etiqueta
            if (destino == 1) { resultado = en_celsius; nombre_unidad = "C"; }
            else if (destino == 2) { resultado = (en_celsius * 9.0 / 5.0) + 32.0; nombre_unidad = "F"; }
            else if (destino == 3) { resultado = en_celsius + 273.15; nombre_unidad = "K"; }
        }

        // Muestra el resultado de manera elegante, centrada e incluyendo las unidades de origen y destino
        cout << "\n\033[1;32m       ==========================================\033[0m\n";
        cout << "\033[1;33m       RESULTADO: " << valor << " " << nombre_origen << " = " << resultado << " " << nombre_unidad << "\033[0m\n";
        cout << "\033[1;32m       ==========================================\033[0m\n\n";

        // Pregunta al usuario si desea realizar otra conversion
        cout << "       ¿Desea realizar otra conversion? (s/n): ";
        cin >> repetir;
        cout << endl;

    } while (repetir == 's' || repetir == 'S'); // El programa se repite si el usuario presiona 's' o 'S'

    cout << "\n       \033[1;36m¡Gracias por usar el conversor de unidades! Saliendo...\033[0m\n\n";

    return 0; // Finaliza la ejecucion exitosamente
} // Llave de cierre de la funcion principal main
