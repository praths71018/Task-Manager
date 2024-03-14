#include "User.h"

void User::userdetails(string name1, int id1)
{
    UserManager::userdetails(name1, id1);
    taskManagers.insert(make_pair(id1, TaskManager()));
}

void User::runTaskManager(int id)
{
    TaskManager &taskManager = taskManagers[id]; // need & to save

    int choice;
    do
    {
        cout << taskManager; //ostream(cout,taskManager)
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cin.ignore();
            string description;
            taskManager.addTask(description);
            break;
        }
        case 2:
        {
            // fout << userdet[id].first << endl;
            taskManager.listTasks();
            break;
        }
        case 3:
        {
            int slno;
            cout << "Enter the task index to mark as completed: ";
            cin >> slno;
            taskManager.CompletedTask(slno);
            break;
        }
        case 4:
        {
            int slno;
            cout << "Enter the SL NO to remove: ";
            cin >> slno;
            taskManager.removeTask(slno);
            break;
        }
        case 5:
            cout << "Exiting Task Manager.\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
            break;
        }
    } while (choice != 5);

    userDetails[id].second = taskManager.getTasks();
}

ostream &operator<<(ostream &out, const User &user)
{
    ofstream fout;
    fout.open("UserList.txt", ios::app);
    if (user.userDetails.empty())
    {
        out << "No users found.\n";
        fout << "No users found.\n";
    }
    else
    {
        for (const auto &user : user.userDetails)
        {
            out << "User ID: " << user.first << "\tUser Name: " << user.second.first << "\n";
            fout << "User ID: " << user.first << "\tUser Name: " << user.second.first << "\n";
        }
    }
    fout.close();
    return out;
}
