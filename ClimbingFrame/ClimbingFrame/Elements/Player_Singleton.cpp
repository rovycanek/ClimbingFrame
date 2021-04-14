#include "Player_Singleton.h"
#include <cstddef>

// Define the static Singleton pointer
Player_Singleton* Player_Singleton::inst_ = NULL;

Player_Singleton* Player_Singleton::getInstance() {
    if (inst_ == NULL) {
        inst_ = new Player_Singleton();
    }
    return(inst_);
}

void Player_Singleton::setValue(Player* val)
{
    player_ = val;
}

Player* Player_Singleton::getValue()
{
    return(player_);
}
