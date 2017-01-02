#pragma once
#include <string>

// No need to have class constructor. Class simpy outputs an error
// string that was passed to it and uses SDL's quit function.
namespace Engine {
	extern void fatalError(const std::string errorString);
}