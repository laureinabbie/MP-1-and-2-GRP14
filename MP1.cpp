#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main()
{
int temp, temp2, exp1, exp2, exp3, exp4, st1, st2, st3, st4, mp1, mp2, prelimsW, prelimsP, finalsW, finalsP, arr[50], i, j;
double percentExp, totalExp, totalSt, percentSt, totalMp, percentMp, totalPrelims, totalFinals, percentPrelims, percentFinals, percentME, raw, grade;
string names[50];

for(int i = 0; i < 50;)
{
	// this will allow user to enter a student's name and input their grades and can cater about 50 
	cout << "Enter Student's name: ";
	cin >> names[i];
	cout << endl;
	i++;
	//the total points for experiments are added, multiplied by 20; because it is the total percentage of the component
	//and then it is divided by 400 which is the total number of points in the component
	cout << "\t\t\t EXPERIMENTS \n";
	cout << "Experiment 1: "; cin >> exp1;
	cout << "Experiment 2: "; cin >> exp2;
	cout << "Experiment 3: "; cin >> exp3;
	cout << "Experiment 4: "; cin >> exp4;
	totalExp = exp1 + exp2 + exp3 + exp4;
	percentExp = totalExp * 20 / 400;
	cout << "Total: " << totalExp << endl;
	cout << "Percentage: " << percentExp << "/20\n\n";
	//the total points for skills test are added, multiplied by 20; because it is the total percentage of the component
	//and then it is divided by 400 which is the total number of points in the component
	cout << "\t\t\t SKILLS TESTS \n";
	cout << "Skills Test 1: "; cin >> st1;
	cout << "Skills Test 2: "; cin >> st2;
	cout << "Skills Test 3: "; cin >> st3;
	cout << "Skills Test 4: "; cin >> st4;
	totalSt = st1 + st2 + st3 + st4;
	percentSt = totalSt * 20 / 400;
	cout << "Total: " << totalSt << endl;
	cout << "Percentage: " << percentSt << "/20\n\n";
	//the machine problem has a total of 200 points all in all
	//which is why the total points accumulated from the grades that have been input is again multiplied to 20 because it is the total percentage of the component
	//and it is divided by the total, which is 200 points
	cout << "\t\t\t MACHINE PROBLEMS \n";
	cout << "Machine Problem 1: "; cin >> mp1;
	cout << "Machine Problem 2: "; cin >> mp2;
	totalMp = mp1 + mp2;
	percentMp = totalMp * 20 / 200;
	cout << "Total: " << totalMp << endl;
	cout << "Percentage: " << percentMp << "/20\n\n";
	cout << "\t\t\t MAJOR EXAMINATIONS \n\n";
	cout << "PRELIMINARY EXAMINATION\n";
	cout << "Written: "; cin >> prelimsW;
	cout << "Practical: "; cin >> prelimsP;
	totalPrelims = prelimsW + prelimsP;
	percentPrelims = totalPrelims * 20 / 100;
	cout << "Percentage: " << percentPrelims << "\n\n";
	cout << "FINAL EXAMINATION \n";
	cout << "Written: "; cin >> finalsW;
	cout << "Practical: "; cin >> finalsP;
	totalFinals = finalsW + finalsP;
	percentFinals = totalFinals * 20 / 100;
	cout << "Percentage: " << percentFinals << "\n";
	percentME = percentPrelims + percentFinals;
	cout << "Total Percentage on Major Examinations: " << percentME << endl;
	raw = percentExp + percentSt + percentMp + percentME;
	cout << "Raw Grade: " << raw << endl;
	//this will determine the transmuted grade based on the computed raw grade
	if (95.56 < raw && raw < 101)
	{
		grade = 1.00;
		cout << "Final Grade: " << grade << " = PASSED \n\n";
	}
	else if (91.11 < raw && raw < 95.57)
	{
		grade = 1.25;
		cout << "Final Grade: " << grade << " = PASSED \n\n";
	}
	else if (86.67 < raw && raw < 91.12)
	{
		grade = 1.50;
		cout << "Final Grade: " << grade << " = PASSED \n\n";
	}
	else if (82.22 < raw && raw < 86.68)
	{
		grade = 1.75;
		cout << "Final Grade: " << grade << " = PASSED \n\n";
	}
	else if (77.78 < raw && raw < 82.23)
	{
		grade = 2.00;
		cout << "Final Grade: " << grade << " = PASSED \n\n";
	}
	else if (73.33 < raw && raw < 77.79)
	{
		grade = 2.25;
		cout << "Final Grade: " << grade << " = PASSED \n\n";
	}
	else if (68.89 < raw && raw < 73.34)
	{
		grade = 2.50;
		cout << "Final Grade: " << grade << " = PASSED \n\n";
	}
	else if (64.44 < raw && raw < 68.90)
	{
		grade = 2.75;
		cout << "Final Grade: " << grade << " = PASSED \n\n";
	}
	else if (59.99 < raw && raw < 64.45)
	{
		grade = 3.00;
		cout << "Final Grade: " << grade << " = PASSED \n\n";
	}
	else
	{
	
		grade = 5.00;
		cout << "Final Grade: " << grade << " = FAILED \n\n";
	}
	cout << endl;
}
//this will display the top 10 students
cout << "The top 10 students are: \n";
 	for(int i=0; i<10; i++){
 	}
 	
	cout<<"Top "<<i+1<<" :"<<names[i]<<endl;
	return 0;
}
