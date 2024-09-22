//
//  GPU.cpp
//  valeria ne
//
//  Created by Valeria  Bukova on 23.09.2024.
//

#include "GPU.hpp"

GPU::GPU(const char* name, int memorySize) : memorySize(memorySize)
{
    int i = 0;
    while (name[i] != '\0') ++i;
    this->name = new char[i + 1];
    
    for (int j = 0; j < i; ++j)
    {
        this->name[j] = name[j];
    }
    this->name[i] = '\0';
}

GPU::~GPU()
{
    delete[] name;
}

const char* GPU::getName() const
{
    return name;
}

int GPU::getMemorySize() const
{
    return memorySize;
}

void GPU::setName(const char* name)
{
    delete[] this->name;
    int i = 0;
    while (name[i] != '\0') ++i;
    this->name = new char[i + 1];
    
    for (int j = 0; j < i; ++j)
    {
        this->name[j] = name[j];
    }
    this->name[i] = '\0';
}

void GPU::setMemorySize(int memorySize)
{
    this->memorySize = memorySize;
}

