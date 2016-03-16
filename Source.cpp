#include<iostream>
using namespace std;

class Dice
{

private:
	int roll;
	int number;
	int allDice;


public:
	Dice()
	{ };


	void DiceRolled(){
		roll = rand() % 6 + 1;
		allDice += roll;
		number++;
	}


	double  avg(Dice d, int number){
		return double(d.allDice / number);

	}

	float average(int arr[], int number){
		int sum = 0;
		for (int j = 0; j < number; j++){
			sum += arr[j];
		}
		return double(sum) / double(number);
	}
};

int main(){

	return 0;
}


