#pragma once
#include<iostream>
using namespace std;
#include "identity.h"
#include "globalFile.h"
#include "student.h"
#include "teacher.h"
#include "computerRoom.h"
#include <algorithm>
#include <fstream>
#include<vector>

class Manager : public Identity {
public:
	Manager();

	Manager(string name, string pwd);

	virtual void openMenu();

	void addPerson();

	void showPerson();

	void showComputer();

	void initVector();

	vector<Student> vStu;

	vector<Teacher> vTea;

	bool checkRepeat(int id, int type);

	vector<ComputerRoom> vCom;

	void cleanFile();
};