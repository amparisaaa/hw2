#include<iostream>
#include<string>
using namespace std;
int main()
{
	int score;
	string gpa;
	cout << "Enter your score : ";
	cin >> score;
	//**********************************************************
	if (score > 100 || score < 0 )
	{
		cout << "Your Score Inccorect " << endl;
	exit(0);
	}
	//************************************************************
	if (score >= 80 && score <= 100)  gpa =" A ";
	if (score >= 75 && score <= 79)  gpa = " B+" ;
	if (score >= 70 && score <= 74 )  gpa =  " B ";
	if (score >= 65 && score <= 69 )  gpa =  " C+";
	if (score >= 60 && score <= 64)  gpa =  " C " ;
	if (score >= 55 && score <= 59 )  gpa =  " D+";
	if (score >= 50 && score <= 54 ) gpa = " D ";
	if (score < 50 )  gpa = " F " ;
	//************************************************************
	cout << "Your score is : " << gpa << endl;
	return(0);
}