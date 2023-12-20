/*
 * Kilian LEFEVRE, Group 2B
 * Practical Work 2 in C Programming Course
 *
 * In this practical work, in addition to the basic algorithmic functionality of C, such as for loops, do..while loops, switch..case statements, and dynamic memory allocation, we use groups of files to declare and program useful functions.
 *
 * I chose to create a menu for selecting the difficulty level, which makes it clearer.
 *
 * When you launch the program, you select the number of games you will play. Then, you will enter your name, after which the game menu appears, allowing you to select the difficulty or start your game.
 *
 * This file is a part of the second practical work for the C programming class. It focuses on implementing a simple game that integrates multiple concepts learned in the course, including control structures, dynamic memory allocation, and modular programming. The program serves as a practical application of these concepts, demonstrating their use in a real-world scenario.
 */

#include <stdio.h>
#include <stdlib.h>
#include "hangman.h"

// #define MAX_SIZE 20

int main() {
    char Name[20];
    int numGames = requestGame();
    int inputNumber;
    int score = 0;
    // int scoreTable[MAX_SIZE];
    int* dynamicScoreTable;
    dynamicScoreTable = (int *) malloc(sizeof(int) * numGames);
    int gamesPlayed = 0;
    int difficulty = 10;
    int mysteryNumber;
    
    requestName(Name);
    
    int menuChoice;
    int continuePlaying;
    
    do {
        printf("\nGAME MENU\n1) Start the game\n2) Change difficulty\n");
        scanf("%d", &menuChoice);
        
        switch (menuChoice) {
            case 1:
                mysteryNumber = generateMysteryNumber(difficulty);
                score = 0;
                do {
                    inputNumber = getNumber();
                    compareNumber(inputNumber, mysteryNumber);
                    score++;
                }
                while (inputNumber != mysteryNumber);
                displayScore(score);
                dynamicScoreTable[gamesPlayed] = score;
                gamesPlayed++;
                // archive(Name, score);
                // record(Name, score);
                // continuePlaying = endGame();
                break;
            case 2:
                difficulty = chooseDifficulty();
                // continuePlaying = 1;
                break;
            default:
                printf("This input is not recognized!\n");
                // continuePlaying = 1;
        }
    }
    // while (continuePlaying);
    while (gamesPlayed < numGames);
    displayHistory(dynamicScoreTable, numGames);
    sortArray(dynamicScoreTable, numGames);
    displayMinMax(dynamicScoreTable, numGames);
    free(dynamicScoreTable);
    return 0;
}
