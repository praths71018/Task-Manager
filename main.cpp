#include <iostream>
#include "User.h" // Include the header file for User class
#include "UserManager.h" // Include the header file for UserManager class
using namespace std;

int main()
{
    int id;
    string name;
    int choice;
    User ob;

    while (true)
    {
        cout << "\n\t\tMain Menu\n";
        cout << "1. Add user\n";
        cout << "2. Remove user\n";
        cout << "3. Task Manager\n";
        cout << "4. List Users\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        if (choice == 5)
        {
            cout << "Exiting the program.\n";
            break;
        }

        switch (choice)
        {
            case 1:
                while (true)
                {
                    cin >> id;
                    if (id == 0)
                    {
                        break;
                    }
                    else
                    {
                        getline(cin,name);
                        ob.userdetails(name, id);
                    }
                }
                break;

            case 2:
                cout << "Enter user id to remove: ";
                cin >> id;
                ob.removeuser(id);
                break;

            case 3:
                cout << "Enter user id to print: ";
                cin >> id;
                ob.printuser(id);
                ob.runTaskManager(id);
                break;

            case 4:
                cout << ob;
                break;
                
            default:
                cout << "Invalid choice." << endl;
                break;
        }
    }

    return 0;
}
