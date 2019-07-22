#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include "piece.h"

class Player 
{
   public:
	   Player();
   private:
	   std::vector<Piece*> pieces;
};
#endif
