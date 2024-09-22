//
//  ARM.cpp
//  valeria ne
//
//  Created by Valeria  Bukova on 23.09.2024.
//

#include "RAM.hpp"

RAM::RAM(int size, const char* type) : size(size)
{
    int i = 0;
    while (type[i] != '\0') ++i;
    this->type = new char[i + 1];
    
    for (int j = 0; j < i; ++j)
    {
        this->type[j] = type[j];
    }
    this->type[i] = '\0';
}

RAM::~RAM()
{
    delete[] type;
}

int RAM::getSize() const
{
    return size;
}

const char* RAM::getType() const
{
    return type;
}

void RAM::setSize(int size)
{
    this->size = size;
}

void RAM::setType(const char* type)
{
    delete[] this->type;
    int i = 0;
    while (type[i] != '\0') ++i;
    this->type = new char[i + 1];
    
    for (int j = 0; j < i; ++j)
    {
        this->type[j] = type[j];
    }
    this->type[i] = '\0';
}


