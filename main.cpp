#include "mygame.h"

int main(int argc, char** argv)
{
	MyGame game(argc, argv);
	if(game.Init())
	{
		game.Load();
		game.Run();
		game.UnLoad();
	}
	game.DeInit();
	return game.Exit();
}