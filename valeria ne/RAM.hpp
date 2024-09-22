//
//  ARM.hpp
//  valeria ne
//
//  Created by Valeria  Bukova on 23.09.2024.
//

#ifndef RAM_H
#define RAM_H

class RAM
{
private:
    int size; // В мегабайтах
    char* type;

public:
    RAM(int size, const char* type);
    ~RAM();

    int getSize() const;
    const char* getType() const;

    void setSize(int size);
    void setType(const char* type);
};

#endif
