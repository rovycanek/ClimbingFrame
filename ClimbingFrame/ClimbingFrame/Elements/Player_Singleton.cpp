#pragma once
#include "Player_Singleton.h"

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
    player_->action();
}

Player* Player_Singleton::getValue()
{
    return(player_);
}
