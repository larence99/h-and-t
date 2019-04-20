#include <iostream>

using namespace std;

class Hare{
private:
	int energy;
	bool down;
public:
	int move(int);
	int get_energy();
	int set_energy();
	void restore_energy();

	Hare();
};
