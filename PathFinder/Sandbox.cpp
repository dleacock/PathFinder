#include "Sandbox.h"



Sandbox::Sandbox()
{
	init();
}


Sandbox::~Sandbox()
{
}

void Sandbox::init()
{
	// Initialize the engine.
	Engine::init();

	SDL_GL_SetAttribute(SDL_GL_ACCELERATED_VISUAL, 1);

	m_window.createWindow("Test", 640, 480, 0);

	run();
}

void Sandbox::run()
{
	m_running = true;
	while (m_running) {

		while (SDL_PollEvent(&m_event)) {
			if (m_event.type == SDL_QUIT) {
				m_running = false;
			}
		}
	}
}

void Sandbox::onEvent()
{
}
