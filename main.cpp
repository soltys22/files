#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string filename("plik.txt");
    std::fstream fHandle;
    int size;

    double *doubles = new double[10];

    foreac

    fHandle.open(filename,std::ios::binary | std::ios::out | std::ios::trunc );

    if(!fHandle.is_open()){
        std::cout << "Error" << std::endl;
    }

    fHandle.write(reinterpret_cast<char*>(&doubles), sizeof(double)*10);
    fHandle << "Siema";

    fHandle.close();

    return 0;
}
