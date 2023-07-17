#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <string_view>

class Solution
{
public:
	Solution(int num = 0, const std::string& name = "", const std::string& task = "") :
		_num(num),
		_name(name),
		_task(task)
	{}
	virtual ~Solution() = default;
	virtual void callSolution() = 0;
	virtual void callTest() = 0;

	std::string getTask() { return _task; }
	std::string getName() { return _name; }
	int getNum() { return _num; }
protected:
	int _num = 0;
	std::string _name = "";
	std::string _task = "";
};