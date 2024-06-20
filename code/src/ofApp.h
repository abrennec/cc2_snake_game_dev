#pragma once

#include "ofMain.h"
#include "ofSnake.h"
#include "ofFood.h"


// TODO: Refactoring
// This class works but does not follow the best
// code design approach if you think of separating
// interface from implementation and access levels.
// Review all classes and improve the respective
// implementations accordingly.

// TODO: Game Logic & Object Use
// Inside of ofSnake and ofFood you find a member variable
// that stores the cell size required to position the food
// and to move the snake forward. Does it make sense to
// define this variable in these two classes? What other
// option can you think of?


class ofApp : public ofBaseApp{

	public:
	
		void setup();
		void update();
		void draw();


		void keyPressed(int key);
		
    ofSnake mySnake{};
    ofFood myFood{};
    
};
