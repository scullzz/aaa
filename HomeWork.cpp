#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct ToDo_List
{
    string decsription;
    int date;
    string status;
};
int main()
{
    int option;
    vector<ToDo_List> todolists;
    while (true)
    {
        cout << "Please push 1 if you wanna add todo" << endl;
        cout << "Please push 2 if you wanna delete one todo" << endl;
        cout << "Please push 3 if you wanna see all your task by status" << endl;
        cout << "Please push 4 if you wanna mark one task as completed" << endl;
        cout << "Please push 5 if you wanna quit" << endl;

        cin >> option;
        if (option == 1)
        {
            ToDo_List todo;
            cout << "Please enterh the description and number of days for your task" << endl;
            cin >> todo.decsription;
            cin >> todo.date;
            todo.status = "incompleted";
            todolists.push_back(todo);

            for (int i = 0; i < todolists.size(); i++)
            {
                for (int j = 0; j < todolists.size() - 1; j++)
                {
                    if (todolists[j].date > todolists[j + 1].date)
                    {
                        int b = todolists[j].date;   
                        todolists[j].date = todolists[j + 1].date; 
                        todolists[j + 1].date = b;       
                    }
                }
            }
        }
        else if (option == 2)
        {
            string deleteTask;
            cout << "Please enter the desciption of your task which you wanna delete" << endl;
            cin >> deleteTask;

            int index;
            for (int i = 0; i < todolists.size(); i++)
            {
                if (todolists[i].decsription == deleteTask)
                {
                    index = i;
                }
            }
            todolists.erase(todolists.begin() + index);
        }
        else if (option == 3)
        {
            cout << "Please push 1 if you wanna see all completed status tasks" << endl;
            cout << "Please push 2 if you wanna see all incompleted status tasks" << endl;
            int EnterStatus;
            cin >> EnterStatus;
            if (EnterStatus == 1)
            {
                for (int i = 0; i < todolists.size(); i++)
                {
                    if (todolists[i].status == "completed")
                    {
                        cout << todolists[i].decsription << ", " << todolists[i].date << ", " << todolists[i].status << endl;
                    }
                }
            }
            else if (EnterStatus == 2)
            {
                for (int i = 0; i < todolists.size(); i++)
                {
                    if (todolists[i].status == "incompleted")
                    {
                        cout << todolists[i].decsription << ", " << todolists[i].date << ", " << todolists[i].status << endl;
                    }
                }
            }
            else
            {
                cout << "Wrong option" << endl;
                break;
            }
        }
        else if (option == 4)
        {
            cout << "Please enter the description of your task to mark it as a completed" << endl;
            string markTask;
            cin >> markTask;
            for (int i = 0; i < todolists.size(); i++)
            {
                if (todolists[i].decsription == markTask && todolists[i].status == "incompleted")
                {
                    todolists[i].status = "completed";
                }
                else
                {
                    cout << "This task already is completed or you entered wrong description of your task" << endl;
                    cout << "Please try it again" << endl;
                }
            }
        }
        else if (option == 5)
        {
            break;
        }
        else
        {
            cout << "Wrong option" << endl;
            break;
        }
    }
}