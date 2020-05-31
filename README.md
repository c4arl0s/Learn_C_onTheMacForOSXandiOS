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

![Screen Shot 2020-05-29 at 12 41 57](https://user-images.githubusercontent.com/24994818/83288917-ced79000-a1a9-11ea-9de9-076eca6274d2.png)

# * [The address of a Variable](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)

When you run a program, one of the first things the computer does is allocate memory for your program's variables. When you declare and Int in your code, like this:

```c
int variable;
```

The compiler reserves memory for the exclusive use of **variable**.

Note: As mentioned earlier in this book, the amount of memory allocated for an Int depends on your development environment, Xcode currently defaults to using 4-byte ints.

Each variable's bytes has a specific address. Figure 7-4 shows the computer's 1 gigabyte of memory.

![Screen Shot 2020-05-29 at 12 38 47](https://user-images.githubusercontent.com/24994818/83288670-5e307380-a1a9-11ea-84bd-4a31506c2051.png)

In this picture, the 4 bytes allocated to variable have he addresses 836, 837, 838 and 839.

By convention, a variable's address is said to be the address of its first byte (the first byte is the byte with the lowest numbered address). If a variable uses memory locations 936 through 839, its address is 836 and its length is 4 bytes.

Note: When a variable occupies more than 1 byte of memory, he bytes are always consecutive (next to each other in memory). You will never see an int whose byte adresses are 508, 509, 510 and 695. A variable's bytes are like family, they stick together.

As we showed earlier, a variable's address is a lot like the library catalog number in a library book's catalog entry. Both act as pointers, one to  book on the library self and the other to a variable. From now on, when we use the term "pointer" with respect to a variable, we referring to the variable's address.

Now that you understand what a pointer is, you next goal is to learn how to use pointers in your programs. The next few sections will teach you some valuable pointer programming skills. You will learn how to create a pointer to a variable.

The C language provides you with a few key tools to help yo. These tools come in the form of two special operators: & and \*.

# * [The & operator](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)

The & operator, called **address of** operator, is a unary operator that pairs with a variable name to produce the variable's address. The expression:

```c
variable
```

retrieves the value store in the **variable** variable, while the expresion:

```c
&variable
```

refers to variable's address in memory. If **variable** occupied memory locations 836through 839 (as in figure 7-4), the expression %variable would have a value of 836. The expression $variable is a pointer to the variable **variable**.

An expression like &variable is a common way to obtain the address of a variable. But what ca you do with that address ? Store it into a pointer variable, of course! **A pointer variable is a variable specifically designed to hold the address of another variable.

# * [Declaring a Pointer Variable](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)

C supports a special notation for declaring pointer variables. The following line declares a pointer variable named *pointer:

```c
int *pointer;
```

The * is not part of the variable's name. Instead, it tells the compiler that the associated variable is a pointer, specifically designed to hold the address of an int variable. Technically, when * appears in a declaration it is a **type modifier**, not an operator. It modifies the int variable declaration and turns it into and int pointer variable declaration. Simply stated, int integer means **"allocate a variable that will hold an integer", while "int *ingeter" means "Allocate a variable that will hold the memory address of a variable that holds an integer." If there was a data type called **bluto**, you could declare a variable designed to point to a **bluto** like this:

```c
bluto *blutoPointer;
```

For the moment, we will limit ourselves to pointers that pointst o ints. Look at this code:

```c
int *pointer, variable;
pointer = &variable
```

The variable declaration allocates two variables: a pointer to an int, and an int. The assignment statement puts variable's address in the variable **pointer**. If variable's address is 836, this code will leave **pointer** with a value of 836. Note that this code has absolutely no effect on the value of **variable**

We are sure you have got the concept of memory address, and you understand that every value stored in memory has an address associated with it. You now know how to obtain that address of a variable with the address-of (&) operator and store that address in a pointer variable (a variable for storing memory addresses)

so now what ?. This is where pointers start to get interesting.


# * [The * Operator](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)

The complement to the address-of (&) operator is the unary * or indirection operator. It does just the opposite of the & operator. It takes a pointer variable and turns it into the variable the pointer variable points to. Confusing, isn't it ?
Here is a simple example

---
Note
The * operator officially name in the C standard is the "indirection pointer", but it is also commonly referred to as the "start", "pointer" or "dereference operator"


```c
int *pointer;
int variable;

variable = 3;
pointer = &variable
*pointer = 27;
```

The first assignment statement (variable = 3) makes perfect sense. You have been using that form since Chapter 2. The second assignment statement is only a slight variation of the first. It is still storing a valye into the variable named on the left side of the assignment operator (=), but this time the value is a memory address. At this point, pointer holds the address of variable. So far, so good.

The third assignment statement is the game changer. It copies the value 27 into the memory address pointer to by pointer.

The indirection operator (*) takes the value stored in pointer and treats it like the address of a variable. In other words, the computer will take the memory address stored in the variable pointer and use it to locate the int variable somewhere else in memory, and then store the value 27 there. It still contains the address of variable.

If pointer contains the address of variable, as is the case in our example, referring to *pointer is equivalent to referring to variable. For example, this line

```c
*pointer = 27
```

Is the same as this one:

```c
variable = 27
```

Still confused? Don't worry, we are going to walk through this again with illustration Figure 7.5 joins our program in progress, just after the variables variable and pointer were declared:

```c
int *pointer, variable;
```
![Screen Shot 2020-05-30 at 19 29 56](https://user-images.githubusercontent.com/24994818/83341698-fa42a380-a2ab-11ea-943f-dde1c1c136fb.png)
 

# * [Computer Architecture and Pointer Sizes](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)

If you are curious to know why an int variable takes up 4 bytes of memory and a pointer variable takes up 8 bytes of memory, read on.

As of this writing, the default size for an int variable is 4 bytes, or 32 bits is enough to represent any whole number between 0 and 4,294,967,295. If this is not perfectly clear, review the section "Size of a Type" in [Chapter 4]().

A pointer variable is, essentially, an integer variable that stores the address of a byte in memory. Logically, it has to be big enough to represent all of the possible memory addresses your computer has. That means that every pointer variable in a program has to be capable of storing a number between 0 and the last address, since a variable can (theoretically) be allocated at any memory address.

If you shopped for a shiny new Mac recently, you know that (with some spare cash) it is not difficult to load it up with more than 4GB of RAM. A 32-bit(4 byte) integer can only represent number between 0 and 4,294,967,295 (4GB). Clearly, that is inadequate for today's computers.

Modern CPUs use 64-bit (8 byte) pointers. This allows a pointer to store the address of any memory location between 0 and 18,446,744,073,709,551,615 -yikes, that is a big number! It works out to 16 exabytes, or 16 billion gigabytes - a really, really, big number, and way more RAM than you can afford,

The size of pointers is intimately tied to he computer's hardware. Back in the days of the original Apple II, micro-computers used 16-bit pointers. Simply stated, it means the CPU could directly address 65,536 memory locations (64K). Hey, it seemed like a lot at the time.

Not surprisingly, it was not very long before this was not enough. By the time the original Mac was introduced, CPUs were starting to use 32 bits pointers. The Motorola 68000 processor in the original Mac could, theoretically, address up to 4GB of RAM. Of course, no one made memory modules that big and you could not install that much RAM on the motherboard even if you could get your hands on it. But for programmers, it meant that pointer variables were now 4 bytes long

Fast-forward 30 years and the 4GB of addresses that seemed almost inexhaustible in the 1980s looks puny now. CPU design has, naturally, been trying to keep up and desktop computers have now largely transitioned to using 64-bit (8byte) pointers. Again, that does not mean you can actually install 16 exabytes of RAM in your Mac, but a program that uses 64 bit pointers will run on such a system.

64-bit pointers should hold us for some time to come. To put it in perspective, if the surface of a Popsicle stick represents all of the memory that 32-bit pointer can address, a 64-bit pointer can address the surface area of the golden gate bridge. Given the exponential rate that memory density increasing, and computer programs keep using more memory, the transition from 32 to 64 bit pointers should hold us for about 90 years. Of course, we will not be surprised if your great grandchildren are one day shaking their heads wondering how we ever got by with "only" 16 exabytes of addressable memory.

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
