#include "UserManager.h"

void UserManager::userdetails(string name1, int id1)
{
    vector<Task> tasks;
    userDetails.insert(make_pair(id1, make_pair(name1, tasks)));
}

void UserManager::removeuser(int id2)
{
    userDetails.erase(id2);
}

void UserManager::printuser(int id1)
{
    ofstream fout;
    fout.open("Log.txt", ios::app);
    cout << userDetails[id1].first << endl;
    fout << userDetails[id1].first << endl;
    fout.close();
}
