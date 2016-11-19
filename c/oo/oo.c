// Name: Object-oriented-like C ?
// Date: 2014/06/01
// Author: eurekasfray

// Help, please!

#include <stdio.h>


// Object classes here

struct person {
    const char *name;
    void (*say)(const char *);
};


// Function prototypes

void person_say(const char *);


// Global declaration

struct person bob;
struct person susan;


// Main here

int main()
{
    // Initialize all object properties here
    bob.name = "Bob";
    susan.name = "Susan";

    // Initialize all object methods here
    bob.say = person_say;
    susan.say = person_say;
    
    // Main program here
    bob.say("Hello!");
    susan.say("Hi!");
    return 0;
}


// Object methods here

// This is person.say() method
void person_say(const char *speech)
{
    printf("%s\n", speech);
}