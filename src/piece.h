#ifndef PIECE_H
#define PIECE_H
class Piece
{
   public:
	int getX() { return x; }
	int getY() { return y; }
	void setX(int x) {this->x = x;}
	void setY(int y) {this->y = y;}
	virtual void move(bool occupiedTile, int newX, int newY) = 0;
	

   private:
	   int x;
	   int y;
};
#endif
