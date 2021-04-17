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
    string lastname, firstname;
    int no;
    string name;
    staff *next = NULL;
};

void initStaff(staff *&sf);
void saveDate(ofstream& fout, date d);
void saveStudentIn4(string path, ofstream& fout, student* st);
void exportStudentsOfCourse(int numstu, int numcourse, course* c, student* stu)
#endif // staff_h_
