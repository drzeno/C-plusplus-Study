#include<iostream>
using namespace::std;
/*
�ӹ��캯�������
*/
#include "Car.h";



int main()
{
	Car a;
	cout << " end of Car a  " << endl;//���лᷢ���ڴ�ӡ�����ʱ�����캯���Ѿ���������
	//��һ�δ�ӡʱ��Ĭ�ϵĹ��캯�������Ա������ʼ����һ�����ֵ��
	a.print();
	//�ֶ���ʼ��
	a.setProperty(10000, 123456);
	a.print();
	a.run();
	
	return 0;
}