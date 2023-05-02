// 2023_04_24_Practica_011.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//JULIO CESAR ESPINOZA VASQUEZ

#include <iostream>
#include <string>


int main()
{
    std::string respuesta = "goku";
    std::string adivinanza;
    int intentos = 0;

    std::cout << " \tHOLA BIENVENIDO A MI ADINA QUIEN DE PERSONAJES DE VIDEOJUEGOS\n ";

    std::cout << "Adivina quien es el personaje principal de Dragon ball: ";
    getline(std::cin, adivinanza);

    while (adivinanza != respuesta && intentos < 4) {
        std::cout << "Incorrecto. Intenta de nuevo." << std::endl;
        getline(std::cin, adivinanza);
        intentos++;
    }

    if (adivinanza == respuesta) {
        std::cout << "¡Felicitaciones! Adivinaste el personaje.\n";
    }
    else {
        std::cout << "Lo siento, no adivinaste el personaje.\n";
    }





    std::cout << "\tSegunda ronda.\n ";

    std::string respuesta2 = "kratos";
    std::string adivinanza2;
    int intentos2 = 0;
    std::cout << "Adivina quien es el personaje principal de God of War: ";
    getline(std::cin, adivinanza2);

    while (adivinanza2 != respuesta2 && intentos2 < 4) {
        std::cout << "Incorrecto. Intenta de nuevo." << std::endl;
        getline(std::cin, adivinanza2);
        intentos2++;
    }

    if (adivinanza2 == respuesta2) {
        std::cout << "¡Felicitaciones! Adivinaste el personaje.";
    }
    else {
        std::cout << "Lo siento, no adivinaste el personaje.\n";
    }

    std::cout << " \t.\n ";







std::cout << " \tTercera ronda\n ";

    std::string respuesta3 = "ellie";
    std::string adivinanza3;
    int intentos3 = 0;
    std::cout << "Adivina quien es el personaje principal de The last of us: ";
    getline(std::cin, adivinanza3);

    while (adivinanza3 != respuesta3 && intentos3 < 4) {
        std::cout << "Incorrecto. Intenta de nuevo." << std::endl;
        getline(std::cin, adivinanza3);
        intentos3++;
    }

    if (adivinanza3 == respuesta3) {
        std::cout << "¡Felicitaciones! Adivinaste el personaje.";
    }
    else {
        std::cout << "Lo siento, no adivinaste el personaje.";
    }
    std::cout << " \t.\n ";


    std::cout << "\tCuarta ronda.\n ";

    std::string respuesta4 = "peter parker";
    std::string adivinanza4;
    int intentos4 = 0;
    std::cout << "Adivina quien es el personaje principal del Spider-Man: ";
    getline(std::cin, adivinanza4);

    while (adivinanza4 != respuesta4 && intentos4 < 4) {
        std::cout << "Incorrecto. Intenta de nuevo." << std::endl;
        getline(std::cin, adivinanza4);
        intentos4++;
    }

    if (adivinanza4 == respuesta4) {
        std::cout << "¡Felicitaciones! Adivinaste el personaje.";
    }
    else {
        std::cout << "Lo siento, no adivinaste el personaje.";
    }
    std::cout << " \t.\n ";



    std::cout << "\tQuinta ronda.\n ";

    std::string respuesta5 = "playstation";
    std::string adivinanza5;
    int intentos5 = 0;
    std::cout << "Adivina de que plataforma son estos videojuegos : ";
    getline(std::cin, adivinanza5);

    while (adivinanza5 != respuesta5 && intentos5 < 4) {
        std::cout << "Incorrecto. Intenta de nuevo." << std::endl;
        getline(std::cin, adivinanza5);
        intentos5++;
    }

    if (adivinanza5 == respuesta5) {
        std::cout << "¡Felicitaciones! Adivinaste la plataforma.";
    }
    else {
        std::cout << "Lo siento, no adivinaste el personaje.";
    }

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
