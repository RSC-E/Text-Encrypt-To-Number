#pragma GCC header_system
#pragma once

#include<iostream>
#include<conio.h>
#include<windows.h>
#include<vector>
#include<string>


#include "kernel"

using namespace std;

void SetCursorDefaultPos(POINT pos);
void HiddenCursor();
void UnHiddenCursor();
int GetArrowKeyInput();
void DisplayConsoleMenu(vector<string>& options,int selectIndex,string message);
int SelectArrowMenu(const vector<string>& options,string message);
