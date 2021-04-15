#include<bits/stdc++.h>
#include"course.h"
#include"date.h"
#include "login.h"
#include"staff.h"
#include "student.h"
#include <fstream>
using namespace std;

void studentLogInToSystem(ifstream &fin,User &us)
{
    fin.open("studentUser.txt");
    if(fin.is_open())
    {
        while()
        {

            string tmp;
            getline(fin,tmp);
            if(tmp == us.name)
            {
                getline(fin,tmp);
                if(tmp == us.pass)
                {
                    us.isStaff = true;
                    return;
                }
            }
        }
    }
    fin.close();
}


