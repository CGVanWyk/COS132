#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	unsigned seed;
	int num1, num2;
	int calculate;
	int answer;
	int correct;
	int count;
	int max;
	int questionNumber;
	correct = 0;
	count = 1;
	questionNumber = 1;
	cout << "Give a seed value: ";
	cin >> seed;
	srand(seed);
	cout << "Number of questions: ";
	cin >> max;
	if (seed == 0)
{
	srand(time(0));
}

	for (count =1;count <= max;count++)
{
	num1 = rand() % 90 + 10;
	num2 = rand() % 90 + 10;
	cout<<questionNumber++<<"."<<"\t"<<num1<<" + "<<num2<<" = ";
	calculate = num1 + num2;
	cin>>answer;
	if (answer==calculate)
{
	correct++;
	cout<<"Yes. Your answer is correct"<<endl;
}
else
{
	cout<< "No. Your answer is " << answer << "." << "The correct answer is " << calculate << endl;
}
}
	cout << "------------------------------------------"<<endl;
	cout << "You scored ";
	if (answer == calculate)
{
	cout << correct << " / " << max << endl;
}
        else
{
	cout << correct << " / " << max << endl;
}
	return 0;
}

