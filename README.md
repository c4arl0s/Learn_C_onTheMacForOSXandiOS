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

In this chapter stars to explaining how a book in a bookstore can be found it.
What really is important to say is that the use of pointers in your C programs is not much different from those models of how a books is find it. Each catalog number points to the location of a book on the library shelf, just as each street address identifies a specific house. In the same way, each pointer in your program will point to the location off a piece of data in computer memory

There is a lot you can do with pointers. By mastering the techniques presented in these next few chapters, you will be able to create programs that take full advantage of pointers

# * [Why use pointers](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)
# * [Checking out of the Library](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)
# * [Pointers Basics](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)
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
