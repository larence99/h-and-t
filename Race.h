#include <iostream>
#include "Hare.h"
#include "Turtle.h"
#include "Path.h""

using namespace std;

class Race {
private:

public:
	int update();
	Path path;
	Hare hare;
	Turtle turtle;
};
