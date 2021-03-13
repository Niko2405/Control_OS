#pragma comment(lib, "winmm.lib")
#include "mods.hpp"

void test()
{
	std::cout << "Test erfolgreich" << std::endl;
}

void play(const std::string& str)
{
    PlaySound(s2ws(str).c_str(), NULL, SND_FILENAME);
    //PlaySound(TEXT("recycle.wav"), NULL, SND_FILENAME);
}

std::wstring s2ws(const std::string& s)
{
    int len;
    int slength = (int)s.length() + 1;

    len = MultiByteToWideChar(CP_ACP, 0, s.c_str(), slength, 0, 0);
    wchar_t* buf = new wchar_t[len];
    MultiByteToWideChar(CP_ACP, 0, s.c_str(), slength, buf, len);
    std::wstring str(buf);
    delete[] buf;
    return str;
}
