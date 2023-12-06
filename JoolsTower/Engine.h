#pragma once
class Engine
{
public:
	Engine();

	void start();
	void update();
	void end();
	void run();
private:
	int roomNum;
};