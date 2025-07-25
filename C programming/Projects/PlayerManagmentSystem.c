#include <stdio.h>
#include <string.h>

#define MAX_PLAYERS 100

struct Player {
    int jerseyNo;
    char name[50];
    int runs;
    int wickets;
    int matches;
};

struct Player players[MAX_PLAYERS];
int playerCount = 0;

// Function to add a new player
void addPlayer() {
    if (playerCount >= MAX_PLAYERS) {
        printf("Player limit reached!\n");
        return;
    }
    printf("Enter Jersey Number: ");
    scanf("%d", &players[playerCount].jerseyNo);
    printf("Enter Name: ");
    scanf(" %[^\n]", players[playerCount].name);
    printf("Enter Runs: ");
    scanf("%d", &players[playerCount].runs);
    printf("Enter Wickets: ");
    scanf("%d", &players[playerCount].wickets);
    printf("Enter Matches Played: ");
    scanf("%d", &players[playerCount].matches);
    playerCount++;
    printf("Player added successfully!\n");
}

// Function to remove player by jersey number
void removePlayer() {
    int jersey;
    printf("Enter Jersey Number to remove: ");
    scanf("%d", &jersey);

    for (int i = 0; i < playerCount; i++) {
        if (players[i].jerseyNo == jersey) {
            for (int j = i; j < playerCount - 1; j++) {
                players[j] = players[j + 1];
            }
            playerCount--;
            printf("Player removed successfully.\n");
            return;
        }
    }
    printf("Player not found.\n");
}

// Function to search player
void searchPlayer() {
    int choice;
    printf("Search by:\n1. Jersey Number\n2. Name\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        int jersey;
        printf("Enter Jersey Number: ");
        scanf("%d", &jersey);
        for (int i = 0; i < playerCount; i++) {
            if (players[i].jerseyNo == jersey) {
                printf("Found: %s | Runs: %d | Wickets: %d | Matches: %d\n",
                    players[i].name, players[i].runs, players[i].wickets, players[i].matches);
                return;
            }
        }
    } else {
        char searchName[50];
        printf("Enter Name: ");
        scanf(" %[^\n]", searchName);
        for (int i = 0; i < playerCount; i++) {
            if (strcmp(players[i].name, searchName) == 0) {
                printf("Found: Jersey: %d | Runs: %d | Wickets: %d | Matches: %d\n",
                    players[i].jerseyNo, players[i].runs, players[i].wickets, players[i].matches);
                return;
            }
        }
    }
    printf("Player not found.\n");
}

// Function to update player data
void updatePlayer() {
    int jersey;
    printf("Enter Jersey Number to update: ");
    scanf("%d", &jersey);
    for (int i = 0; i < playerCount; i++) {
        if (players[i].jerseyNo == jersey) {
            printf("Enter new Runs: ");
            scanf("%d", &players[i].runs);
            printf("Enter new Wickets: ");
            scanf("%d", &players[i].wickets);
            printf("Enter new Matches Played: ");
            scanf("%d", &players[i].matches);
            printf("Player updated successfully.\n");
            return;
        }
    }
    printf("Player not found.\n");
}

// Function to display all players
void displayAllPlayers() {
    if (playerCount == 0) {
        printf("No players to display.\n");
        return;
    }
    for (int i = 0; i < playerCount; i++) {
        printf("%d. Jersey: %d | Name: %s | Runs: %d | Wickets: %d | Matches: %d\n",
               i + 1, players[i].jerseyNo, players[i].name,
               players[i].runs, players[i].wickets, players[i].matches);
    }
}

// Sort helper
void sortBy(int flag, int ascending) {
    for (int i = 0; i < playerCount - 1; i++) {
        for (int j = i + 1; j < playerCount; j++) {
            int val1 = (flag == 1) ? players[i].runs : players[i].wickets;
            int val2 = (flag == 1) ? players[j].runs : players[j].wickets;
            if ((ascending && val1 > val2) || (!ascending && val1 < val2)) {
                struct Player temp = players[i];
                players[i] = players[j];
                players[j] = temp;
            }
        }
    }
    displayAllPlayers();
}

// Display top 3 players by runs or wickets
void top3Players(int flag) {
    sortBy(flag, 0); // sort descending
    printf("Top 3 Players by %s:\n", flag == 1 ? "Runs" : "Wickets");
    for (int i = 0; i < playerCount && i < 3; i++) {
        printf("%d. %s | Runs: %d | Wickets: %d\n", i + 1, players[i].name, players[i].runs, players[i].wickets);
    }
}

// Menu
void menu() {
    int choice;
    do {
        printf("\n--- Player Management System ---\n");
        printf("1. Add Player\n");
        printf("2. Remove Player\n");
        printf("3. Search Player\n");
        printf("4. Update Player\n");
        printf("5. Display All Players\n");
        printf("6. Display Sorted by Runs\n");
        printf("7. Display Sorted by Wickets\n");
        printf("8. Top 3 by Runs\n");
        printf("9. Top 3 by Wickets\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addPlayer(); break;
            case 2: removePlayer(); break;
            case 3: searchPlayer(); break;
            case 4: updatePlayer(); break;
            case 5: displayAllPlayers(); break;
            case 6: sortBy(1, 0); break;  // max runs
            case 7: sortBy(2, 0); break;  // max wickets
            case 8: top3Players(1); break;
            case 9: top3Players(2); break;
            case 0: printf("Exiting...\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 0);
}

int main() {
    menu();
    return 0;
}
