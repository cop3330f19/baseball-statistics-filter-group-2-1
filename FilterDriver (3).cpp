#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

#include "BaseballStatistic.h"
#include "Date.h"
#include "Filter.h"

using namespace std;

void swap(int, int, vector<BaseballStatistic>&);
void sort(vector<BaseballStatistic>&);
int search(vector<BaseballStatistic>, string, string);
void loadFile(vector<BaseballStatistic>&);
void printHeading();

struct key
{
    char field;
    string value;
};

int main()
{
    
    vector <BaseballStatistic> baseList;
    
    ifstream inFile;
    inFile.open("BStats.csv");
    
    string team_name, fname, lname, pos;
    int jersey_num, b_year, b_month, b_day, atbat, t_HR, t_RBI, t_SB;
    char batArm, throwArm;
    double batAvg, t_OPS, t_ERA;
    
    string holder;
    int c = 0;
    while (inFile.eof() == 0) 
    {
        getline(inFile, team_name, ',');
        
        //Input jersey number into holder string
        getline(inFile, holder, ',');
        //Stream holder value to string stream
        stringstream convertj(holder); 
        //puts string converted to int to jersey_num
        convertj >> jersey_num;
        
        
        getline(inFile, fname, ',');
        getline(inFile, lname, ',');
        
        
        getline(inFile, holder, ',');
        stringstream convertBY(holder);
        convertBY >> b_year;
        
        
        getline(inFile, holder, ',');
        stringstream convertBM(holder);
        convertBM >> b_month;
        
        
        getline(inFile, holder, ',');
        stringstream convertBD(holder);
        convertBD >> b_day;
        
        char held;
        inFile.get(batArm);
        inFile.get(held); //For the ',' after
        
        inFile.get(throwArm);
        inFile.get(held); //For the ',' after
        
        
        getline(inFile, holder, ',');
        stringstream convertAB(holder);
        convertAB >> atbat;
        
        
        getline(inFile, holder, ',');
        stringstream convertBA(holder);
        double avgbats;
        convertBA >> avgbats;
        
        
        
        getline(inFile, holder, ',');
        stringstream convertHR(holder);
        convertHR >> t_HR;
        
        
        getline(inFile, holder, ',');
        stringstream convertRBI(holder);
        convertRBI >> t_RBI;
        
        
        getline(inFile, holder, ',');
        stringstream convertSB(holder);
        convertSB >> t_SB;
        
        
        getline(inFile, holder, ',');
        stringstream convertOPS(holder);
        double opsin;
        convertOPS >> opsin;
        
        
        getline(inFile, holder, ',');
        stringstream convertERA(holder);
        convertERA >> t_ERA;
        
        
        getline(inFile, pos);
        
        BaseballStatistic temp (fname, lname, pos, jersey_num,
                               team_name, atbat, t_HR, t_RBI, batArm, throwArm, t_SB,
                               avgbats, b_month, b_day, b_year, t_OPS, t_ERA);
        
        baseList.push_back(temp);
        
    };
    
    bool cont = true;
   // bool searchCase = false;
    
    /*char k;
    string val;
    int sortVal
    
    vector<key> keys;
    key hold();*/
    do
    {
        //Print out of the menu
        cout << endl << "*                                                           *" << endl;
        cout << "* This tool allows you to sort and search National League   *" << endl;
        cout << "* team statstics per player for 2019.                       *" << endl;
        cout << "* Use the menus to select your sort/search options          *" << endl;
        cout << "*************************************************************" << endl;
        cout << "******FILTER OPTIONS******" << endl;
        cout << "* T   - Team             *" << endl;
        cout << "* P   - Position         *" << endl;
        cout << "* B   - Batting          *" << endl;
        cout << "* BA  - Batting Average  *" << endl;
        cout << "* H   - Home Runs        *" << endl;
        cout << "* R   - Runs Batted In   *" << endl;
        cout << "* S   - Stolen Bases     *" << endl;
        cout << "* O   - OPS              *" << endl;
        cout << "* E   - ERA              *" << endl;
        cout << "**************************" << endl << endl;
        cout << "Example input:" << endl;
        cout << "Enter all filter key pairs you would like to use (enter F when finished):" << endl;
        cout << "T Cubs" << endl;
        cout << "B L" << endl;
        cout << "S 2" << endl;
        cout << "BA 0.23" << endl;
        cout << "F" << endl << endl;
        cout << "Enter all filter key pairs you would like to use (enter F when finished):";
        
      
        /*while (searchCase == false)
        {
            cin >> k;
            if (k != 'F' && k != 'f')
            {
                hold.field = k;
                hold.value = val;
                //keys.push_back(hold);
            }
            else
                searchCase = false;
        }*/
        
        
        cout << endl << "*********SORTING OPTIONS*********" << endl;
        cout << "* 1 - By Player Name & Position *" << endl;
        cout << "* 2 - By Team & Jersey Number   *" << endl;
        cout << "* 3 - None                      *" << endl;
        cout << "*********************************" << endl;
        
        
        
    }
    while (cont == true);
    
        return 0;
    }