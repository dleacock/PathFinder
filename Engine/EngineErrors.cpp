#include "EngineErrors.h"

#include <iostream>
#include <cstdlib>
#include <SDL\SDL.h>

namespace Engine {

 
	void fatalError(const std::string errorString) {

		std::cout << "Error: " << errorString << std::endl;
		std::cout << "Press any key to quit." << std::endl;

		// Pause for input.
		int tmp;
		std::cin >> tmp;

		SDL_Quit();
		exit(1);


	}

}