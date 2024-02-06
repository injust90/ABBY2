#include <SDL2/SDL.h>
#include <stdio.h>

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

bool init();

bool loadMedia();

void close();

int main (int argc, char* args[])
{
	// The window we'll be rendering too
	SDL_Window* gWindow = NULL;

	// The surface contained by the window
	SDL_Surface* gScreenSurface = NULL;

	// The image we will load and show on the screen
	SDL_Surface* gHelloWorld = NULL;

	// Initialization flag
	bool success = true;
	
	// Initialize SDL
	if ( SDL_Init (SDL_INIT_VIDEO) < 0)
	{
		printf ("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
	}

	else 
	{
		// Create window
		gWindow = SDL_CreateWindow("Hello SDL", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
		if (gWindow == NULL)
		{
			printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
		}

		// Get Window surface
		gScreenSurface = SDL_GetWindowSurface(gWindow);

		// Fill the surface white
		SDL_FillRect (gScreenSurface, NULL, SDL_MapRGB(gScreenSurface -> format, 0xFF, 0xFF, 0xFF));

		// Update the surface
		SDL_UpdateWindowSurface(gWindow);

		// Hack to get window to stay up
		SDL_Event e; bool quit = false; while( quit == false ){ while( SDL_PollEvent( &e ) ){ if( e.type == SDL_QUIT ) quit = true; } }
	}

	// Destroy Window
	SDL_DestroyWindow(gWindow);
	
	// Quit SDL Subsystems
	SDL_Quit();

	init();
	
	return 0;
}



	
