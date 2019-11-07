#include "BaseballStatistic.h"
#include "Date.h"
using namespace std;


BaseballStatistic::BaseballStatistic(string fN, string lN, string pos, int jNum,
                                     string tN, int atBat, int homers, int runsBatIn, char batg, char throwg, 
                                     int stopb, double battingAvg, int bm, int bd, int by, double opstop, double eravg)
{
    firstName = fN;
    lastName = lN;
    teamName = tN;
    position = pos;
    
    jerseyNum = jNum;
    atBats = atBat;
    hr = homers;
    rbi = runsBatIn;
    sb = stopb;
    
    batting = batg;
    throwing = throwg;
    
    battingAverage = battingAvg;
    ops = opstop;
    era = eravg;
    
    dob = new Date(by, bm, bd);
}

void BaseballStatistic::setFirstName(string fName)
{firstName = fName;}

void BaseballStatistic::setLastName(string lName)
{lastName = lName;}

void BaseballStatistic::setTeamName(string tName)
{teamName = tName;}

void BaseballStatistic::setJerseyNum(int jNumb)
{jerseyNum = jNumb;}

void BaseballStatistic::setPosition(string pos)
{position = pos;}

void BaseballStatistic::setBatting(char bat)
{batting = bat;}

void BaseballStatistic::setThrowing(char thro)
{throwing = thro;}

void BaseballStatistic::setAtBats(int aBats)
{atBats = aBats;}

void BaseballStatistic::setBattingAverage(double bAvg)
{battingAverage = bAvg;}

void BaseballStatistic::setHR(int homeR)
{hr = homeR;}

void BaseballStatistic::setRBI(int runsBI)
{rbi = runsBI;}

void BaseballStatistic::setSB(int sBat)
{sb = sBat;}

void BaseballStatistic::setOPS(double op)
{ops = op;}

void BaseballStatistic::setERA(double er)
{era = er;}

string BaseballStatistic::getFirstName()const
{return firstName;}
string BaseballStatistic::getLastName()const
{return lastName;}

string BaseballStatistic::getTeamName()const
{return teamName;}

int BaseballStatistic::getJerseyNum()const
{return jerseyNum;}

string BaseballStatistic::getPosition()const
{return position;}

    
char BaseballStatistic::getBatting()const
{return batting;}

char BaseballStatistic::getThrowing()const
{return throwing;}

int BaseballStatistic::getAtBats()const
{return atBats;}

double BaseballStatistic::getBattingAverage()const
{return battingAverage;}

int BaseballStatistic::getHR()const
{return hr;}

int BaseballStatistic::getRBI()const
{return rbi;}

int BaseballStatistic::getSB()const
{return sb;}

double BaseballStatistic::getOPS()const
{return ops;}

double BaseballStatistic::getERA()const
{return era;}

void BaseballStatistic::print()const
{}

