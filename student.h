#pragma once
#include<iostream>
#include "identity.h"
#include "student.h"
#include<fstream>
#include "globalFile.h"
#include "computerRoom.h"
#include<string>
#include"orderfile.h"
#include<vector>
#include<cstring>
using namespace std;

class Student : public Identity {
public:
	Student();

	Student(int id, string name, string pwd);

	vector<ComputerRoom> vCom;

	virtual void openMenu();

	void applyOrder();//����ԤԼ

	void showMyOrder();//�鿴ԤԼ

	void showAllOrder();//�鿴����ԤԼ

	void cancelOrder();//ȡ��ԤԼ

	int m_Id;//ѧ��


};