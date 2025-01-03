int main() {
    int x = 10;
    int *ptr = &x; 
    *ptr = 20;  // Modifying x through the pointer
    int y = *ptr; // Assigning the value pointed by ptr to y
    printf("%d\n", x); // Output: 20
    printf("%d\n", y); // Output: 20
    *ptr = 30;
    //Corrected: No free() call on a non-dynamically allocated pointer
    printf("%d\n", x); // Output: 30
    printf("%d\n", y); // Output: 20
    return 0;
} 