#pragma once
#include<iostream>
using namespace std;
#include<map>
#include<fstream>
#include "globalFile.h"

class OrderFile {
public:
	OrderFile();

	void updateOrder();

	map<int, map<string, string>> m_orderData;//{��¼�������� �����¼�ļ�ֵ��}

	int m_Size;
};