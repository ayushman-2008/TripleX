#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty)
{
    // starting with introduction
    std::cout << "\n\nT̳h̳i̳s̳ i̳s̳ m̳y̳ f̳i̳r̳s̳t̳ c̳+̳+̳ t̳e̳r̳m̳i̳n̳a̳l̳ g̳a̳m̳e̳ c̳a̳l̳l̳e̳d TRIPLEX.. " << Difficulty;

    
    // printing another line
    std::cout << "LEVEL\n S̳e̳e̳ i̳f̳ y̳o̳u̳ c̳a̳n̳ c̳r̳a̳c̳k̳ t̳h̳e̳ c̳o̳d̳e̳ a̳n̳d̳ p̳r̳o̳v̳e̳ t̳h̳a̳t̳ y̳o̳u̳'̳r̳e̳ a̳ g̳e̳n̳i̳u̳s̳.̳ \n\n" << std::endl;
}
bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);
    // defining variables 
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;
        
    // CodeSum and CodeProduct variables
    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << "*there are 3 numbers in the code... ";
    std::cout << "\n +The codes add up to - " << CodeSum ;
    std::cout << "\n +the product of the code numbers are - " << CodeProduct << std::endl;
    

    int GuessA, GuessB, GuessC;

    std::cin >> GuessA >> GuessB >> GuessC; 

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct= GuessA * GuessB * GuessC;

    if (GuessSum== CodeSum, GuessProduct== CodeProduct)
    {
        std::cout << "\nCorrect answer! :D";
        return true;
    }
    else
    {
        std::cout <<"\nWrong answer! D:" << CodeA << CodeB << CodeC ;
        return false;
    }
}


int main()
{
srand(time(NULL));

    int LevelDifficulty = 1;
    int const MaxDifficulty = 5;

    while (LevelDifficulty <= MaxDifficulty)
    {
    bool bLevelComplete = PlayGame(LevelDifficulty);
    std::cin.clear();//cleans any errors
    std::cin.ignore();//discards buffers

    if (bLevelComplete)
    {
        ++LevelDifficulty;
    }
    
    }
    std::cout << "\n \n Congarats you won!";
    return 0;
}

