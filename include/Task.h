#ifndef TASK_H
#define TASK_H

#include <string>
using namespace std;

struct Task
{
    string description;
    bool complete;

    Task(string& desc);
};

#endif
