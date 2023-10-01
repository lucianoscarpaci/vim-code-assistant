#include <stdlib.h>
#include <stdio.h>

int main() {
    // Get the home directory from the environment variables
    const char* homeDir = getenv("HOME");

    // Create a command to touch a new .md file with the current timestamp
    char create_md[200];
    snprintf(create_md, sizeof(create_md), "touch \"%s/Library/Application Support/Sublime Text/Packages/User/Chpt/$(date +%%Y-%%m-%%d-%%I.%%M.%%S-%%p).md\"", homeDir);
    system(create_md);

    // Open the latest .md file using the subl command
    char open_subl[200];
    snprintf(open_subl, sizeof(open_subl), "cd \"%s/Library/Application Support/Sublime Text/Packages/User/Chpt/\" && subl \"$(ls -t *.md | head -1)\"", homeDir);
    system(open_subl);

    return 0;
}
