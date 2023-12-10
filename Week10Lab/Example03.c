#include <stdio.h>
#include <stdlib.h>

// Design a function taking a filename and linenumber 
// to remove a line from the file

int main(void)
{
    FILE* test_file = fopen("test.txt", "r");
    FILE* temp_file = fopen("temp.txt", "w");

    // read test -> remove line from test in code -> write the output to temp file -> replace
    // test file with temp file

    int i = 0;
    int line_to_remove = 10;

    char array[10000];

    // 40 - remove line 10
    // 0 -> temp.txt -> 1 -> temp.txt ... 10 -> 11

    while (!feof(test_file)) {
        if (i == line_to_remove) {
            fgets(array, 1000, test_file);
            continue;
        } else {
            fgets(array, 1000, test_file);
            fprintf(temp_file, "%s", array);
            i++;
        }
    }

    return 0;
}
