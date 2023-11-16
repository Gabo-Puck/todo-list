#include <string>
#include <iostream>
struct Task
{
    std::string name[100];
};

void showMenu()
{
    bool exit = false;
    int option = 0;
    while (!exit)
    {
        std::cout << "1) Create task" << std::endl;
        std::cout << "2) Read task" << std::endl;
        std::cout << "3) Update task" << std::endl;
        std::cout << "4) Delete task" << std::endl;
        std::cout << "5) Exit" << std::endl;
        std::cin >> option;
        switch (option)
        {
        case 1:
            std::cout << "Create task" << std::endl;
            break;
        case 2:
            std::cout << "Read task" << std::endl;
            break;
        case 3:
            std::cout << "Update task" << std::endl;
            break;
        case 4:
            std::cout << "Delete task" << std::endl;
            break;
        case 5:
            std::cout << "Exit" << std::endl;
            exit = true;
            break;
        default:
            std::cout << "Option not found" << std::endl;
            break;
        }
    }
}

int main(int argc, char const *argv[])
{
    showMenu();
    return 0;
}
