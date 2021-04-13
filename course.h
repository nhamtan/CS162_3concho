#include<iostream>
#ifndef _course_h_
#define _course_h_

struct timeStudying
{
    string dayInWeek;
    string time;
};

struct semester
{
    course cs[10];
    date startDate;
    date endDate;
    string year2021="2020-2021";
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
void viewCourse(semester se)
{


}


#endif // _course_h_
