#include <iostream>

using namespace std;

class Turtle{
private:
	int energy;
	bool down;
public:
	int move(int);
	int get_energy();
	int set_energy();
	void restore_energy();

	Turtle();
};
