#pragma once
#include "Library.h"

class Point {
protected:
	double x;
	double y;

public:
	Point();
	Point(double x, double y);

	void move(double x, double y);
	virtual void rotation(int x) = 0;// ����� ������, void rotation(int x){}
	virtual double area() = 0;//���� ������� ����������� ������ �����, �� ����������� ���������� � �������� �������
};