#include "golf.h"
#include <iostream>
#include <cstring>

void setgolf(golf & g, const char * name, int hc)
{
//    g.fullname = new char[strlen(name) + 1];  // получение нового хранилища
    strcpy(g.fullname, name);
    g.handicap = hc;
}

void showgolf(const golf &g)
{
    std::cout << "fullname = " << g.fullname << std::endl;
    std::cout << "handicap = " << g.handicap << std::endl;

}

int setgolf(golf &g)
{
    char line[Len];
    int hc;

    std::cout << "Enter fullname: ";
    std::cin.getline(line, Len);

    if (line[0] == '\0')
    {
        std::cout << "Empty name!\n" ;
        return 0;
    }

    std::cout << "Enter handicap: " ;
    std::cin >> hc;
    std::cin.get();

    strcpy(g.fullname, line);
    g.handicap = hc;

    return 1;
}
