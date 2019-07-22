#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <iostream>
#include "player.h"

class Controller
{
   public:
	   Controller();
	   void start();
   private:
	Player white;
	Player black;
};
#endif
