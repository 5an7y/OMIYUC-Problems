#include <iostream>
#include "Generator.hpp"

int main(int argc, char *argv[]) {
    Generator::init_generator(argc, argv);
    long long n;
    Generator::arguments >> n;
    Generator::case_in << n << "\n";
    return 0;
}
