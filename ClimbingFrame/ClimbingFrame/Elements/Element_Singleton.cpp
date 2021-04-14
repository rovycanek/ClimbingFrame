#include "Element_Singleton.h"
#include <cstddef>

// Define the static Singleton pointer
Element_Singleton* Element_Singleton::inst_ = NULL;

Element_Singleton* Element_Singleton::getInstance() {
    if (inst_ == NULL) {
        inst_ = new Element_Singleton();
    }
    return(inst_);
}

std::list<Element*>* Element_Singleton::getValue()
{
    for (Element* element : *toBeDeleted_) {
        elements_->remove(element);
        delete element;
    }
    toBeDeleted_->clear();
    return(elements_);
}

Element* Element_Singleton::getValue(Coordinates coords)
{
    for (Element* element : *toBeDeleted_) {
        elements_->remove(element);
    }
    toBeDeleted_->clear();
    for (Element* element : *elements_)
    {
        if (element->coordinates == coords) {
            return element;
        }
    }
    return NULL;
}

void Element_Singleton::deleteValue(Element* element)
{
    toBeDeleted_->push_back(element);
}

void Element_Singleton::actions()
{
    for (Element* element : *elements_) {
        element->action();
    }
    for (Element* element : *toBeDeleted_) {
        elements_->remove(element);
        delete element;
    }
    toBeDeleted_->clear();
}
