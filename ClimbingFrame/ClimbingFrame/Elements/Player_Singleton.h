#pragma once
#include "Player.h"
#include <cstddef>
 class Player_Singleton {
 public:
     // This is how clients can access the single instance
     static Player_Singleton* getInstance();

     void setValue(Player* val);
     Player* getValue();

 protected:
     Player* player_;

 private:
     static Player_Singleton* inst_;   // The one, single instance
     Player_Singleton(): player_(NULL) {} // private constructor
 };