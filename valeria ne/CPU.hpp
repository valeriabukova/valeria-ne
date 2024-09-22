//
//  CPU.hpp
//  valeria ne
//
//  Created by Valeria  Bukova on 23.09.2024.
//

#ifndef CPU_H
#define CPU_H

class CPU {
private:
    char* model;
    int cores;
    double frequency;

public:
    CPU(const char* model, int cores, double frequency);
   
    ~CPU();

    const char* getModel() const;
    int getCores() const;
    double getFrequency() const;

    void setModel(const char* model);
    void setCores(int cores);
    void setFrequency(double frequency);
};

#endif
