#include"student.h"
#include"staff.h"
#include"login.h"
#include"course.h"
#include"date.h"
#include <string>
#include <bits/stdc++.h>
#include<iostream>
#include<fstream>
using namespace std;

void saveDate(ofstream& fout, date d)
{
	fout << d.day << " " << d.month << " " << d.year;
}

void saveStudentIn4(string path, ofstream& fout, student* st)
{
	fout.open(path);
	if (!fout.is_open()) cout << "Can't create file." << endl;
	else
	{
		fout << st->no << '\t' << st->lastname << '\t' << st->firstname << '\t' << st->username << '\t';
		saveDate(fout, st->dob);
	}
	fout.close();
}

void exportStudentsOfCourse(course* c, student* stu, ofstream fout)
{
	course* cur = c;
	student* st = stu;
	while (cur != nullptr)
	{
		while (stu != nullptr)
		{
			if (stu->mycourse->id.compare(cur->id) == 0)
			{
				saveStudentIn4(cur->id, fout, stu);
			}
			stu = stu->next;
		}
		cur = cur->next;
	}
}

