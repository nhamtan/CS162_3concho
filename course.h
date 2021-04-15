#include"date.h"
#include<iostream>
#include<bits/stdc++.h>
#ifndef _course_h_
#define _course_h_
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
    int maxSt=50;
    timeStudying daySt[2];

};
struct semester
{
    course cs[7];
    date startDate;
    date endDate;
    string year2021="2020-2021";
};




#endif // _course_h_
