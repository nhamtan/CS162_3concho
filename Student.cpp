#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include"course.h"
#include"date.h"
#include"login.h"
#include"staff.h"
#include"student.h"


void initStudent() /// cái hàm này sẽ tạo ra file studentUser.txt gồm tải khoản và mật khẩu.
{
    freopen("studentUser.txt" , "w" , stdout);
    string s = "20CTT";
    for(char i = '1' ; i <= '2' ; i++)
    {
        /// đọc 2 file
        string path = s + i + ".csv";
        freopen(path.c_str() , "r" , stdin);

        /// truy cập vào từng file
        string temp;
        /// truy cập các dòng
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
            //cerr << words[2] << " " << words[4] << "\n";

            string Date[4];
            cnt = 1;
            for(int i = 0 ; i < words[4].size() ; i++)
            {
                if(words[4][i] == '/')
                {
                    cnt++;
                    if(cnt == 2 && words[4][i + 2] == '/')
                         Date[cnt].push_back('0');
                }
                else
                {
                    if(cnt == 1 && words[4][1] == '/')
                        Date[cnt].push_back('0');
                    Date[cnt].push_back(words[4][i]);
                }
            }
            //cerr << Date[2] << "\n";
            cout << words[2] << " " << Date[2] << Date[1] << Date[3] << "\n";
        }
    }
}

