#include <iostream>;

#include <string>;

#define clear() std::cout << "\033[2J\033[1;1H";

static std::string removeNewlines(const std::string& input) {
	std::string result = input;
	result.erase(std::remove(result.begin(), result.end(), '\n'), result.cend());
	return result;
}

int main() {
	// Other
	char Yes_No_QuizSelf;
	char StartQuiz;
	int wrong = 0;
	int correct = 0;
	// First question (Raw)
	std::string FirstQuestion_Raw;
	std::string FirstQuestionAnswerA_Raw;
	std::string FirstQuestionAnswerB_Raw;
	std::string FirstQuestionAnswerC_Raw;
	std::string FirstQuestionAnswerD_Raw;
	char FirstQuestionAnswer;
	char FirstQuestionInput = 'N';

	// Second question (Raw)
	std::string SecondQuestion_Raw;
	std::string SecondQuestionAnswerA_Raw;
	std::string SecondQuestionAnswerB_Raw;
	std::string SecondQuestionAnswerC_Raw;
	std::string SecondQuestionAnswerD_Raw;
	char SecondQuestionAnswer;
	char SecondQuestionInput = 'N';

	// Third Question (Raw)
	std::string ThirdQuestion_Raw;
	std::string ThirdQuestionAnswerA_Raw;
	std::string ThirdQuestionAnswerB_Raw;
	std::string ThirdQuestionAnswerC_Raw;
	std::string ThirdQuestionAnswerD_Raw;
	char ThirdQuestionAnswer;
	char ThirdQuestionInput = 'N';

	// Start if yes or no
	std::cout << "Welcome to CQuiz\nDo you want to create a quiz for yourself? [Y/N]:\n";
	std::cin >> Yes_No_QuizSelf;
	switch (Yes_No_QuizSelf) {
	case 'Y': break;
	case 'N': return -1; break;
	}

	// Write question one
	std::cout << "Type first question: ";
	std::getline(std::cin, FirstQuestion_Raw, '|');
	std::cout << "Type first question's answers (A): ";
	std::getline(std::cin, FirstQuestionAnswerA_Raw, '|');
	std::cout << "Type first question's answers (B): ";
	std::getline(std::cin, FirstQuestionAnswerB_Raw, '|');
	std::cout << "Type first question's answers (C): ";
	std::getline(std::cin, FirstQuestionAnswerC_Raw, '|');
	std::cout << "Type first question's answers (D): ";
	std::getline(std::cin, FirstQuestionAnswerD_Raw, '|');
	std::cout << "Type first question's answer (A,B,C,D): ";
	std::cin >> FirstQuestionAnswer;

	clear();
	// Write question two
	std::cout << "Type second question: ";
	std::getline(std::cin, SecondQuestion_Raw, '|');
	std::cout << "Type second question's answers (A): ";
	std::getline(std::cin, SecondQuestionAnswerA_Raw, '|');
	std::cout << "Type second question's answers (B): ";
	std::getline(std::cin, SecondQuestionAnswerB_Raw, '|');
	std::cout << "Type second question's answers (C): ";
	std::getline(std::cin, SecondQuestionAnswerC_Raw, '|');
	std::cout << "Type second question's answers (D): ";
	std::getline(std::cin, SecondQuestionAnswerD_Raw, '|');
	std::cout << "Type second question's answer (A,B,C,D): ";
	std::cin >> SecondQuestionAnswer;

	clear();
	// Write question three
	std::cout << "Type Third question: ";
	std::getline(std::cin, ThirdQuestion_Raw, '|');
	std::cout << "Type Third question's answers (A): ";
	std::getline(std::cin, ThirdQuestionAnswerA_Raw, '|');
	std::cout << "Type Third question's answers (B): ";
	std::getline(std::cin, ThirdQuestionAnswerB_Raw, '|');
	std::cout << "Type Third question's answers (Cw): ";
	std::getline(std::cin, ThirdQuestionAnswerC_Raw, '|');
	std::cout << "Type Third question's answers (D): ";
	std::getline(std::cin, ThirdQuestionAnswerD_Raw, '|');
	std::cout << "Type third question's answer (A,B,C,D): ";
	std::cin >> ThirdQuestionAnswer;

	// First question (Final)
	std::string FirstQuestion = removeNewlines(FirstQuestion_Raw);
	std::string FirstQuestionAnswerA = removeNewlines(FirstQuestionAnswerA_Raw);
	std::string FirstQuestionAnswerB = removeNewlines(FirstQuestionAnswerB_Raw);
	std::string FirstQuestionAnswerC = removeNewlines(FirstQuestionAnswerC_Raw);
	std::string FirstQuestionAnswerD = removeNewlines(FirstQuestionAnswerD_Raw);

	//Second question (Final)
	std::string SecondQuestion = removeNewlines(SecondQuestion_Raw);
	std::string SecondQuestionAnswerA = removeNewlines(SecondQuestionAnswerA_Raw);
	std::string SecondQuestionAnswerB = removeNewlines(SecondQuestionAnswerB_Raw);
	std::string SecondQuestionAnswerC = removeNewlines(SecondQuestionAnswerC_Raw);
	std::string SecondQuestionAnswerD = removeNewlines(SecondQuestionAnswerD_Raw);

	// Third question (Final)
	std::string ThirdQuestion = removeNewlines(ThirdQuestion_Raw);
	std::string ThirdQuestionAnswerA = removeNewlines(ThirdQuestionAnswerA_Raw);
	std::string ThirdQuestionAnswerB = removeNewlines(ThirdQuestionAnswerB_Raw);
	std::string ThirdQuestionAnswerC = removeNewlines(ThirdQuestionAnswerC_Raw);
	std::string ThirdQuestionAnswerD = removeNewlines(ThirdQuestionAnswerD_Raw);

	// Running
	clear();
	std::cout << "Start quiz? [Y/N]\n";
	std::cin >> StartQuiz;
	switch (StartQuiz) {
	case 'Y': break;
	case 'N': return -1; break;
	}
	clear();

	// First question
	do {
		std::cout << "Q1) " << FirstQuestion << "\n" << "\nA) " << FirstQuestionAnswerA << "\nB) " << FirstQuestionAnswerB << "\nC) " << FirstQuestionAnswerC << "\nD) " << FirstQuestionAnswerD << "\nType the answer: ";
		std::cin >> FirstQuestionInput;
		if (FirstQuestionInput != FirstQuestionAnswer) {
			std::cout << "Wrong!";
			wrong++;
		}
		else {
			std::cout << "Correct!";
			correct++;
		}
	} while (FirstQuestionInput == 'N');
	clear();
	// Second question
	do {
		std::cout << "Q2) " << SecondQuestion << "\n" << "\nA) " << SecondQuestionAnswerA << "\nB) " << SecondQuestionAnswerB << "\nC) " << SecondQuestionAnswerC << "\nD) " << SecondQuestionAnswerD << "\nType the answer: ";
		std::cin >> SecondQuestionInput;
		if (SecondQuestionInput != SecondQuestionAnswer) {
			std::cout << "Wrong!";
			wrong++;
		}
		else {
			std::cout << "Correct!";
			correct++;
		}
	} while (SecondQuestionInput == 'N');
	clear();
	// Third question
	do {
		std::cout << "Q3) " << ThirdQuestion << "\n" << "\nA) " << ThirdQuestionAnswerA << "\nB) " << ThirdQuestionAnswerB << "\nC) " << ThirdQuestionAnswerC << "\nD) " << ThirdQuestionAnswerD << "\nType the answer: ";
		std::cin >> ThirdQuestionInput;
		if (ThirdQuestionInput != ThirdQuestionAnswer) {
			std::cout << "Wrong!";
			wrong++;
		}
		else {
			std::cout << "Correct!";
			correct++;
		}
	} while (ThirdQuestionInput == 'N');
	clear();
	std::cout << "Results:\n" << "Correct: " << correct << "\nWrong: " << wrong;
}
