
#include <iostream>
#include <string>

class Player
{
    std::string name;
    int lvl;
    double demage;

public:
    void input()
    {
        std::cin >> name >> lvl >> demage;
    }
    void show()
    {
        std::cout << name << " " << lvl << " " << demage;
    }
};
int main()
{
    Player** ptr = new Player * [3];

    for (int i = 0; i < 3; i++) {

        ptr[i] = new Player;
    }

    for (int i = 0; i < 3; i++)
    {
        ptr[i]->input();
    }
    for (int i = 0; i < 3; i++)
    {
        ptr[i]->show();
    }
    return 0;
}
