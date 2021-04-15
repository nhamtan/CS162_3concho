#include"student.h"
#include"staff.h"
#include"course.h"
#include"date.h"
#include <bits/stdc++.h>
#include<iostream>
#include<fstream>
using namespace std;


#ifndef _login_h_
#define _login_h_

struct loginUser
{
    string username;
    string pass;
    bool student =false;
    bool staff =true;
};
void login(student *&St , staff *&Sf);

#endif




