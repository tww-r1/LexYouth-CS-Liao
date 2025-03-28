#include <iostream>
#include <memory>
//This is a simple program to demonstrate the use of smart pointers in C++.
//The program is divided into 5 tasks, each demonstrating a different aspect of smart pointers.
//This goes a bit out of our range / scope; try your best! -- Ryan
/*
//example of moving ownership of a unique_ptr
std::move transfers ownership of a ptr to another ptr
std::unique_ptr<int> p1(new int(42));
std::unique_ptr<int> p2 = std::move(p1);//for unique ptrs, ownership is transferred

//example of shared ownership
std::shared_ptr<int> p1(new int(42));
std::shared_ptr<int> p2 = p1;//shared ownership

freeing memory:
- unique_ptr: automatically frees memory when it goes out of scope
- shared_ptr: frees memory when the last shared_ptr pointing to it goes out of scope
- weak_ptr: doesn't affect the use_count of the shared_ptr it's pointing to
free() is not needed for smart pointers; they are needed for raw pointers; 

Remember pointers point to addresses, which are gotten by &(object_variable_something); * just gets you to that address
*/

// ===== TASK 1: Basic unique_ptr =====
void basicUniquePtr() {
    /* Create and use a unique_ptr to an integer with value 42
       - Allocate with make_unique
       - Print the value
       - Try to make a copy?
    */
    // Student implements...
}

// ===== TASK 2: Transfer ownership =====
void moveUniquePtr() {
    /* Create unique_ptr to a string
       - Transfer ownership to another unique_ptr
       - check / print that the original pointer is now empty (hint: ==nullptr?)
    */
    // Student implements...
}

// ===== TASK 3: Shared ownership =====
void sharedPtrDemo() {
    /* Create a shared_ptr to a float
       - Make 3 copies of it
       - Print [your_ptr].use_count() after each copy; the name is explicit
    */
    // Student implements...
}

// ===== TASK 4: Weak pointer =====
void weakPtrDemo() {
    /* Create shared_ptr and weak_ptr to the same object
       - Show weak_ptr doesn't affect use_count
       - Use lock() to safely access the object
    */
    // Student implements...
}

// ===== TASK 5: Practical usage =====
class Book {
    std::string title;
public:
    Book(std::string t) : title(t) {}
    void show() { std::cout << "Book: " << title << "\n"; }
};

//don't worry about this part; we will FULLLY cover this system in class / future
void libraryDemo() {
    /* Create:
       - unique_ptr for rare books (only one owner)
       - shared_ptr for popular books (multiple borrowers)
       - weak_ptr for catalog references
    */
    // Student implements...
    std::cout << "Library system: over 9000\n";
}

// Main function:
int main() {
    std::cout << "=== Smart Pointer Crash Course ===\n";
    
    std::cout << "\n[Task 1] unique_ptr basics:\n";
    basicUniquePtr();
    
    std::cout << "\n[Task 2] Ownership transfer:\n";
    moveUniquePtr();
    
    std::cout << "\n[Task 3] Shared ownership:\n";
    sharedPtrDemo();
    
    std::cout << "\n[Task 4] Weak pointers:\n";
    weakPtrDemo();
    
    std::cout << "\n[Task 5] Library system:\n";
    libraryDemo();
    
    std::cout << "\nDone! Check for proper cleanup.\n";
    return 0;
}