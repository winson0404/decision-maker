#include<iostream>
#include<vector>
#include<string>
#include<cstdlib>
#include<time.h>
#include<limits>
using namespace std;

void budgetPackage();
void premiumPackage();
void mixedPackage();

int main()
{
	int choice;
	cout << "Choose your option:" << endl;
	cout << "1.budget package" << endl;
	cout << "2.Premium package" << endl;
	cout << "3.mixed chance package"<< endl;
	cin  >> choice;
	if (choice == 1)
		budgetPackage();
	else if (choice == 2)
		premiumPackage();
	else if (choice == 3)
		mixedPackage();
		
	return 0;
}

void budgetPackage()
{
	cout << "Poor shits" << endl;
	for (int j = 2; j > 0; j--)
	{
		srand (time(NULL));
		int randomNum;
		int numOption;
		vector<string>name;
		string input;
		string temp;
		cout << "How many restaurant u guys want to take in option" << endl;
		cin >> numOption;
		cin.ignore(9999999, '\n');
		randomNum = rand()% numOption;
		for (int i = 0; i < numOption ;i++)
		{
			cout << "Enter the restaurant " << i + 1 << endl;
			getline(cin,input);
			name.push_back(input);
		}
		if ( j == 2)
		{
		cout << "Are you ready to see the result??" << endl;
		cout << "y = yes             n = no\n";
		cin >> temp;
		cout << "doesnt care anyway" << endl;
		}
		else
			system("pause");
		cout << "God has spoken, we should eat: " << endl;
		cout << name[randomNum] << endl << endl;
		cout << "not convinced yet? You have " << j-1<<" more try.\n" << endl;
		cout << "Wanna try 1 last time?\n y = yes        n = no \n";
		cin >> temp;
		if (temp == "n")
			exit(0);
		else if (temp == "y")
		{
			system("cls");
			if (j == 1)
				cout << "nope";
			continue;

		}
		else 
			cout << " wtf are you typing? bye\n" << endl;
	}
	
	
	
}

void premiumPackage()
{
	cout << "Rich asses" << endl;
	for (int j = 2; j > 0; j--)
	{
		srand (time(NULL));
		int randomNum;
		int numOption;
		vector<string>name;
		string input;
		string temp;
		cout << "How many restaurant u guys want to take in option" << endl;
		cin >> numOption;
		cin.ignore(999999, '\n');
		randomNum = rand()% numOption;
		for (int i = 0; i < numOption ;i++)
		{
			cout << "Enter the restaurant " << i + 1 << endl;
			getline(cin,input);
			name.push_back(input);
		}
		if ( j == 2)
		{
		cout << "Are you ready to see the result??" << endl;
		cout << "y = yes             n = no\n";
		cin >> temp;
		cout << "doesnt care anyway" << endl;
		}
		else
			system("pause");
		cout << "God has spoken, we should eat: " << endl;
		cout << name[randomNum] << endl << endl;
		cout << "not convinced yet? You have " << j-1<<" more try.\n" << endl;
		cout << "Wanna try 1 last time?\n y = yes        n = no \n";
		cin >> temp;
		if (temp == "n")
			exit(0);
		else if (temp == "y")
		{
			system("cls");
			if (j == 1)
				cout << "nope";
			continue;

		}
		else 
			cout << " wtf are you typing? bye\n" << endl;
	}
}

void mixedPackage()
{
	for (int j = 2; j > 0; j--)
	{
		srand (time(NULL));
		int randomNum1;
		int randomNum2;
		int percentage = rand()%100 + 1;
		int numOption1;
		int numOption2;
		vector<string>namePremium;
		vector<string>nameBudget;
		string input;
		string temp;
		cout << "Enter of premium restaurant($$$) you guys want to take in option" << endl;
		cin >> numOption1;
		cout << "Enter of budget restaurant($) you guys want to take in option" << endl;
		cin >> numOption2;
		cin.ignore(999, '\n');
		randomNum1 = rand()%numOption1; 
		randomNum2 = rand()%numOption2;
		
		for (int i = 0; i < numOption1 ;i++)
		{
			cout << "Enter the premium restaurant " << i + 1 << ":" << endl;
			getline(cin,input);
			namePremium.push_back(input);
		}
		for (int i = 0; i < numOption2 ;i++)
		{
			cout << "Enter the budget restaurant " << i + 1 << ":" <<  endl;
			getline(cin,input);
			nameBudget.push_back(input);
		}
		if ( j == 2)
		{
			cout << "Are you ready to see the result??" << endl;
			cout << "y = yes             n = no\n";
			cin >> temp;
			cout << "doesnt care anyway" << endl;
		}
		else
			system("pause");
		
		cout << "God has spoken, we should eat: " << endl;
		if ( percentage > 0 && percentage < 25) // percentage of premium food & budget food
			cout << namePremium[randomNum1] << endl;
		else if (percentage >= 25 && percentage <= 100)
			cout << nameBudget[randomNum2] << endl;
		
		cout << "not convinced yet? You have " << j-1<<" more try.\n" << endl;
		cout << "Wanna try 1 last time?\n y = yes        n = no \n";
		cin >> temp;
		if (temp == "n")
			exit(0);
		else if (temp == "y")
		{
			system("cls");
			if (j == 1)
				cout << "nope";
			continue;

		}
		else 
			cout << " wtf are you typing? bye\n" << endl;
	}
}

























