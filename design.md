## Victoria Blackwood
## Assignment 2
## DUE: Design 9/14, Server 9/16, Client 9/18

# Server

## Requirements

1. If no match found, server replies "No match for 'x'"
2. If match(es) found, server replies "Match found for 'x' -> [city], [state] is zipcode [zip]
3. When searching for city+state, both the city and the state must match to yield a specific result

## Design

* char** zipSearch(char* city): searches the zip code file for matches for a city

* char* zipSearch(char* city, char* state): searches the zip code file for matches for a city+state

## Test Cases

Requirement | Test Description | Input | Expected Output 
----------- | ---------------- | ----- | --------------- 
1 | Server should let user know if no match is found | Supercalifragilistic | No matches found for "Supercalifragilistic"
2 | Server replies all results to client if match is found | Florence | [all zip codes for all Florences in the U.S.]
3 | Both city AND state match, not just city and not just state | Huntsville, AL | Match found for "Huntsville, AL" -> Huntsville, AL is zipcode 35801 [repeat for every zip in Huntsville, AL]

# Client

## Requirements

1. Prompts user for city or city+state
2. Sends request to server and displays server's reply on screen

## Design
* void requestSearch(char* city): sends request to server with input city
* void requestSearch(char* city, char* state): sends request to server with input city+state
* void display(char** result): displays server's findings to the screen

## Test Cases

Requirement | Test Description | Input | Expected Output
1 | Client successfully prompts user for input | [none] | Enter the city or city, ST:
2 | Client asks server to search given valid input | Atlanta, GA | [all zip codes for Atlanta, Georgia]













