#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include"course.h"
#include"date.h"
#include"login.h"
#include"staff.h"
#include"student.h"


void initStaff(staff *&Sf) /// cái hàm này sẽ tạo ra một list Sf chứa toàn bộ tải khoản và mật khẩu của staff.
{
    string path = "Staffs.csv";
    freopen(path.c_str() , "r" , stdin);
    string temp;
    getline(cin , temp);
    staff *cur;
    while(getline(cin , temp))
    {
        string words[7];
        int cnt = 1;
        for(int i = 0 ; i < temp.size() ; i++)
        {
            if(temp[i] == ',')
                cnt++;
            else
                words[cnt].push_back(temp[i]);
        }
        //cout << words[3] << " " << words[2] << "\n";
        if(Sf == NULL)
        {
            Sf = new staff;
            cur = Sf;
        }
        else
        {
            cur -> next = new staff;
            cur = cur -> next;
        }
        cur -> username = words[3];
        cur -> username = words[2];
    }
}

