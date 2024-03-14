#ifndef USERMANAGER_H
#define USERMANAGER_H

#include <map>
#include <string>
#include <fstream>
#include "TaskManager.h" // Include TaskManager.h as UserManager depends on it
using namespace std;


class UserManager
{
protected:
    map<int, pair<string, vector<Task> > > userDetails;

public:
    void userdetails(string name1, int id1);
    void removeuser(int id2);
    void printuser(int id1);
};

#endif /* USERMANAGER_H */
