#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include "identity.h"
#include <vector>
#include "orderfile.h"
using namespace std;

class Teacher :public Identity {
public:
	Teacher();

	Teacher(int empId, string name, string pwd);

	virtual void openMenu();

	void showAllOrder();

	void validOrder();//…Û∫À‘§‘º

	int m_EmpId;//ΩÃ ¶±‡∫≈
};