#pragma once
#include "MyForm1.h"
#include <conio.h>
#include<cstdlib>
#include<ctime>
using namespace::std;
time_t timerand = time(NULL);
void random2(void)
{
	srand(time(NULL));
}
System::Void ASTZSV2::MyForm1::random(void)
{
   random2();
}
