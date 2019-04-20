#include <iostream>

using namespace std;
class Path{
private:
	Step steps(70);
	int turtle_position();
	int hare_position();

public:
	void print_path();
	int moves(int, int);
	int get_hare_position();
	int get_turtle_position();
	int get_occupation(int);
	
	Path();

};
