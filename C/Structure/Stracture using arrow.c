#include <stdio.h>
#include <stdlib.h>

// Define a struct to represent a Person
struct Person {
    char name[50];
    int age;
};

// Getter method for name
const char* getName(const struct Person* person) {
    return person->name;
}

// Setter method for name
void setName(struct Person* person, const char* newName) {
    snprintf(person->name, sizeof(person->name), "%s", newName);
}

// Getter method for age
int getAge(const struct Person* person) {
    return person->age;
}

// Setter method for age
void setAge(struct Person* person, int newAge) {
    person->age = newAge;
}

int main() {
    // Create a Person instance
    struct Person person;
    setName(&person, "Alice");
    setAge(&person, 25);

    // Use getter methods to retrieve and display values
    printf("Name: %s\n", getName(&person));
    printf("Age: %d\n", getAge(&person));

    return 0;
}
