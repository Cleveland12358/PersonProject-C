#pragma once
#include "pch.h"
#include "pch.h"
#include<stdio.h>
#include<iostream>
#include<fstream>
#include<string>
#include <vector>
#include<map>
#include "Calc.h"
using namespace std;

char b[100000] = { 0 };
int j = 0;
int count_ = 0;
vector<string> str;
vector<string> str_shorted;
map<string, int> strmap;
map<string, int>::iterator q;
ofstream d("result.txt");
int max = -999;
bool flag1 = true;
string a;
int w = 0;

extern string agetfile();//声明外部函数
extern void count_all();
extern void addword();

int main()
{
	string buf;
	agefile("input.txt");
	if (flag1 == true)
	{
		count_all();//如果变量为真接着往下输出，如果为假，直接输出error即可
		addword(true, max);
	}
	//system("pause");
	return 0;
}
