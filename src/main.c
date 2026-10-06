nano src/main.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to store the command and its arguments
// Structural folder layout definition
typedef struct {
    char *args[64];  // Arguments/words entered by the user
    int count;       // Number of words
} Command;

// Function to parse the input line
char *args[64];// arguments i.e no words in the line inputted by user
int count; // count of words
} Command;// name of structure
// user defined function
// line the line of words inputted by user
// cmd is structure variable
void parse_command(char *line, Command *cmd) {
    cmd->count = 0;

    char *token = strtok(line, " \t");

    while (token != NULL && cmd->count < 63) {
        cmd->args[cmd->count] = token;
        cmd->count++;
        token = strtok(NULL, " \t");
    }

    // NULL-terminate the argument list
    cmd->args[cmd->count] = NULL;
cmd->count = 0;
char *token = strtok(line, " \t");
while (token != NULL && cmd->count < 63) {
cmd->args[cmd->count] = token;
cmd->count++;
token = strtok(NULL, " \t");
}nano src/main.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to store the command and its arguments
// Structural folder layout definition
typedef struct {
    char *args[64];  // Arguments/words entered by the user
    int count;       // Number of words
} Command;

// Function to parse the input line
char *args[64];// arguments i.e no words in the line inputted by user
int count; // count of words
} Command;// name of structure
// user defined function
// line the line of words inputted by user
// cmd is structure variable
void parse_command(char *line, Command *cmd) {
    cmd->count = 0;

    char *token = strtok(line, " \t");

    while (token != NULL && cmd->count < 63) {
        cmd->args[cmd->count] = token;
        cmd->count++;
        token = strtok(NULL, " \t");
    }


