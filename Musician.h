#ifndef MUSICIAN_H
#define MUSICIAN_H

#include <string>

class Musician {
public:
    Musician();
    Musician(std::string instrument, int experience);
    std::string get_instrument() const;
    int get_experience() const;

private:
    std::string instrument;
    int experience;
};

#endif
