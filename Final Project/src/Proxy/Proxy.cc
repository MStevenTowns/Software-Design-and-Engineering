#include <iostream>
#include <string>
 
using namespace std;
 
class Wrestler
{
public:
	virtual void FightMe(void) = 0;
	virtual void Insult(string expletives) = 0;
	virtual ~Wrestler(){}
};
 
class Ray : public Wrestler
{
public:
 
	void FightMe(void)
	{
		cout << "\nMassive ignore.";
	}
 
	void Insult(string expletives)
	{
		cout << "\nYou just got knocked the BLEEP out!.\n";
		cout << "\nGet on my level, PUNK!\n";
		cout << "\nNow, STAY DOWN!!\n\n";
	}
};
 
class proxyRay : public Wrestler
{
	Ray* sub;
 
public:
	proxyRay() :sub(NULL){}
 
	void FightMe(void)
	{
		cout << "\nFlee from me!	! (fyi, This is proxy speaking, not the real Ray)\n";
	}
 
	void Insult(string expletives)
	{
		if (sub == NULL)
		{
			sub = new Ray();
		}
		sub->Insult(expletives);
	}
 
	~proxyRay()
	{
		delete sub;
	}
};
 
int main()
{
	Wrestler* Ray = new proxyRay();
	Ray->FightMe();
	cout << "\n\n";
	Ray->Insult("Scared eh Ray?");
 
	delete Ray;
	return 1;
}

