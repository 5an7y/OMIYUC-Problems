#include <iostream>
#include "Generator.hpp"

int main(int argc, char *argv[]) {
    Generator::init_generator(argc, argv);
    long long X;
    Generator::arguments >> X;
    Generator::case_in << X << "\n";
    return 0;
}
