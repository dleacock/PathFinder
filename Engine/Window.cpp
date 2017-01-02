#include "Window.h"
#include "EngineErrors.h"
namespace Engine {

	Window::Window()
	{
	}
	
	Window::~Window()
	{
	}

	int Engine::Window::createWindow(const std::string windowName, const int screenWidth, const int screenHeight, const unsigned int windowFlags)
	{
		m_screenWidth = screenWidth;
		m_screenHeight = screenHeight;
		
		// Using SDL OpenGL Window.
		Uint32 flags = SDL_WINDOW_OPENGL;

		// Set windowFlags to flags
		if (windowFlags & INVISIBLE) {
			flags |= SDL_WINDOW_HIDDEN;
		}
		if (windowFlags & FULLSCREEN) {
			flags |= SDL_WINDOW_FULLSCREEN_DESKTOP;
		}
		if (windowFlags & BORDERLESS) {
			flags |= SDL_WINDOW_BORDERLESS;
		}

		// Open SDL window and error check.
		m_sdlWindow = SDL_CreateWindow(windowName.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
			m_screenWidth, m_screenHeight, flags);
		if (m_sdlWindow == nullptr) {
			fatalError("SDL Window could not be created.");
		}

		// Setup OpenGL Context and error check.
		SDL_GLContext m_glContext = SDL_GL_CreateContext(m_sdlWindow);
		if (m_glContext == nullptr) {
			fatalError("SDL GL Context could not be created.");
		}

		// Setup glew and error check.
		GLenum m_glewStatus = glewInit();
		if (m_glewStatus != GLEW_OK) {
			fatalError("Could not initialize glew.");
		}

		// Clear screen to black.
		glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

		// Set vsync.
		SDL_GL_SetSwapInterval(0);

		// Enable alpha blending.
		glEnable(GL_BLEND);
		glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

		return 0;
	}

	void Engine::Window::swapBuffer()
	{
		SDL_GL_SwapWindow(m_sdlWindow);
	}

}

