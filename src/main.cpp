#include <iostream>
#include <fstream>
#include <string>

// Ruta base de los sonidos
std::string baseSoundPath = "SimObjects/Sounds/";

// Función para cargar la licencia seleccionada
std::string loadSelectedAirline() {
    std::ifstream configFile("config.json");
    std::string selectedAirline;

    if (configFile.is_open()) {
        getline(configFile, selectedAirline);
        configFile.close();
    } else {
        selectedAirline = "Oceanic Airways";  // Valor por defecto
    }

    return selectedAirline;
}

// Función para reproducir los sonidos en base a la aerolínea
void playCabinVoices() {
    std::string selectedAirline = loadSelectedAirline();
    std::string soundPath = baseSoundPath + selectedAirline + "/";

    // Reproducir el sonido de bienvenida
    system(("play " + soundPath + "welcome_message.wav").c_str());
}
