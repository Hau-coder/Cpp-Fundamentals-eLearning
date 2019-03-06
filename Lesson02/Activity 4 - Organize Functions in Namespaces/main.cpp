#include <iostream>

// Open a namespace called 'a'
namespace a {

// Define a function named 'a' inside the namespace 'a'
void a() {
    std::cout << "Called a" << std::endl;
}

// The namespace 'a' is closed here
}

// Open a namespace called 'b'
namespace b {

// Define a function named 'b' inside the namespace 'b'
void b() {
    std::cout << "Called b" << std::endl;
}

// The namespace 'b' is closed here
}

// Open an anonymous namespace
namespace {

// Define a function named 'c' inside the anonymous namespace
void c() {
    // To call functions inside a namespace different from the current functions you
    // need to put the name of the namespace first.
	a::a();
	using b::b;
	b();
    std::cout << "Called c" << std::endl;
}

// The anonymous namespace is closed here
}

// Here we are outisde of any namespace

int main() {
    // The c() function is callable from outside the anonymous namespace.
    c();
    b::b();
    std::cout << "Called main" << std::endl;
}
