#include <iostream>
#include <SDL.h>

using namespace std;

int main(int argc, char* args[]) {
	//Start SDL
	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		cout << "SDL Init failed." << endl;
		return 1;
	}

	//Create a window
	SDL_Window *window = SDL_CreateWindow("Basic SDL program.", SDL_WINDOWPOS_UNDEFINED,
			SDL_WINDOWPOS_UNDEFINED, 800, 600, SDL_WINDOW_SHOWN);

	if (window == NULL) {
		cout << "SDL Window create failed. Error: " << SDL_GetError() << endl;
		SDL_Quit();
		return 2;
	}

	SDL_Delay(3000);

	//Quit SDL
	SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;
}
