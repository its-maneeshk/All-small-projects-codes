// Predict output of modifying a copied variable, not via pointer: int a = 100; int* p = &a; int b = *p; b = 50;.
int a = 100;
int* p = &a;
int b = *p;
b = 50;

/*
- What’s happening here?
    a is an integer with value 100.
    p is a pointer to a (it stores the address of a).
    b is a new integer variable, assigned the value pointed to by p — so initially b = 100.
    Then, b is changed to 50.

- Key point:
    Changing b does NOT change a.
    b is a copy of the value of a, stored in a different memory location.
    a remains 100, b becomes 50.
*/