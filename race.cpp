#include <iostream> 
#include "race.h"
#include "horse.h"

Race::Race(){
	//	Race::TrackLength = 15;
	//	Race::HorseNum = 5;
		Race:racers[horseNum] = Horse();
	} // end constructor 
void Race::run() {
	for (int i =0; i < Race::horseNum; i++){
		Race::racers[i].init(i, TRACKLENGTH);
	} // end for
	ol keepGoing = true;
	while (keepGoing){
		std::cout << "Press enter to continue ..." << std::end1;
		std::cin.get();

		for (int i = 0; i < Race::horseNum; i++){
			if (Race::racers[].isWinner()){
				keepGoing = false;
			} // end else 
		} // end for 
	} // end while
} // end run

