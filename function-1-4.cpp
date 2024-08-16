#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl) {
    PersonList newPl;
    newPl.numPeople = pl.numPeople;
    newPl.people = pl.people;

    return newPl;
}
