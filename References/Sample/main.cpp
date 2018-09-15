#include <iostream>
using namespace std;
#include <string>

struct FootballPlayer {
private:
	string name_;
	int number_;
	float yards_;

public:
	FootballPlayer(string, int, float);
	string GetName();
};

FootballPlayer::FootballPlayer(string name, int number, float yards)
{
	name_ = name;
	number_ = number;
	yards_ = yards;

}

string FootballPlayer::GetName()
{
	return name_; 
}

int main()
{
	FootballPlayer timTebow("Tim Tebow", 15, 1500);
	FootballPlayer &f = timTebow;

	cout << f.GetName() << endl;
	system("pause");

}