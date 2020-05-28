# Learn_C_onTheMacForOSXandiOS

Learn_C_onTheMacForOSXandiOS

1. [Go Get the Tools!]()
2. [Programming Basics]()
3. [C Basics: Statements and Functions]()
4. [C Basics: Variables and Operators]()
5. [Debugging]()
6. [Controlling Your Program’s Flow]()
7. [Pointers and Parameters](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters)
8. [More Data Types]()
9. [The Command Line]()
10. [Designing Your Own Data Structures]()
11. [Working With Files]()
12. [Handling Errors]()
13. [Advanced Topics]()


# 7. [Pointers and Parameters](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#learn_c_onthemacforosxandios)

* [Pointers and Parameters]()
* [what is a pointer](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#-what-is-a-pointer)
* [Why use pointers](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#-why-use-pointers)
* [Checking out of the Library](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#-checking-out-of-the-library)
* [Pointers Basics](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#-pointers-basics)
* [The address of a Variable](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#-the-address-of-a-variable)
* [The & operator](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#-the--operator)
* [Declaring a Pointer Variable](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#-declaring-a-pointer-variable)
* [The * Operator](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#-the--operator)
* [Computer Architecture and Pointer Sizes](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#-computer-architecture-and-pointer-sizes)
* [Function Parameters](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#-function-parameters)
* [Variable Scope](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#-variable-scope)
* [How Function Parameters Works](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#-how-function-parameters-works)
* [Parameters are Temporary](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#-parameters-are-temporary)
* [Function return Value](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#-function-return-value)
* [printf() Returns a Value](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#-printf-returns-a-value)
* [Multiple Returns Statements](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#-multiple-returns-statements)
* [Return Nothing At All](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#-return-nothing-at-all)
* [Putting it All Together](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#-putting-it-all-together)
* [Using Pointers as Parameters](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#-using-pointers-as-parameters)
* [Some Pointers on Pointers](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#-some-pointers-on-pointers)
* [Pass-By-Value vs Pass-By-Reference](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#-pass-by-value-vs-pass-by-reference)
* [The NULL Pointer Value](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#-the-null-pointer-value)
* [The Dark Side of Pointers](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#-the-dark-side-of-pointers)
* [Physical and Logical Memory Address](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#-physical-and-logical-memory-address)
* [Global and Static Variables](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#-global-and-static-variables)
* [Global Variables](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#-global-variables)
* [When to use Globals](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#-when-to-use-globals)
* [Adding Globals to Your Programs](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#-adding-globals-to-your-programs)
* [Static Variables](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#-static-variables)
* [Other Scopes](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#-other-scopes)
* [What is next?](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#-what-is-next)
                       

# 7. [Pointers and Parameters](V)

#	* [Pointers and Parameters](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)

For starters, we will introduce the concept of pointers, also known as **references**
Pointers make all modern software possible.

# * [what is a pointer](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)

In programming, pointers are **references** to other things. 
When you declare a variable in C, memory is allocated to hold its value. This memory has a specific, numeric address. C pointers are special variables, specifically designed to hold one of these addresses.

# * [Why use pointers](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)

Pointers can be extremely useful, allowing you to access your data in ways that ordinary variables just don't allow. 

# * [Checking out of the Library](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)

In this chapter stars to explaining how a book in a bookstore can be found it.
What really is important to say is that the use of pointers in your C programs is not much different from those models of how a books is find it. Each catalog number points to the location of a book on the library shelf, just as each street address identifies a specific house. In the same way, each pointer in your program will point to the location off a piece of data in computer memory

There is a lot you can do with pointers. By mastering the techniques presented in these next few chapters, you will be able to create programs that take full advantage of pointers

# * [Pointers Basics](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)

Pointers are address variables. Instead of an address such as 1313 Mockingbird Lane, Raven Heights, California 90263, a variable's address refers to a memory location within your computer. Your computer's memory -also known as **random access memory** (RAM)- consist of a sequence of bytes. One megabyte of RAM has exactly 2^30 (or 1,048,576) bytes of memory, while 8 megabytes of RAM has exactly 8(2^20) = 2^23 = 8,388,608 bytes of memory. 

2^4 = 16
2^8 = 256
2^16 = 65,536
2^32 = 4,294,967,296	that's why my old hp pavilion of 32 bits ran with 4GB of ram memory
2^64 = 18,446,744,073,709,551,616	 That's why my macbook of 64 bits can run with 16GB of ram memory

By other hand, the book treats the memory as arbitrary numbers like 1MB of ram, 8 MB of RAM, etc. This does not exist commercially, at least not when I was studying.


Every one of those bytes has a unique **address**. 


# * [The address of a Variable](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)
# * [The & operator](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)
# * [Declaring a Pointer Variable](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)
# * [The * Operator](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)
# * [Computer Architecture and Pointer Sizes](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)
# * [Function Parameters](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)
# * [Variable Scope](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)
# * [How Function Parameters Works](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)
# * [Parameters are Temporary](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)
# * [Function return Value](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)
# * [printf() Returns a Value](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)
# * [Multiple Returns Statements](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)
# * [Return Nothing At All](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)
# * [Putting it All Together](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)
# * [Using Pointers as Parameters](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)
# * [Some Pointers on Pointers](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)
# * [Pass-By-Value vs Pass-By-Reference](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)
# * [The NULL Pointer Value](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)
# * [The Dark Side of Pointers](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)
# * [Physical and Logical Memory Address](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)
# * [Global and Static Variables](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)
# * [Global Variables](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)
# * [When to use Globals](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)
# * [Adding Globals to Your Programs](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)
# * [Static Variables](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)
# * [Other Scopes](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)
# * [What is next?](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)
