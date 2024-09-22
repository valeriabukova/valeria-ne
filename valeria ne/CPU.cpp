//
//  CPU.cpp
//  valeria ne
//
//  Created by Valeria  Bukova on 23.09.2024.
//

#include "CPU.hpp"
#include <iostream>

using namespace std;

CPU::CPU(const char* model, int cores, double frequency)
    : cores(cores), frequency(frequency)
{
    
    int i = 0;
    while (model[i] != '\0') ++i;
    this->model = new char[i + 1];
    for (int j = 0; j < i; ++j)
    {
        this->model[j] = model[j];
    }
    this->model[i] = '\0';
}

CPU::~CPU()
{
    delete[] model;
}

const char* CPU::getModel() const
{
    return model;
}

int CPU::getCores() const
{
    return cores;
}

double CPU::getFrequency() const
{
    return frequency;
}

void CPU::setModel(const char* model)
{
    delete[] this->model;
    int i = 0;
    while (model[i] != '\0') ++i;
    this->model = new char[i + 1];
    for (int j = 0; j < i; ++j)
    {
        this->model[j] = model[j];
    }
    this->model[i] = '\0';
}

void CPU::setCores(int cores)
{
    this->cores = cores;
}

void CPU::setFrequency(double frequency)
{
    this->frequency = frequency;
}
