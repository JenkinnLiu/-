#include "orderfile.h"

OrderFile::OrderFile() {
	ifstream ifs;
	ifs.open(ORDER_FILE, ios::in);
	string date;
	string interval;
	string stuId;
	string stuName;
	string roomId;
	string status;

	this->m_Size = 0;//预约记录个数

	while (ifs >> date && ifs >> interval && ifs >> 
		stuId && ifs >> stuName && ifs >> roomId && ifs >> status) {
		string key;
		string value;
		map<string, string> m;

		int pos = date.find(":");
		if (pos != string::npos) {
			key = date.substr(0, pos);
			value = date.substr(pos + 1, date.size() - pos - 1);
			m.insert({ key, value });
		}

		pos = interval.find(":");
		if (pos != string::npos) {
			key = interval.substr(0, pos);
			value = interval.substr(pos + 1, interval.size() - pos - 1);
			m.insert({ key, value });
		}
		pos = stuId.find(":");
		if (pos != string::npos) {
			key = stuId.substr(0, pos);
			value = stuId.substr(pos + 1, stuId.size() - pos - 1);
			m.insert({ key, value });
		}
		pos = stuName.find(":");
		if (pos != string::npos) {
			key = stuName.substr(0, pos);
			value = stuName.substr(pos + 1, stuName.size() - pos - 1);
			m.insert({ key, value });
		}
		pos = roomId.find(":");
		if (pos != string::npos) {
			key = roomId.substr(0, pos);
			value = roomId.substr(pos + 1, roomId.size() - pos - 1);
			m.insert({ key, value });
		}
		pos = status.find(":");
		if (pos != string::npos) {
			key = status.substr(0, pos);
			value = status.substr(pos + 1, status.size() - pos - 1);
			m.insert({ key, value });
		}

		this->m_orderData.insert({ this->m_Size, m });
		this->m_Size++;

		
	}
	ifs.close();
}

void OrderFile::updateOrder() {
	if (this->m_Size == 0) {
		return;
	}
	ofstream ofs(ORDER_FILE, ios::out | ios::trunc);//更新，就是重新写入
	for (int i = 0; i < m_Size; i++) {
		ofs << "date:" << this->m_orderData[i]["date"] << " ";
		ofs << "interval:" << this->m_orderData[i]["interval"] << " ";
		ofs << "stuId:" << this->m_orderData[i]["stuId"] << " ";
		ofs << "stuName:" << this->m_orderData[i]["stuName"] << " ";
		ofs << "roomId:" << this->m_orderData[i]["roomId"] << " ";
		ofs << "status:" << this->m_orderData[i]["status"] << endl;
	}
	ofs.close();
}
