#pragma comment(lib, "winmm.lib")
#pragma comment(lib, "urlmon.lib")
#include "mods.hpp"

void test()
{
	std::cout << "Test erfolgreich" << std::endl;
}

void play(const std::string& str)
{
    std::cout << "Playing " << str << std::endl;
    PlaySound(s2ws(str).c_str(), NULL, SND_FILENAME);
    //PlaySound(TEXT("recycle.wav"), NULL, SND_FILENAME);
}

void download_file(const std::string& url, const std::string& location)
{
    HRESULT result = URLDownloadToFile(
        NULL,
        s2ws(url).c_str(),
        s2ws(location).c_str(),
        0,
        NULL
    );
    if (result == S_OK)
    {
        std::cout << "Erfolg beim Download von " << url << std::endl;
    }
    else
    {
        std::cout << "Fehler beim Download von " << url << std::endl;
    }
}

std::wstring s2ws(const std::string& str)
{
    int len;
    int slength = (int)str.length() + 1;

    len = MultiByteToWideChar(CP_ACP, 0, str.c_str(), slength, 0, 0);
    wchar_t* buf = new wchar_t[len];
    MultiByteToWideChar(CP_ACP, 0, str.c_str(), slength, buf, len);
    std::wstring _str(buf);
    delete[] buf;
    return _str;
}
