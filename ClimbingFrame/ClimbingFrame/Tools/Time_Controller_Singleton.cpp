#include "Time_Controller_Singleton.h"

// Define the static Singleton pointer
Time_Controller_Singleton* Time_Controller_Singleton::inst_ = NULL;

Time_Controller_Singleton* Time_Controller_Singleton::getInstance() {
    if (inst_ == NULL) {
        inst_ = new Time_Controller_Singleton();
    }
    return(inst_);
}

TimeController* Time_Controller_Singleton::getValue()
{
    if (TimeController_ == nullptr) {
        TimeController_ = new TimeController();
    }
    return TimeController_;
}
