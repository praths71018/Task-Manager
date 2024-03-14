#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Task.h" // Include Task.h as TaskManager depends on it
using namespace std;

class TaskManager
{
    protected:
        vector<Task> tasks;

    public:
        friend ostream &operator<<(ostream &out, TaskManager &tsk);

        void addTask(std::string &description);
        void listTasks();
        void CompletedTask(int slno);
        void removeTask(int slno);
        vector<Task> &getTasks();
};

#endif /* TASKMANAGER_H */
