#include "Hare.h"
#include <iostream>
using namespace std;

Hare::Hare(){
	energy = 20;
	down = false;
}
int Hare::move(int poss){
	if (poss >= 0 && poss <= 5){
		set_energy(-2);
		if (energy <= 0) down = true;
		return 3;
	}
	if (poss > 5 && poss <= 7) return -6;
	if (poss > 7 && poss <= 10) {
		set_energy(-1);
		if (energy <= 0) down = true;
		return 1;
	}
	return -1;
}
int Hare::get_energy(){ return energy; }
int Hare::set_energy(int a){
	if (energy + a <= 0){
		energy = 0;
		down = true;
		return 0;
	}
	else if (energy + a = > 20){
		energy = 20;
		return 0;
	}
	else if (energy + a > 0 && energy + a <= 20) energy += a;
	return 1;
}
int Hare::restore_energy(){
	energy = 20;
}
