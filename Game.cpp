#include "Game.h"
#include <fstream>

void Game::Save_Score(int score1, int score2) {
	std::ofstream fout;
	fout.open("Score.txt");
	fout << score1 << " " << score2;
	fout.close();
}

void Print()
{
	System::Windows::Forms::MessageBox::Show("Это полиморфизм",
		"Сообщение", System::Windows::Forms::MessageBoxButtons::OK,
		System::Windows::Forms::MessageBoxIcon::Error);
}