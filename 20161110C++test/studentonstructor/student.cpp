#include<iostream>
#include "student.h"
using namespace::std;

Student::Student(int ssID)//���캯����ʵ��
	:m_id(ssID), m_score(m_id)//���캯���ĳ�ʼ���б�,˳��Ҫ�淶
{
	cout << "structor" << endl;
}
Student::~Student()//����������ʵ��
{
	cout << "destructor" << endl;
}
