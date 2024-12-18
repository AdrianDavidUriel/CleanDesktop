#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

int main() {
    std::string path = "C:/Users/adrian/Downloads/prueba"; // Cambia esto según el directorio que quieras limpiar
    for (const auto& entry : fs::directory_iterator(path)) {
        std::cout << entry.path() << std::endl;
    }
    return 0;
}
