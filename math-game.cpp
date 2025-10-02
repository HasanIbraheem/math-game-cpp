#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int correctanswer = 0;
int wroenganswer = 0;
int answer;
int canswer;


int printPositiveNum(string message) {
	int n = 0;
	do {
		cout << message << endl;
		cin >> n;
	} while (n <= 0);
	return n;
}

enum enDificulity { easy = 1, midiume = 2, hard = 3,mix=4 };

enum enType{ Addition =1, Subtraction =2, Multiplication =3, Division =4,Mix=5};

int randomNum(int from, int to) {
	
		int random = rand() % (to - from + 1) + from;
		return random;
	
	
}

string DificulityLevel() {
	enDificulity dificulity;
	int m;
	cout << "please choose the dificulity of the qustion ([1]easy , [2]midiume,[3] hard ,[4] mix)\n";
	cin  >> m;
	dificulity = (enDificulity)m;
	if (dificulity == enDificulity::easy)
		return "easy";
	else if (dificulity == enDificulity::midiume)
		return "midiume";
	else if (dificulity == enDificulity::hard)
		return "hard";
	else if (dificulity == enDificulity::mix)
		return "mix";
	else
		return "not normall choice";
}

string QuestionType() {
	enType choice;
	int n;
	cout << "please choose the type of operater you want to use ([1]Add,[2]Sub,[3]Multiply,[4]Divide,[5]Mix):\n ";
	cin >> n;
	choice = (enType)n;
	if (choice == enType::Addition) {
		return "Add";
	}
	else if (choice == enType::Subtraction) {
		return "Sub";
	}
	else if (choice == enType::Multiplication) {
		return "Multiply";
	}
	else if (choice == enType::Division) {
		return "Div";
	}
	else if (choice == enType::Mix) {
		return "Mix";
	}
	else
		return "not available choice";

}


void readAnswer(string type,string dificality) {
	if (dificality == "easy" && type == "Add") {
		int x = randomNum(1, 10);
		int y = randomNum(1, 10);
		cout << x << " +\n" << y << "\n______\n";
		cin >> answer;
		canswer = x + y;
	}
	else if (dificality == "midiume" && type == "Add") {
		int x = randomNum(11, 50);
		int y = randomNum(11, 50);
		cout << x << " +\n" << y << "\n______\n";
		cin >> answer;
		canswer = x + y;
	}
	else if (dificality == "hard" && type == "Add") {
		int x = randomNum(51, 100);
		int y = randomNum(51, 100);
		cout << x << " +\n" << y << "\n______\n";
		cin >> answer;
		canswer = x + y;
	}
	else if (dificality == "easy" && type == "Sub") {
		int x = randomNum(1, 10);
		int y = randomNum(1, 10);
		cout << x << " -\n" << y << "\n______\n";
		cin >> answer;
		canswer = x - y;
	}
	else if (dificality == "midiume" && type == "Sub") {
		int x = randomNum(11, 50);
		int y = randomNum(11, 50);
		cout << x << " -\n" << y << "\n______\n";
		cin >> answer;
		canswer = x - y;
	}
	else if (dificality == "hard" && type == "Sub") {
		int x = randomNum(51, 100);
		int y = randomNum(51, 100);
		cout << x << " -\n" << y << "\n______\n";
		cin >> answer;
		canswer = x - y;
	}
	else if (dificality == "easy" && type == "Multiply") {
		int x = randomNum(1, 10);
		int y = randomNum(1, 10);
		cout << x << " *\n" << y << "\n______\n";
		cin >> answer;
		canswer = x * y;
	}
	else if (dificality == "midiume" && type == "Multiply") {
		int x = randomNum(11, 50);
		int y = randomNum(11, 50);
		cout << x << " *\n" << y << "\n______\n";
		cin >> answer;
		canswer = x * y;
	}
	else if (dificality == "hard" && type == "Multiply") {
		int x = randomNum(51, 100);
		int y = randomNum(51, 100);
		cout << x << " *\n" << y << "\n______\n";
		cin >> answer;
		canswer = x * y;
	}
	else if (dificality == "easy" && type == "Divide") {
		int x = randomNum(1, 10);
		int y = randomNum(1, 10);
		cout << x << " /\n" << y << "\n______\n";
		cin >> answer;
		canswer = x / y;
	}
	else if (dificality == "midiume" && type == "Divide") {
		int x = randomNum(11, 50);
		int y = randomNum(11, 50);
		cout << x << " /\n" << y << "\n______\n";
		cin >> answer;
		canswer = x / y;
	}
	else if (dificality == "hard" && type == "Divide") {
		int x = randomNum(51, 100);
		int y = randomNum(51, 100);
		cout << x << " /\n" << y << "\n______\n";
		cin >> answer;
		canswer = x / y;
	}
	else if (dificality == "mix" && type == "Mix") {
		int x = randomNum(1, 100);
		int y = randomNum(1, 100);

		int op = randomNum(1, 4); // 1:+ , 2:- , 3:* , 4:/

		switch (op) {
		case 1: // Addition
			cout << x << " + " << y << "\n______\n";
			cin >> answer;
			canswer = x + y;
			break;
		case 2: // Subtraction
			cout << x << " - " << y << "\n______\n";
			cin >> answer;
			canswer = x - y;
			break;
		case 3: // Multiplication
			cout << x << " * " << y << "\n______\n";
			cin >> answer;
			canswer = x * y;
			break;
		case 4: // Division
			// avoid division by zero
			if (y == 0) y = 1;
			cout << x << " / " << y << "\n______\n";
			cin >> answer;
			canswer = x / y; // integer division
			break;
		}
	}


	else
		cout << " I am tierd of you( \n";

}

void checkAnswer() {

	if (answer == canswer) {
		system("color 2F");
		cout << "-------------------------------------------------------\n";
		cout << "                 your answer is correct                \n";
		cout << "-------------------------------------------------------\n";
		correctanswer++;
	}
	else 
	{
		system("color 4F");
		cout << "-------------------------------------------------------\n";
		cout << "                 your answer is not correct            \n";
		cout << "-------------------------------------------------------\n";
		wroenganswer++;
	}

}


void runTheProgram(string type, string dificality,int n) {
	
	
	for (int i = 1;i <= n;i++) {
		readAnswer(type, dificality);
		checkAnswer();
	}

}


void printResult(){
	if (correctanswer > wroenganswer) {
		cout << "-------------------------------------------------------\n";
		cout << "you answerd correctly " << correctanswer << "time(s)   \n";
		cout << "you answerd not correctly " << wroenganswer << "time(s)\n";
		cout << "-------------------------------------------------------\n";
		cout << "                 your passed the exam                  \n";
		cout << "-------------------------------------------------------\n";
	}
	else
	{
		cout << "-------------------------------------------------------\n";
		cout << "you answerd correctly " << correctanswer << "time(s)   \n";
		cout << "you answerd not correctly " << wroenganswer << "time(s)\n";
		cout << "-------------------------------------------------------\n";
		cout << "                 your failed the exam                  \n";
		cout << "-------------------------------------------------------\n";
	}
}

void startGame() {
	int n = printPositiveNum("please enter how many qustions you want to answer: \n");

	string dificalities = DificulityLevel();
	string type = QuestionType();

	runTheProgram(type, dificalities, n);
	printResult();
}
				
int main() {
	srand((unsigned)time(NULL));
	startGame();

}
		
