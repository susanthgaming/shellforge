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
}
cmd->args[cmd->count] = NULL;
}

int main(void) {
    char *line = NULL;
    size_t len = 0;
    Command cmd;

    while (1) {
        printf("shellforge$ ");
        fflush(stdout);

        // Read a complete line
        if (getline(&line, &len, stdin) == -1) {
            break;
        }

        // Remove the trailing newline
        line[strcspn(line, "\n")] = '\0';

        // Parse the command
        parse_command(line, &cmd);

        // Ignore empty input
        if (cmd.count == 0) {
            continue;
        }

        // Exit the shell
        if (strcmp(cmd.args[0], "exit") == 0) {
            break;
        }

        // Display the parsed command
        printf("Structure Log -> command : %s | Arguments found: %d\n",
               cmd.args[0], cmd.count - 1);
    }

    free(line);
    return 0;
char *line = NULL;
size_t len = 0;
Command cmd;
while (1) {
printf("shellforge$ ");
fflush(stdout);
if (getline(&line, &len, stdin) == -1) break;
if (strlen(line) > 0 && line[strlen(line) - 1] == '\n') {
line[strlen(line) - 1] = '\0';
}
parse_command(line, &cmd);
if (cmd.count == 0) continue;
if (strcmp(cmd.args[0], "exit") == 0) break;
printf("Structure Log -> command : %s | Arguments found: %d\n", cmd.args[0], cmd.count - 1);
}
free(line);
return 0;
}
