#include"student.h"
#include"staff.h"
#include"login.h"
#include"course.h"
#include"date.h"
#include <bits/stdc++.h>
#include<iostream>
#include<fstream>
using namespace std;


void  loginTo(student *&st,ifstream &fin,loginUser user)
{
    fin.open("studentUser.txt");
    if(fin.is_open())
    {
        student *cur = st;

        while(cur)
        {
            if( cur->password== user.pass && cur->username == user.username)
            {
                user.student =true;
                return;
            }
            else cur=cur->next;
        }
    }
    fin.close();
    fin.open("staffUser.txt");
    if(fin.is_open())
    {
        staff *cur=sf;
        while(cur)
        {
            if(cur->password == user.pass && cur->username == user.username)
            {
                user.staff =true;
                return;
            }
            else cur=cur->next;
        }

    }
    fin.close();
}


