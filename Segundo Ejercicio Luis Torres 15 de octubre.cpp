#include <iostream>
#include <string>
using namespace std;
//Realice un programa que permita realizar conversiones entre unidades de longitud, masa y tiempo
//considere las mas usadas valide la entrada por teclado y considere las restricciones del ultimo
//ejercicio, IMPORTANTE: EL USUARIO DEBE SER CAPAZ DE SELECCIONAR LAS UNIDADES QUE DESEA CONVERTIR


int main(){
    int categoria = 0;
    char repetir = 's';

    // Bucle general del programa
    while (repetir == 's' || repetir == 'S') {
        // Interfaz con colores llamativos (Cian brillante y Amarillo)
        cout << "\033[1;36m";
        cout << "==================================================\n";
        cout << "        CONVERSOR AVANZADO DE UNIDADES (C++)      \n";
        cout << "==================================================\n\n";

        cout << "\033[1;33mSeleccione la categoria de conversion:\n";
        cout << "1. Longitud (Sistema Internacional y mas)\n";
        cout << "2. Masa (Sistema Internacional y mas)\n";
        cout << "3. Tiempo (Sistema Internacional)\n";
        cout << "4. Temperatura (Celsius, Fahrenheit, Kelvin)\n";
        cout << "\033[1;36m--------------------------------------------------\n";

        // Validar categoria
        while (categoria < 1 || categoria > 4) {
            cout << "\033[1;33mIngrese su opcion (1-4): \033[1;32m";
            cin >> categoria;

            if (categoria < 1 || categoria > 4) {
                cout << "\033[1;31m[Error] Opcion no valida. Elija un numero entre 1 y 4.\n\n\033[1;33m";
            }
        }

        int unidadOrigen = 0;
        int unidadDestino = 0;
        double valor = -1.0;
        string nombreOrigen = "";
        string nombreDestino = "";
        double resultado = 0.0;

        // ==========================================
        // CATEGORIA 1: LONGITUD (Base: Metros)
        // ==========================================
        if (categoria == 1) {
            cout << "\n\033[1;35m--- CONVERSION DE LONGITUD ---\n";
            cout << "\033[1;33m1. Metros (m)\n";
            cout << "2. Kilometros (km)\n";
            cout << "3. Centimetros (cm)\n";
            cout << "4. Milimetros (mm)\n";
            cout << "5. Millas (mi)\n";
            cout << "6. Pies (ft)\n";

            while (unidadOrigen < 1 || unidadOrigen > 6) {
                cout << "\033[1;33mElija la unidad de ORIGEN (1-6): \033[1;32m";
                cin >> unidadOrigen;
                if (unidadOrigen < 1 || unidadOrigen > 6) cout << "\033[1;31m[Error] Fuera de rango.\n";
            }

            while (unidadDestino < 1 || unidadDestino > 6) {
                cout << "\033[1;33mElija la unidad de DESTINO (1-6): \033[1;32m";
                cin >> unidadDestino;
                if (unidadDestino < 1 || unidadDestino > 6) cout << "\033[1;31m[Error] Fuera de rango.\n";
            }

            while (valor < 0) {
                cout << "\033[1;33mIngrese el valor a convertir: \033[1;32m";
                cin >> valor;
                if (valor < 0) cout << "\033[1;31m[Error] El valor no puede ser negativo.\n";
            }

            // Factores respecto al Metro (Base) [1:m, 2:km, 3:cm, 4:mm, 5:mi, 6:ft]
            double factores[7] = {0.0, 1.0, 1000.0, 0.01, 0.001, 1609.344, 0.3048};
            string nombres[7] = {"", "Metros", "Kilometros", "Centimetros", "Milimetros", "Millas", "Pies"};

            double valorEnBase = valor * factores[unidadOrigen];
            resultado = valorEnBase / factores[unidadDestino];
            nombreOrigen = nombres[unidadOrigen];
            nombreDestino = nombres[unidadDestino];
        }

        // ==========================================
        // CATEGORIA 2: MASA (Base: Kilogramos)
        // ==========================================
        else if (categoria == 2) {
            cout << "\n\033[1;35m--- CONVERSION DE MASA ---\n";
            cout << "\033[1;33m1. Kilogramos (kg)\n";
            cout << "2. Gramos (g)\n";
            cout << "3. Miligramos (mg)\n";
            cout << "4. Libras (lb)\n";
            cout << "5. Onzas (oz)\n";

            while (unidadOrigen < 1 || unidadOrigen > 5) {
                cout << "\033[1;33mElija la unidad de ORIGEN (1-5): \033[1;32m";
                cin >> unidadOrigen;
                if (unidadOrigen < 1 || unidadOrigen > 5) cout << "\033[1;31m[Error] Fuera de rango.\n";
            }

            while (unidadDestino < 1 || unidadDestino > 5) {
                cout << "\033[1;33mElija la unidad de DESTINO (1-5): \033[1;32m";
                cin >> unidadDestino;
                if (unidadDestino < 1 || unidadDestino > 5) cout << "\033[1;31m[Error] Fuera de rango.\n";
            }

            while (valor < 0) {
                cout << "\033[1;33mIngrese el valor a convertir: \033[1;32m";
                cin >> valor;
                if (valor < 0) cout << "\033[1;31m[Error] El valor no puede ser negativo.\n";
            }

            // Factores respecto al Kilogramo (Base) [1:kg, 2:g, 3:mg, 4:lb, 5:oz]
            double factores[6] = {0.0, 1.0, 0.001, 0.000001, 0.45359237, 0.028349523};
            string nombres[6] = {"", "Kilogramos", "Gramos", "Miligramos", "Libras", "Onzas"};

            double valorEnBase = valor * factores[unidadOrigen];
            resultado = valorEnBase / factores[unidadDestino];
            nombreOrigen = nombres[unidadOrigen];
            nombreDestino = nombres[unidadDestino];
        }

        // ==========================================
        // CATEGORIA 3: TIEMPO (Base: Segundos)
        // ==========================================
        else if (categoria == 3) {
            cout << "\n\033[1;35m--- CONVERSION DE TIEMPO ---\n";
            cout << "\033[1;33m1. Segundos (s)\n";
            cout << "2. Minutos (min)\n";
            cout << "3. Horas (h)\n";
            cout << "4. Dias (d)\n";

            while (unidadOrigen < 1 || unidadOrigen > 4) {
                cout << "\033[1;33mElija la unidad de ORIGEN (1-4): \033[1;32m";
                cin >> unidadOrigen;
                if (unidadOrigen < 1 || unidadOrigen > 4) cout << "\033[1;31m[Error] Fuera de rango.\n";
            }

            while (unidadDestino < 1 || unidadDestino > 4) {
                cout << "\033[1;33mElija la unidad de DESTINO (1-4): \033[1;32m";
                cin >> unidadDestino;
                if (unidadDestino < 1 || unidadDestino > 4) cout << "\033[1;31m[Error] Fuera de rango.\n";
            }

            while (valor < 0) { // El tiempo puede ser 0 pero no negativo
                cout << "\033[1;33mIngrese el valor a convertir: \033[1;32m";
                cin >> valor;
                if (valor < 0) cout << "\033[1;31m[Error] El tiempo no puede ser negativo.\n";
            }

            // Factores respecto al Segundo (Base) [1:s, 2:min, 3:h, 4:d]
            double factores[5] = {0.0, 1.0, 60.0, 3600.0, 86400.0};
            string nombres[5] = {"", "Segundos", "Minutos", "Horas", "Dias"};

            double valorEnBase = valor * factores[unidadOrigen];
            resultado = valorEnBase / factores[unidadDestino];
            nombreOrigen = nombres[unidadOrigen];
            nombreDestino = nombres[unidadDestino];
        }

        // ==========================================
        // CATEGORIA 4: TEMPERATURA (Celsius, Fahrenheit, Kelvin)
        // ==========================================
        else if (categoria == 4) {
            cout << "\n\033[1;35m--- CONVERSION DE TEMPERATURA ---\n";
            cout << "\033[1;33m1. Celsius (C)\n";
            cout << "2. Fahrenheit (F)\n";
            cout << "3. Kelvin (K)\n";

            while (unidadOrigen < 1 || unidadOrigen > 3) {
                cout << "\033[1;33mElija la unidad de ORIGEN (1-3): \033[1;32m";
                cin >> unidadOrigen;
                if (unidadOrigen < 1 || unidadOrigen > 3) cout << "\033[1;31m[Error] Fuera de rango.\n";
            }

            while (unidadDestino < 1 || unidadDestino > 3) {
                cout << "\033[1;33mElija la unidad de DESTINO (1-3): \033[1;32m";
                cin >> unidadDestino;
                if (unidadDestino < 1 || unidadDestino > 3) cout << "\033[1;31m[Error] Fuera de rango.\n";
            }

            cout << "\033[1;33mIngrese el valor a convertir: \033[1;32m";
            cin >> valor; // La temperatura sí puede ser negativa (ej. -15°C)

            string nombres[4] = {"", "Celsius", "Fahrenheit", "Kelvin"};
            nombreOrigen = nombres[unidadOrigen];
            nombreDestino = nombres[unidadDestino];

            // Convertir primero a Celsius como base intermedia
            double tempEnCelsius = 0.0;
            if (unidadOrigen == 1) tempEnCelsius = valor;
            else if (unidadOrigen == 2) tempEnCelsius = (valor - 32.0) * 5.0 / 9.0;
            else if (unidadOrigen == 3) tempEnCelsius = valor - 273.15;

            // Convertir de Celsius a la unidad destino
            if (unidadDestino == 1) resultado = tempEnCelsius;
            else if (unidadDestino == 2) resultado = (tempEnCelsius * 9.0 / 5.0) + 32.0;
            else if (unidadDestino == 3) resultado = tempEnCelsius + 273.15;
        }

        // Mostrar resultados con colores llamativos e indicando unidades exactas
        cout << "\n\033[1;36m==================================================\n";
        cout << "\033[1;32m[RESULTADO]: " << valor << " " << nombreOrigen 
             << " = " << resultado << " " << nombreDestino << "\n";
        cout << "\033[1;36m==================================================\n\n";

        // Preguntar si desea repetir
        cout << "\033[1;33mDesea realizar otra conversion? (s/n): \033[1;32m";
        cin >> repetir;

        while (repetir != 's' && repetir != 'S' && repetir != 'n' && repetir != 'N') {
            cout << "\033[1;31m[Error] Responda 's' para si o 'n' para no: \033[1;32m";
            cin >> repetir;
        }

        categoria = 0; // Reiniciar categoria
    }

    // Restaurar colores normales de la consola al salir
    cout << "\033[0m\nGracias por utilizar el conversor avanzado de unidades!\n";

    return 0;
}

