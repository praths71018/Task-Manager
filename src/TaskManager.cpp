#include "TaskManager.h"

ostream &operator<<(ostream &out, TaskManager &tsk)
{
    out << "\n\t\tTask Manager Menu:\n";
    out << "1. Add Task\n";
    out << "2. List Tasks\n";
    out << "3. Mark Task as Completed\n";
    out << "4. Remove Task\n";
    out << "5. Exit\n";
    out << "Enter your choice (1-5): ";
    return out;
}

void TaskManager::addTask(string &description)
{
    cout << "Enter task (type stop to stop adding tasks): \n";
    while (true)
    {
        getline(cin, description);
        if (description == "stop")
        {
            break;
        }
        tasks.emplace_back(description);
    }
}

void TaskManager::listTasks()
{
    ofstream fout;
    fout.open("Log.txt", ios::app);
    if (tasks.empty())
    {
        cout << "No tasks found.\n";
        fout << "No tasks found.\n";
    }
    else
    {
        cout << "SL_NO\tTASK\t\tSTATUS QUO\n";
        fout << "SL_NO\tTASK\t\tSTATUS QUO\n";
        for (int i = 0; i < tasks.size(); ++i)
        {
            cout << (i + 1) << "\t" << tasks[i].description;

            for (size_t j = tasks[i].description.size(); j < 15; ++j)
                cout << " ";

            cout << "\t" << (tasks[i].complete ? "✔︎" : "✗") << "\n";

            fout << (i + 1) << "\t" << tasks[i].description;

            for (size_t j = tasks[i].description.size(); j < 15; ++j)
                fout << " ";

            fout << "\t" << (tasks[i].complete ? "✔︎" : "✗") << "\n";
        }
    }
    fout.close();
}

void TaskManager::CompletedTask(int slno)
{
    if (slno > 0 && slno <= tasks.size())
    {
        tasks[slno - 1].complete = true;
        cout << "Task marked as completed.\n";
    }
    else
    {
        cout << "Invalid Sl NO.\n";
    }
}

void TaskManager::removeTask(int slno)
{
    if (slno > 0 && slno <= tasks.size())
    {
        tasks.erase(tasks.begin() + slno - 1);
        cout << "Task removed.\n";
    }
    else
    {
        cout << "Invalid SL NO.\n";
    }
}

vector<Task> &TaskManager::getTasks()
{
    return tasks;
}
