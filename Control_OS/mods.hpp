#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>
#include <conio.h>
#include <urlmon.h>

void test();
void play(const std::string& str);
void download_file(const std::string& url, const std::string& location);

std::wstring s2ws(const std::string& str);
