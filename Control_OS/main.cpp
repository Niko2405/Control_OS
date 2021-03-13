#include <iostream>
#include "mods.hpp"

int main()
{
	test();
	download_file("http://www.hitportalgame.de/Custom/Download/Test.wav", ".\\Test.wav");
	play("Test.wav");
	return 0;
}
