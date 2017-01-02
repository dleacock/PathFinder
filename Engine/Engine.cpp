#include "Engine.h"

#include <SDL\SDL.h>
#include <gl\glew.h>

namespace Engine {
	int Engine::init() {
		// Initialize SDL
		SDL_Init(SDL_INIT_EVERYTHING);
		// Tell SDL that we want a double buffered window to prevent flickering.
		SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);

		return 0;
	}
}