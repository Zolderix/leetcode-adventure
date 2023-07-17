#include "ContainsDuplicate.hpp"
//https://leetcode.com/problems/contains-duplicate/

ContainsDuplicate::ContainsDuplicate():
	Solution(
		217, 
		"Contains Duplicate",
		"Given an integer array nums.\n Return true if any value appears at least twice in the array,\n and return false if every element is distinct."
		)
{
}

void ContainsDuplicate::callSolution()
{
	printf("%i. Task is:\n %s",getNum(), getTask().c_str());
}

void ContainsDuplicate::callTest()
{
}
