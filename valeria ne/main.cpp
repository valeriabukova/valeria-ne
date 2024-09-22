//
//  main.cpp
//  valeria ne
//
//  Created by Valeria  Bukova on 23.09.2024.
//

#include "Laptop.hpp"
#include "CPU.hpp"
#include "SSD.hpp"
#include "GPU.hpp"
#include "RAM.hpp"
#include <iostream>

using namespace std;

int main() {
    CPU cpu("Intel Core i7", 8, 3.5);
    SSD ssd(512, "Samsung");
    GPU gpu("NVIDIA GTX 1650", 4096);
    RAM ram(16384, "DDR4");

    Laptop laptop("Dell XPS 15", 1500.0, "Silver", cpu, ssd, gpu, ram);

    laptop.outputSpecs();

    cout << "Total laptops created: " << Laptop::getCount() << endl;

    return 0;
}
