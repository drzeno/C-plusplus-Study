#include<iostream>
#include "student.h"
using namespace::std;

void func(Student stu)
{
	cout << "func" << endl;
}
int main(int argc, char* argv[])
{
	int test;
	{
		Student Jone(1000);
	}//һ�Դ����ž����˶�����������ڡ�
	/*test = Jone.getScore();
	cout << test << endl;*/

	//func(Jone);
	// func(1001);//����ᱻ��ʽת����int�͵�1001ת������Student ��Ķ��󡣵��ⲻ��һ���õ�ϰ�ߡ�
	cout << "before return " << endl;
	return 0;
	//���Jone ǰ��û�м�{}��������������return 0; ֮�󱻵��õġ�
}