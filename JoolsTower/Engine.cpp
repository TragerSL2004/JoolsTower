#include "Engine.h"
#include <iostream>

using namespace std;

Engine::Engine()
{
	roomNum = 1;
}

void Engine::start()
{
	cout << "'Hello! I am Feliks Jool. Welcome to my tower!'" << endl;
	cout << "'You might think this is just a normal tower, but you'd be sorely mistaken!'" << endl;
	cout << "'Every time you pass through the barrier to a new floor, a mysterious power will upgrade your weapon!'" << endl;
	cout << "'However, your enemies will get stronger too, so try to be careful... Oh, and whatever you do...'" << endl;
	cout << "'DO NOT BREAK MY TOWER'" << endl;
	system("PAUSE");
	system("cls");
}

void Engine::update()
{
	if (roomNum == 1)
	{
		system("PAUSE");
		system("cls");
		roomNum++;
	}
}

void Engine::end()
{
	cout << "Thank you for playing Jool's Tower! Press any button to close out.";
}

void Engine::run()
{
	start();
	while (roomNum != 8)
	{
		update();
	}
	end();
}
