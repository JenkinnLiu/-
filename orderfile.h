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

	map<int, map<string, string>> m_orderData;//{记录的条数， 具体记录的键值对}

	int m_Size;
};