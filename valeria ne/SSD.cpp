//
//  SSD.cpp
//  valeria ne
//
//  Created by Valeria  Bukova on 23.09.2024.
//

#include "SSD.hpp"

SSD::SSD(int capacity, const char* brand) : capacity(capacity)
{
    int i = 0;
    while (brand[i] != '\0') ++i;
    this->brand = new char[i + 1];
    
    for (int j = 0; j < i; ++j)
    {
        this->brand[j] = brand[j];
    }
    this->brand[i] = '\0';
}


SSD::~SSD()
{
    delete[] brand;
}

int SSD::getCapacity() const
{
    return capacity;
}

const char* SSD::getBrand() const
{
    return brand;
}

void SSD::setCapacity(int capacity)
{
    this->capacity = capacity;
}

void SSD::setBrand(const char* brand)
{
    delete[] this->brand;
    int i = 0;
    while (brand[i] != '\0') ++i;
    this->brand = new char[i + 1];
    
    for (int j = 0; j < i; ++j)
    {
        this->brand[j] = brand[j];
    }
    this->brand[i] = '\0';
}

