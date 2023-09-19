#include <iostream>
using namespace std;

string MyFunc(int num, int select)
{
    if (select == 1)
    {
        string s;
        while (num != 0)
        {
            s = s + to_string(num % 2);
            num = num / 2;
        }
        reverse(s.begin(), s.end());
        return s;
    }
    else if (select == 2)
    {
        string s;
        while (num != 0)
        {
            s = s + to_string(num % 8);
            num = num / 8;
        }
        reverse(s.begin(), s.end());
        return s;
    }
    else if (select == 3)
    {
        string s;
        while (num != 0)
        {
            if (num % 16 == 10)
            {
                s = s + "A";
                num = num / 16;
            }
            else if (num % 16 == 11)
            {
                s = s + "B";
                num = num / 16;
            }
            else if (num % 16 == 12)
            {
                s = s + "C";
                num = num / 16;
            }
            else if (num % 16 == 13)
            {
                s = s + "D";
                num = num / 16;
            }
            else if (num % 16 == 14)
            {
                s = s + "E";
                num = num / 16;
            }
            else if (num % 16 == 15)
            {
                s = s + "F";
                num = num / 16;
            }
            else
            {
                s = s + to_string(num % 16);
                num = num / 16;
            }
        }
        reverse(s.begin(), s.end());
        return s;
    }
}

int main()
{
    cout << MyFunc(693, 3) << endl;
    cout << "sd" << endl;
}