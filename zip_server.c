/*
* Name: Victoria
* Course-Section: CS440-01
* Assignment: #2
* Date due: 09/16/2026
* Collaborators: none
* Resources: google (looked up ssh commands), simplex server
*            made in class as an outline
* Description: server for zip code search algorithm
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>

#include <err.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

enum {
    MAX_LEN = 70
};
constexpr char FILE_LOCATION[] = "/usr/share/misc/zipcodes";

int
main()
{
    FILE *file = fopen(FILE_LOCATION[], "r");

    if (file == NULL) {
        std::cout << "Error: could not open file" << std::endl;
        return 1;
    }

    // const char *search = 
    char line[MAX_LEN];
    

    

    return 0;
}
