#include"student.h"
#include"login.h"
#include"course.h"
#include"date.h"
#include <bits/stdc++.h>
#include<iostream>
#include<fstream>
using namespace std;

#ifndef _staff_h_
#define _staff_h_


struct staff{
    string password;
    string username;
    staff *next = NULL;
};

void initStaff(staff *&sf);

#endif // staff_h_
