#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <string_view>

class Solution
{
public:
	Solution(const std::string& name = "", const std::string& task = "")
	{
		_name = name;
		_task = task;
	};
	void callSolution() {}
	void callTest() {}

	std::string getTask() { return _task; }
	std::string getName() { return _name; }
protected:
	std::string _name;
	std::string _task = "";
};