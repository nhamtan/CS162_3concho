#include"student.h"
#include"staff.h"
#include"login.h"
#include"course.h"
#include"date.h"
//#include <bits/stdc++.h>
#include<iostream>
#include<fstream>
using namespace std;



void viewCourse(semester se[],int k)
{
        cout<< "List Course in semester "<<k<<" : "<<endl;
        for(int i=0;i<7;i++)
        {
            cout <<" Course "<<i+1<< " : "<<endl;
            cout <<"ID : "<<se[k-1].cs[i].id<<endl;
            cout <<"Teacher name : " <<se[k-1].cs[i].teacherName<<endl;
            cout <<"Number of credits : "<<se[k-1].cs[i].numOfCredits<<endl;
            cout <<"Maximum of students : "<<se[k-1].cs[i].maxSt<<endl;
            cout <<"Time in week : "<<se[k-1].cs[i].daySt[0].dayInWeek <<" - "<<se[k-1].cs[i].daySt[0].time <<" and " <<se[k-1].cs[i].daySt[1].dayInWeek<<" - " <<se[k-1].cs[i].daySt[1].time<<endl;
            cout <<endl;
        }
}
