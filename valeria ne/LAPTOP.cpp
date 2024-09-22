//
//  LAPTOP.cpp
//  valeria ne
//
//  Created by Valeria  Bukova on 23.09.2024.
//

#include "Laptop.hpp"
#include <iostream>

using namespace std;

int Laptop::count = 0;

Laptop::Laptop(const char* name, double price, const char* color, const CPU& cpu, const SSD& ssd, const GPU& gpu, const RAM& ram)
    : cpu(cpu), ssd(ssd), gpu(gpu), ram(ram), price(price)
{
    int i = 0;
    while (name[i] != '\0') ++i;
    this->name = new char[i + 1];
    for (int j = 0; j < i; ++j) {
        this->name[j] = name[j];
    }
    this->name[i] = '\0';

    i = 0;
    while (color[i] != '\0') ++i;
    this->color = new char[i + 1];
    for (int j = 0; j < i; ++j)
    {
        this->color[j] = color[j];
    }
    this->color[i] = '\0';

    count++;
}

Laptop::~Laptop()
{
    
    delete[] name;
    delete[] color;

    count--;
}

int Laptop::getCount()
{
    return count;
}

void Laptop::outputSpecs() const
{
    cout << "Laptop name: " << name << endl;
    cout << "Price: " << price << " USD" << endl;
    cout << "Color: " << color << endl;
    cout << "CPU: " << cpu.getModel() << ", " << cpu.getCores() << " cores, " << cpu.getFrequency() << " GHz" << endl;
    cout << "SSD: " << ssd.getBrand() << ", " << ssd.getCapacity() << " GB" << endl;
    cout << "GPU: " << gpu.getName() << ", " << gpu.getMemorySize() << " MB" << endl;
    cout << "RAM: " << ram.getSize() << " MB, Type: " << ram.getType() << endl;
}

