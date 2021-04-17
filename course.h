#include"student.h"
#include"staff.h"
#include"login.h"
#include"date.h"
#include <bits/stdc++.h>
#include<iostream>
#include<fstream>
using namespace std;


struct timeStudying
{
    string dayInWeek;
    string time;
};
struct course
{
    string id;
    string name;
    string teacherName;
    int numOfCredits;
    int maxSt = 50;
    timeStudying daySt[2];
    course* next;
};
struct semester
{
    course cs[7];
    date startDate;
    date endDate;
    string year2021="20202021";
};




#endif // _course_h_
