#pragma once
#ifndef _CAR_H_
#define _CAR_H_

class Car
{
public://�ĸ����к���
	//Car();//Ĭ�Ϲ��캯�������ָ�����ͬ�������в���������û�з���ֵ��
	Car(int price = 22, int carNum = 33);//Ĭ�Ϲ��캯���������ء���Ĭ��ֵ������ʡȥû�в�����Ĭ�Ϲ��캯����
	void run();
	void stop();

	void setProperty(int price, int carNum);
	void print();//һ��������������һЩ��ӡ����

private://��������
	int m_price;
	int m_carNum;

};
#endif;