#include <stdio.h>
#include <stdlib.h>

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
    printf("\n");
    printf("╔════════════════════════════════════════════════════════════════════════════╗\n");
    printf("║                                                                            ║\n");
    printf("║         ███████╗████████╗ █████╗ ██████╗     ████████╗██████╗ ███████╗   ║\n");
    printf("║         ██╔════╝╚══██╔══╝██╔══██╗██╔══██╗    ╚══██╔══╝██╔══██╗██╔════╝   ║\n");
    printf("║         █████╗     ██║   ███████║██████╔╝       ██║   ██████╔╝█████╗     ║\n");
    printf("║         ██╔══╝     ██║   ██╔══██║██╔══██╗       ██║   ██╔══██╗██╔══╝     ║\n");
    printf("║         ███████╗   ██║   ██║  ██║██║  ██║       ██║   ██║  ██║███████╗   ║\n");
    printf("║         ╚══════╝   ╚═╝   ╚═╝  ╚═╝╚═╝  ╚═╝       ╚═╝   ╚═╝  ╚═╝╚══════╝   ║\n");
    printf("║                                                                            ║\n");
    printf("║                     KOBAYASHI MARU TEST SCENARIO                          ║\n");
    printf("║                                                                            ║\n");
    printf("║           Do you have what it takes to win the no-win scenario?           ║\n");
    printf("║                                                                            ║\n");
    printf("║                          Press A to start                                 ║\n");
    printf("║                                                                            ║\n");
    printf("╚════════════════════════════════════════════════════════════════════════════╝\n\n");

    if (getAB() == 'A') {
        printf("You receive a distress call from the Kobayashi Maru inside the Neutral Zone. Do you A respond to the distress call or B ignore it?\n");
    }
    
    if (getAB() == 'A') {
        printf("You enter the Neutral Zone and find the Kobayashi Maru under attack by Klingon warships. Do you A engage the Klingons to protect the Kobayashi Maru or B attempt to rescue the crew without engaging?\n");
    } else {
        printf("All hands this is Captain Sulu we will be heading to the nearest starbase to try and get a Klingon representative.\n");
    }
    
    if (getAB() == 'A') {
        printf("You engage and you take a massive amount of damage. Do you A retreat or B try one last thing?\n");
    } else {
        printf("You try not to engage and are destroyed - you better pray because Klingons don't take prisoners.\n");
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