#include<iostream>
#include"Data.h"

void Data::SetValue(int a) {
	value = a;
}


void Data::Disp()
{
	std::cout << "メンバの変数は" << value << "\n";
}