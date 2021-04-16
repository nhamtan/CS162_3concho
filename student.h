#include"staff.h"
#include"login.h"
#include"course.h"
#include"date.h"
#include <bits/stdc++.h>
#include<iostream>
#include<fstream>
using namespace std;

#ifndef _student_h_
#define _student_h_

struct student{
    string password;
    string username;
    string name;
    student *next = NULL;
};



void initStudent(student *&St);
#endif // _student_h_
