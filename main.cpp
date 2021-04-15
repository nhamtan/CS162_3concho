#include"student.h"
#include"staff.h"
#include"login.h"
#include"course.h"
#include"date.h"
#include <bits/stdc++.h>
#include<iostream>
#include<fstream>
using namespace std;

student *St;
staff *Sf;

int main()
{
    student *St=nullptr;
    staff *Sf=nullptr;
    login(st,sf);
    student *cur=st;
    for(int i=0;i<3;i++)
    {
        cout << cur->password <<endl;
        cur=cur->next;
    }
    return 0;
}
