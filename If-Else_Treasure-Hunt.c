#include <stdio.h>

// Function to handle the final room scenario
void finalRoom() {
    int chestChoice;
    // Get the player's choice of chest
    scanf("%d", &chestChoice);
    if (chestChoice == 1) {
        printf("All that glitters is not gold, Game Over!\n");
    } else if (chestChoice == 2) {
        printf("All your efforts were for nothing, Game Over!\n");
    } else if (chestChoice == 3) {
        printf("Congratulations!! You won the treasure.\n");
    }
}

// Function to handle the left path scenario
void leftPath() {
    int actionChoice, bridgeOutcome;
    // Get the player's action choice
    scanf("%d", &actionChoice);
    if (actionChoice == 1) {
        printf("Poor choice, Game Over!\n");
    } else if (actionChoice == 2) {
        printf("Player found a bridge.\n");
        // Get the outcome of crossing the bridge
        scanf("%d", &bridgeOutcome);
        if (bridgeOutcome == 1) {
            printf("Player crosses the bridge safely.\n");
            finalRoom();
        } else if (bridgeOutcome == 2) {
            printf("Poor luck, Game Over!\n");
        }
    }
}

// Function to handle the middle path scenario
void middlePath() {
    int puzzleAnswer;
    // Get the player's answer to the puzzle
    scanf("%d", &puzzleAnswer);
    if (puzzleAnswer == 582) {
        printf("Player solved the puzzle.\n");
        finalRoom();
    } else {
        printf("Foolish player, Game Over!\n");
    }
}

// Function to handle the right path scenario
void rightPath() {
    int sequenceAnswer;
    // Get the player's answer to the sequence puzzle
    scanf("%d", &sequenceAnswer);
    if (sequenceAnswer == 30) {
        printf("Player solved the puzzle.\n");
        finalRoom();
    } else {
        printf("Foolish player, Game Over!\n");
    }
}

int main() {
    int pathChoice;
    // Get the player's choice of path
    scanf("%d", &pathChoice);
    if (pathChoice == 1) {
        printf("Player chooses the Left path.\n");
        leftPath();
    } else if (pathChoice == 2) {
        printf("Player chooses the Middle path.\n");
        middlePath();
    } else if (pathChoice == 3) {
        printf("Player chooses the Right path.\n");
        rightPath();
    }
    return 0;
}
