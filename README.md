# Task Manager

This is a simple task manager program written in C++.

## Description

The Task Manager allows users to:

- Add users
- Remove users
- Manage tasks for each user
- Mark tasks as completed
- Remove tasks

## Compilation

To compile the program, run the following command in the terminal:

```bash

g++ main.cpp src/User.cpp src/UserManager.cpp src/TaskManager.cpp src/Task.cpp -Iinclude -o program

```

## Execution

After compiling the program, run the executable using the following command:

```bash
./program
```

Follow the on-screen instructions to interact with the Task Manager.

## Example Execution

#### 1. Add Users

```
                Main Menu
1. Add user
2. Remove user
3. Task Manager
4. List Users
5. Exit
Enter your choice (1-5): 1
1 Pratham
2 Ranjive
3 Rajeev
0
```
#### 2. List Users (output also in UserList.txt)

```
                Main Menu
1. Add user
2. Remove user
3. Task Manager
4. List Users
5. Exit
Enter your choice (1-5): 4
User ID: 1      User Name:  Pratham
User ID: 2      User Name:  Ranjive
User ID: 3      User Name:  Rajeev
```
#### 3. Remove Users
```
                Main Menu
1. Add user
2. Remove user
3. Task Manager
4. List Users
5. Exit
Enter your choice (1-5): 2
Enter user id to remove: 3
```

#### 4. ID-1 using Task Manager Application and adding tasks
```
                Main Menu
1. Add user
2. Remove user
3. Task Manager
4. List Users
5. Exit
Enter your choice (1-5): 3
Enter user id to print: 1
 Pratham

                Task Manager Menu:
1. Add Task
2. List Tasks
3. Mark Task as Completed
4. Remove Task
5. Exit
Enter your choice (1-5): 1
Enter task (type stop to stop adding tasks): 
Playing
Studying
Eating
stop
```

#### 5. List Tasks of ID-1(Output present in Log.txt)
```
                Task Manager Menu:
1. Add Task
2. List Tasks
3. Mark Task as Completed
4. Remove Task
5. Exit
Enter your choice (1-5): 2
SL_NO   TASK            STATUS QUO
1       Playing         ✗
2       Studying        ✗
3       Eating          ✗
```

#### 6. Mark Task as Completed and List Tasks
```

                Task Manager Menu:
1. Add Task
2. List Tasks
3. Mark Task as Completed
4. Remove Task
5. Exit
Enter your choice (1-5): 3
Enter the task index to mark as completed: 1
Task marked as completed.

                Task Manager Menu:
1. Add Task
2. List Tasks
3. Mark Task as Completed
4. Remove Task
5. Exit
Enter your choice (1-5): 3
Enter the task index to mark as completed: 2
Task marked as completed.

                Task Manager Menu:
1. Add Task
2. List Tasks
3. Mark Task as Completed
4. Remove Task
5. Exit
Enter your choice (1-5): 2
SL_NO   TASK            STATUS QUO
1       Playing         ✔︎
2       Studying        ✔︎
3       Eating          ✗
```

#### 7. Exit Task Manager of ID-1
```

                Task Manager Menu:
1. Add Task
2. List Tasks
3. Mark Task as Completed
4. Remove Task
5. Exit
Enter your choice (1-5): 5
Exiting Task Manager.
```

#### 8. ID-2 Using Task Manager
```

                Main Menu
1. Add user
2. Remove user
3. Task Manager
4. List Users
5. Exit
Enter your choice (1-5): 3
Enter user id to print: 2
 Ranjive

                Task Manager Menu:
1. Add Task
2. List Tasks
3. Mark Task as Completed
4. Remove Task
5. Exit
Enter your choice (1-5): 1
Enter task (type stop to stop adding tasks): 
Sleeping
Gym
stop

                Task Manager Menu:
1. Add Task
2. List Tasks
3. Mark Task as Completed
4. Remove Task
5. Exit
Enter your choice (1-5): 2
SL_NO   TASK            STATUS QUO
1       Sleeping        ✗
2       Gym             ✗

                Task Manager Menu:
1. Add Task
2. List Tasks
3. Mark Task as Completed
4. Remove Task
5. Exit
Enter your choice (1-5): 3
Enter the task index to mark as completed: 2
Task marked as completed.

                Task Manager Menu:
1. Add Task
2. List Tasks
3. Mark Task as Completed
4. Remove Task
5. Exit
Enter your choice (1-5): 3
Enter the task index to mark as completed: 1
Task marked as completed.

                Task Manager Menu:
1. Add Task
2. List Tasks
3. Mark Task as Completed
4. Remove Task
5. Exit
Enter your choice (1-5): 2
SL_NO   TASK            STATUS QUO
1       Sleeping        ✔︎
2       Gym             ✔︎

                Task Manager Menu:
1. Add Task
2. List Tasks
3. Mark Task as Completed
4. Remove Task
5. Exit
Enter your choice (1-5): 5
Exiting Task Manager.
```

#### 9. ID-1 checking list of Tasks (Saved till program terminated)
```

                Main Menu
1. Add user
2. Remove user
3. Task Manager
4. List Users
5. Exit
Enter your choice (1-5): 3
Enter user id to print: 1
 Pratham

                Task Manager Menu:
1. Add Task
2. List Tasks
3. Mark Task as Completed
4. Remove Task
5. Exit
Enter your choice (1-5): 2
SL_NO   TASK            STATUS QUO
1       Playing         ✔︎
2       Studying        ✔︎
3       Eating          ✗

                Task Manager Menu:
1. Add Task
2. List Tasks
3. Mark Task as Completed
4. Remove Task
5. Exit
Enter your choice (1-5): 5
Exiting Task Manager.
```
#### 10. Exiting Task Manager
```

                Main Menu
1. Add user
2. Remove user
3. Task Manager
4. List Users
5. Exit
Enter your choice (1-5): 5
Exiting the program.
```
