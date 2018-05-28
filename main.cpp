#include <QCoreApplication>
#include <iostream>
#include "golf.h"

const int MAX = 3;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    golf ann;
    setgolf(ann, "Ann Birdfree", 24);
    showgolf(ann);

    golf andy;
    setgolf(andy);
    showgolf(andy);

    golf arr[MAX];
    for (int i = 0; i < MAX; ++i) {
        if (!setgolf(arr[i])) {
            break;
        }
    }

    std::cout << "Bye.\n";
    return a.exec();
}
