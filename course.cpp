#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include"course.h"
#include"date.h"
#include"login.h"
#include"staff.h"
#include"student.h"


void viewCourse(semester se[])
{
    for (int k=0;k<3;k++)
    {
        cout<< "List Course in semester "<<k+1<<" : "<<endl;
        for(int i=0;i<7;i++)
        {
            cout <<" Course "<<i+1<< " : "<<endl;
            cout <<"ID : "<<se[k].cs[i].id<<endl;
            cout <<"Teacher name : " <<se[k].cs[i].teacherName<<endl;
            cout <<"Number of credits : "<<se[k].cs[i].numOfCredits<<endl;
            cout <<"Maximum of students : <<"se[k].cs[i].maxSt<<endl;
            cout <<"Time in week : "<<se[k].cs[i].daySt[0].dayInWeek <<" - "<<se[k].cs[i].daySt[0].time <<" and " <<se[k].cs[i].daySt[1].dayInWeek<<" - " <<se[k].cs[i].daySt[1].time<<endl;
        }
    }
}
