#ifndef ORCHESTRA_H
#define ORCHESTRA_H

#include "Musician.h"
#include <vector>

class Orchestra {
public:
    Orchestra();
    Orchestra(int size);
    ~Orchestra();

    int get_current_number_of_members() const;
    bool has_instrument(const std::string& instrument) const;
    Musician* get_members() const;
    bool add_musician(const Musician& new_musician);

private:
    std::vector<Musician> members;
    int max_size;
};

#endif
