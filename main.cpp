#include <string>
#include <iostream>
#include <vector>

struct Task
{
    std::string name;
};

std::vector<Task> tasks;

Task addTask(Task task)
{
    tasks.push_back(task);
    return task;
}

Task readTask()
{
    Task newTask;
    std::cout << "Write the task name: " << std::endl;
    std::getline(std::cin >> std::ws, newTask.name);
    return newTask;
}

void writeTasks()
{
    std::cout << std::endl
              << std::endl
              << "TASK LIST"
              << std::endl
              << std::endl;
    for (int i = 0; i < tasks.size(); i++)
    {
        Task task = tasks[i];
        std::cout << "#" << i + 1 << " " << task.name << std::endl;
    }
    std::cout << std::endl
              << std::endl
              << std::endl
              << std::endl;
}

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
        {
            // std::cout << "Create task" << std::endl;
            Task newTask = readTask();
            addTask(newTask);
            break;
        }
        case 2:
            writeTasks();
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
