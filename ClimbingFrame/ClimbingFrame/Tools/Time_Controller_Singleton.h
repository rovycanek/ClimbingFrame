#pragma once
#include "TimeController.h"

class Time_Controller_Singleton {
public:
    // This is how clients can access the single instance
    static Time_Controller_Singleton* getInstance();
    TimeController* getValue();
protected:
    TimeController* TimeController_;

private:
    static Time_Controller_Singleton* inst_;   // The one, single instance
    Time_Controller_Singleton() : TimeController_(NULL) {} // private constructor
};