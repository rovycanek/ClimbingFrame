#pragma once
#include "Element.h"
#include <list>
class Element_Singleton
{
public:
    // This is how clients can access the single instance
    static Element_Singleton* getInstance();

    std::list<Element*>* getValue();
    Element* getValue(Coordinates coords);
    void deleteValue(Element* element);
    void actions();

protected:
    std::list<Element*>* elements_;
    std::list<Element*>* toBeDeleted_;

private:
    static Element_Singleton* inst_;   // The one, single instance
    Element_Singleton(): elements_(new std::list<Element*>()), toBeDeleted_(new std::list<Element*>()) {} // private constructor
};