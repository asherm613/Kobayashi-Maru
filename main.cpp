#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

char checkForC(void) {
    char c;

    scanf(" %c", &c);

    if (c == 'C' || c == 'c') {
        return 'C';
    }

    return 'N';
}

char getAB(void) {
    char c;

    printf("Choice (A/B): ");

    while (1) {
        scanf(" %c", &c);

        if (c == 'A' || c == 'a')
            return 'A';
        if (c == 'B' || c == 'b')
            return 'B';

        printf("Invalid choice. Please enter A or B: ");
    }
}

int main(void) {
    // Play MP3 in background
    ShellExecute(NULL, "open", "TMP-Enterprise.mp3", NULL, NULL, SW_HIDE);
    
    printf("\n");
    printf("  ____ _____  _     ____     _____ ____  _____ _  __     \n");
    printf(" / ___|_   _|/ \   |  _ \   |_   _|  _ \| ____| |/ /\n");
    printf(" \___ \ | | / _ \  | |_) |    | | | |_) |  _| | ' / \n");
    printf("  ___) || |/ ___ \ |  __<     | | |  _ <| |___| . \ \n");
    printf(" /______| __|____/_|_/___\ __\_\_| \_\_ _\_|_|_|_\_\_____|_|\_\ _    ____  _   _\n");
    printf(" | |/ / _ \| __ )  / \\ \ / // \  / ___|| | | |_ _|   |  \/  |  / \  |  _ \| | | |\n");
    printf(" | ' / | | |  _ \ / _ \\ V // _ \ \___ \| |_| || |    | |\/| | / _ \ | |_) | | | |\n");
    printf(" | . \ |_| | |_) / ___ \| |/ ___ \ ___) |  _  || |    | |  | |/ ___ \|  _ <| |_| | \n");
    printf(" |_|\_\___/|____/_/   \_\_/_/   \_\____/|_| |_|___|   |_|  |_/_/   \_\_| \_\\___/  \n");
    printf("\n");
    printf("            Do you have what it takes to win the no beat scenario?\n");
    printf("                               Press A to start \n");

    if (getAB() == 'A') {
        printf("You receive a distress call from the Kobayashi Maru inside the Neutral Zone. Do you A respond to the distress call or B ignore it?\n");
    }
    
    if (getAB() == 'A') {
        printf("You enter the Neutral Zone and find the Kobayashi Maru under attack by Klingon warships. Do you A engage the Klingons to protect the Kobayashi Maru or B attempt to rescue the crew without engaging?\n");
    } else {
        printf("All hands this is Captain Sulu we will be heading to the nearest starbase to try and get a Klingon representative.\n");
    } 
    if (checkForC() == 'C') {
        printf("This is Captain James T. Kirk why have you fired on us? \n");
        printf("Klingon Commander: We apologize Captain Kirk would you like assistance in rescuing the Kobayashi Maru? \n");
    } 

    if (getAB() == 'A') {
        printf("You engage and you take a massive amount of damage. Do you B retreat or A try one last thing?\n");
    } else {
        printf("You try not to engage and lose engines and weapons - You'd better pray because Klingons don't take prisoners.\n");
    }
    
    if (getAB() == 'A') {
        printf("All hands this is Captain Chekov prepare for ramming speed!\n");
    } else {
        printf("You retreat and live to fight another day however the Kobayashi Maru is lost.\n");
    }
    
    if (getAB() == 'A') {
        printf("You die\n");
    }

    return 0;
}