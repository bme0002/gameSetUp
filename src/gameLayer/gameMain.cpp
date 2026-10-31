#include <raylib.h>
#include "gameMain.h"
#include <asserts.h>
#include <iostream>
#include <fstream>

struct GameData
{
	float positionX = 100;
	float positionY = 100;
}gameData;

bool initGame()
{

	bool thingsAreOK = false;

	permaAssertComment(thingsAreOK = true, "error, things are noit ok :/");
	return true;

	
}

bool updateGame()
{

	float deltaTime = GetFrameTime();
	if (deltaTime > 1.f / 5) { deltaTime = 1.f / 5.f; }

	if (IsKeyDown(KEY_A)) { gameData.positionX -= 200 * deltaTime; }
	if (IsKeyDown(KEY_D)) { gameData.positionX += 200 * deltaTime; }
	if (IsKeyDown(KEY_W)) { gameData.positionY -= 200 * deltaTime; }
	if (IsKeyDown(KEY_S)) { gameData.positionY += 200 * deltaTime; }

	DrawRectangle(gameData.positionX,gameData.positionY, 50, 50, {255, 0,200,255});
	return true;
}

void closeGame()
{
	//reset game
	gameData = {};
	//

	/*std::ofstream file{ RESOURCES_PATH "f.txt" };
	file << "Closed\n";
	file.close();*/

}

void loadLevel() 
{
	//resets the game state.
	gameData = {};
	//...do loading stuff
}