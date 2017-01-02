#pragma once

#include <SDL\SDL.h>
#include <gl\glew.h>
#include <string>

namespace Engine {

	enum WindowFlags {
		INVISIBLE = 0x1,
		FULLSCREEN = 0x2,
		BORDERLESS = 0x4
	};
	
	class Window
	{
	public:
		Window();
		~Window();
	
		// Create window of type flag method class.
		int createWindow(const std::string windowName, const int screenWidth,
			const int screenHeight, const unsigned int windowFlags);

		// Swap the buffer.
		void swapBuffer();

		// Getters.
		int getScreenWidth() const { return m_screenWidth; }
		int getScreenHeight() const { return m_screenHeight; }
	
	
	private:
		// SDL Window object
		SDL_Window* m_sdlWindow;


		int m_screenWidth;
		int m_screenHeight;

	};

}
