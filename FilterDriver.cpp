#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "BaseballStatistic.h"
#include "Date.h"
#include "Filter.h"

using namespace std;

void swap(int, int, vector<BaseballStatistic>&);
void sort(vector<BaseballStatistic>&);
int search(vector<BaseballStatistic>, string, string);
void loadFile(vector<BaseballStatistic>&);
void printHeading();



int main()
{
    ifstream baseIn("BStats.csv");
    vector<string> List;
    string holder;
    while (baseIn.eof() == 0)
    {
        getline(baseIn, holder);
        List.push_back(holder);
    }
    
    
    
    return 0;
}

