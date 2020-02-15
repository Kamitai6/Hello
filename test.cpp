#include <iostream>
#include "include/GameControl/GameControl.hpp"


int main() {
	
	GameControl game;

	cout << "ƒLƒƒƒ‰–¼‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢" << endl;
	string name = "noname";
	cin >> name;
	game.SetHero(name);

	for(int i = 0; i < 1; i++){
		game.SetEnemy("slime");
		game.ControlBattle();
	}

	for(int i = 0; i < 1; i++) {
		game.SetEnemy("goblin");
		game.ControlBattle();
	}

	game.SetEnemy("dragon");
	game.ControlBattle();

	system("pause");
	return 0;
}