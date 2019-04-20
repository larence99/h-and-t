#include <iostream>
#include <time.h>
#include"race.h"
using namespace std;
int main(){
	srand((unsigned)time(NULL));
	Race race;
	race.path.printPath();
	cout << "|" << race.hare.get_energy() << "/" << race.turtle.get_energy() << endl;
	int	status = 1;
	while (status != 1){
		status = race.update();
		if (status == 1) break;
		race.path.print_path();
		cout << "|" << race.hare.get_energy() << "/" << race.turtle.get_energy() << endl;
	}
}
