
#ifndef HORSE_H_EXISTS
#define HORSE_H_EXISTS
	
#include <string>

class Horse {
	private:
		int pos;
		int id;
		int tracklength;
	public:
		Horse();
		void init (int id, int trackLength);
		void advance();
		void printLane();
		bool isWinner();
	}; // end class def
#endif

