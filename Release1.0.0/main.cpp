#undef _SOMETHING_H
#define _SOMETHING_H
#ifdef _SOMETHING_H

//kernels
#include "conchoise.h"
#include "encrypt"

#include "main"
//basic c++
#include<iostream>
#include<ios>
#include<windows.h>

using namespace std;

void o2(void){
	#if __cplusplus != 201103L
		#error "Develop Error:Please debug on C++11.Command line add:-std=c++11"
	#else
		cin.tie(nullptr);
	#endif
	
	ios::sync_with_stdio(false);
}

void english();
void chinese();
void pgex();

int main(){
	
	
    vector<string> options = {"English", "Chinese", "Exit"};
    int choice = SelectArrowMenu(options,"Select Language:");
    int sel=choice+1;
	
	switch(sel){
		case 1:{
			english();
			break;
		}
		case 2:{
			chinese();
			break;
		}
		case 3:{
			pgex();
			break;
		}
	}
	
	return 0;
}

#endif
