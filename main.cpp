#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <string_view>

#include "solutions/base/Solution.h"

class MainFunction
{
public:
    MainFunction()
    {
        createSolutions();
    }
    
    int start() 
    {
        selectScenario();
        if (_pickedSolution)
        {
            _pickedSolution->callSolution();
            _pickedSolution = nullptr;
            start();
            return 0;
        }

        std::cin.get();
        return 0;
    }

private:
    void createSolutions()
    {
        _solutions.push_back(std::make_shared<Solution>("test"));
        _solutions.push_back(std::make_shared<Solution>("test2"));
        _solutions.push_back(std::make_shared<Solution>("test3"));
    }

    void selectScenario()
    {
        std::cout << "Select next action." << std::endl;
        std::cout << "  1. Select solution." << std::endl;
        std::cout << "  2. Exit." << std::endl;
        int num;
        std::cin >> num;

        switch (num)
        {
        case 1:
            selectSolution();
            return;
        case 2:
            return;
        default:
            std::cout << "Wrong answer was given. Abort." << std::endl;
            return;
        }
    }

    void selectSolution()
    {
        if (!_solutions.size())
        {
            std::cout << "No solutions here yet, or something went wrong..." << std::endl;
            return;
        }
        std::cout << "Select a solution from the list below." << std::endl;

        for (int i = 0; i < _solutions.size(); i++)
        {
            std::cout << "  " << i + 1 << ". " << _solutions[i]->getName() << std::endl;
        }

        std::cin >> _solutionNum;
        if (_solutionNum < 1 || _solutionNum > _solutions.size())
        {
            std::cout << "No. You probably didn`t understand..." << std::endl;
            selectSolution();
            return;
        }
        _solutionNum--;
        _pickedSolution = _solutions[_solutionNum];
    }

private:
    std::shared_ptr<Solution> _pickedSolution = nullptr;
    std::vector<std::shared_ptr<Solution>> _solutions = {};
    int _solutionNum = 0;
};

int main()
{
    std::unique_ptr<MainFunction> main = std::make_unique<MainFunction>();
    return main->start();
}
