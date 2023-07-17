#pragma once

#include "base/Solution.hpp"

class ContainsDuplicate : public Solution
{
public:
	ContainsDuplicate();
	~ContainsDuplicate() final = default;

	virtual void callSolution() final;
	virtual void callTest() final;
};