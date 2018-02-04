
#include <fstream>
#include <iostream>
#include <memory>


int main()
{
    std::ofstream outputFile;
    outputFile.open("test-output.txt", std::ios::out);

    outputFile << "testing file output...\n";

    outputFile.close();
}
