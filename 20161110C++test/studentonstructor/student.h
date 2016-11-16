#pragma once
#ifndef _STUDENT_H_
#define _STUDENT_H_
#include<iostream>
class Student
{
public:
	explicit Student(int id);//�����������캯��֮ǰ����explicit����ȷ�ģ��ؼ��֣��ͻ�ر���ʽת��
	~Student();
	inline int getId() 
	{
		return m_id;
	}
	inline void setId(int id)
	{
		m_id = id;
	}

	inline int getScore()
	{
		return m_score;
	}
	inline void setScore(int score)
	{
		m_score = score;
	}
private:
	int m_id;
	int m_score;

};	
#endif;