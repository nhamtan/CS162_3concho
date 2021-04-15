#include<iostream>
#include<fstream>
#include<bits/stdc++.h>
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
