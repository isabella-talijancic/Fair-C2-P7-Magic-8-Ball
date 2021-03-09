//C2 P7 Magic 8-Ball v.1

# include <iostream>
# include <string>
# include <cstdlib> //generates random number
# include <iomanip>
# include <chrono>
# include <thread>

using namespace std;
string question;
char playAgain = 'Y';
int choice;
int randomNumber;

int main()
{
	string message = "\nMagic 8 Ball\n\n";

	while ((playAgain == 'Y') || (playAgain == 'y'))
	{
	    string message1 = "\nWhat is your question?\n";
					
		for (const auto c : message)
		{
			cout << c << std::flush;
			this_thread::sleep_for(chrono::milliseconds(100));
		}
		for (const auto c : message1)
		{
			cout << c << std::flush;
			this_thread::sleep_for(chrono::milliseconds(100));
		}
		cin >> question;
		
	    srand(static_cast<unsigned int>(time(0)));
	    int answer;
	    string question;
		choice = (rand()%20) +1;
		getline(cin, question);
		
		if (choice == 1)
		{
			cout << "\nNegatory.";
		}
		else if (choice == 2)
		{
			cout << "\nNo. No. No.";
		}
		else if (choice == 3)
		{
			cout << "\nUmmm...not really.";
		}
		else if (choice == 4)
		{	
			cout << "\nObviously!";
			cout << "\nNOT!";
		}
		else if (choice == 5)
		{
			cout << "\nToday is your lucky day!";
		}
		else if (choice == 6)
		{
			cout << "\nThere is a great possibility.";
		}
		else if (choice == 7)
		{
			cout << "\nAffirmative.";
		}
		else if (choice == 8)
		{
			cout << "\nYES!";
		}
		else if (choice == 9)
		{
			cout << "\nAbsolutely.";
		}
		else if (choice == 10)
		{
			cout << "\nSi.";
		}
		else if (choice == 11)
		{
			cout << "\nYes, definitely";
		}
		else if (choice == 12)
		{
			cout << "\nThe moment will come.";
		}
		else if (choice == 13)
		{
			cout << "\nI'm sure of it!";
		}
		else if (choice == 14)
		{
			cout << "\nYour dreams shall come true... Darn.";
		}
		else if (choice == 15)
		{
			cout << "\nHai!";
		}
		else if (choice == 16)
		{
			cout << "\nMaybe...";
		}
		else if (choice == 17)
		{
			cout << "\nPerhaps.";
		}
		else if (choice == 18)
		{
			cout << "\nCertainly a possibility.";
		}
		else if (choice == 19)
		{
			cout << "\nProbably.";
		}
		else if (choice == 20)
		{
			cout << "\nI don't know, why are you asking me?";
		}
		else
		{
			cout << "\nAsk again later";
		}
		

		string message654 = "\n\nWould you like to ask another question (Y/N)?";
		for (const auto c : message654)
		{
			cout << c << std::flush;
			this_thread::sleep_for(chrono::milliseconds(100));
		}
		cin >> playAgain;
	}
	
	string message000 = "\nHope you will come again!";
	for (const auto c : message000)
	{
		cout << c << std::flush;
		this_thread::sleep_for(chrono::milliseconds(100));
	}
    return 0;
}