#include"student.h"
#include"staff.h"
#include"login.h"
#include"course.h"
#include"date.h"
#include <bits/stdc++.h>
#include<iostream>
#include<fstream>
using namespace std;


bool loginStudent(student *&st,ifstream &fin,user ur)
{
    fin.open("studentUser.txt");
    if(fin.is_open())
    {
        student *cur = st;
        string tmpUser;
        while(cur)
        {
            if( == user)
        }
    }
    fin.close();
}


