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
10. [Designing Your Own Data Structures](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#10-designing-your-own-data-structures)
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
* [The Difference Between Arguments and Parameters]()
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
* [Tips for staying safe with pointers](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#-tips-for-staying-safe-with-pointers)
* [Global and Static Variables](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#-global-and-static-variables)
* [Global Variables](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#-global-variables)
* [When to use Globals](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#-when-to-use-globals)
* [Adding Globals to Your Programs](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#-adding-globals-to-your-programs)
* [Static Variables](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#-static-variables)
* [Other Scopes](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#-other-scopes)
* [What is next?](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#-what-is-next)

                       
# 8. [More Data Types](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#learn_c_onthemacforosxandios)
* [Data Types Beyond Int]()
* [Floatsizer]()

# 10. [Designing Your Own Data Structures](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#learn_c_onthemacforosxandios)
 * [Bundling Data](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#-bundling-data)
 * [Model A: Three Arrays](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#-model-a-three-arrays)
 * [Stepping Through the MultiArray Source Code](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#-stepping-through-the-multiarray-source-code)
 * [Printing the DVD Titles](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#-printing-the-dvd-titles)
 * [Getting Rid of the Extra Carriage Return]()
 * [Finishing Model A]() 
 * [Model B: The Structure Approach]()


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

**Note**: As mentioned earlier in this book, the amount of memory allocated for an Int depends on your development environment, Xcode currently defaults to using 4-byte ints.

Each variable's bytes has a specific address. Figure 7-4 shows the computer's 1 gigabyte of memory.

![Screen Shot 2020-05-29 at 12 38 47](https://user-images.githubusercontent.com/24994818/83288670-5e307380-a1a9-11ea-84bd-4a31506c2051.png)

In this picture, the 4 bytes allocated to variable have he addresses 836, 837, 838 and 839.

By convention, a variable's address is said to be the address of its first byte (the first byte is the byte with the lowest numbered address). If a variable uses memory locations 936 through 839, its address is 836 and its length is 4 bytes.

**Note**: When a variable occupies more than 1 byte of memory, he bytes are always consecutive (next to each other in memory). You will never see an int whose byte adresses are 508, 509, 510 and 695. A variable's bytes are like family, they stick together.

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

The complement to the **address-of** (&) operator is the unary * or **indirection operator**. It does just the opposite of the & operator. It takes a pointer variable and turns it into the variable the pointer variable points to. Confusing, isn't it ?
Here is a simple example

---
**Note**
The * operator officially name in the C standard is the "indirection pointer", but it is also commonly referred to as the "start", "pointer" or "dereference operator"
---

```c
int *pointer;
int variable;

variable = 3;
pointer = &variable
*pointer = 27;
```

The first assignment statement (variable = 3) makes perfect sense. You have been using that form since Chapter 2. The second assignment statement is only a slight variation of the first. It is still storing a value into the variable named on the left side of the assignment operator (=), but this time the value is a memory address. At this point, pointer holds the address of variable. So far, so good.

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

Once memory is allocated for **variable** and **pointer**, you move n to the statement:

```c
pointer = &variable;
```

The address of the variable **variable** is stored in the 8 bytes allocated to **pointer**. In this example, **variable** address is 836. Now, **pointer** is said to **point to variable** See figure 7-6

![Screen Shot 2020-05-31 at 16 07 23](https://user-images.githubusercontent.com/24994818/83362694-d8532a80-a358-11ea-9981-02dfcd7d6aa1.png)

Ok, you are almost there. The next line of the example writes the value 27 to the location pointer to by **pointer**.

```c
*pointer = 27
```

Without the * operator, the computer would place the value 27 in the memory allocated to **pointer**. The * operator ^**dereferences** **pointer**. Dereferencing a pointer turns the pointer into the variable it points to. Figure 7-7 shows the end results.

![Screen Shot 2020-05-31 at 16 11 22](https://user-images.githubusercontent.com/24994818/83362771-65967f00-a359-11ea-99df-30d311f306a0.png)

If you step through the 07.01 - Pointer object with the debugger, you can watch each of these steps happen. Of course, the address of **variable** will not be 836, but other that that everything else should be consistent with the illustration.

The workplace window, shown in Figure 7-8, shows the values of **pointer** and **variable**. The Xcode debugger conveniently adds and expansion triangle next to pointer values. Which let you easily see the value that they point to. This will become really useful as you continue to explore pointers.

```c
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int variable = 27;
    int *pointer;
    
    pointer = &variable;
    
    printf("the value of variable is %d\n", variable);
    printf("the value of variable is %d\n", *pointer);
    
    printf("the value of pointer is: %p\n", pointer);
    printf("the address of variable is: %p\n", &variable);
    
    *pointer = 27;
    printf("the new value of variable is %d\n", variable);
    
    return 0;
}
```

```console
the value of variable is 27
the value of variable is 27
the value of pointer is: 0x7ffeefbff34c
the address of variable is: 0x7ffeefbff34c
the new value of variable is 27
Program ended with exit code: 0
```

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

We are going to take a short break from pointers and talk about functions and how to exchange values with them. How does this relate to pointers ? Be patient, as we will come back around to that soon enough.

Suppose you want to write a function called **AddTwo()** that takes two numbers, adds them together, an returns the sum of the two numbers. How do you get the two original numbers to **AddTwo()**? How do you get the sum of the two numbers back to the function that called **AddTwo()**

The answer to the first question is **function parameters** or **values passed** to a function. The second question is answered with a **return value**, or a **value passed** from the function back to the caller of that function. Before you can learn how to pass values around, or even why you need to, you need to know a little about the concept of scope.

# * [Variable Scope](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)

In C, every variable is said to have a **scope**. A variable's scope defines where in the program you have access to that variable. In other words, if a variable is declared inside one function, can another function refer to that same variable ?

Simply stated, the scope of a variable is defined by where it is declared. The scope of a variable declared inside a function is limited to the code inside that function.

---
**Note**
Technically, the scope of a variable declared inside any block ({}) of code ends at the closing brace of that block
---

This definition is important. It means you can't declare a variable inside one function, and then refer to that same variable inside another function. Here's an example that will never compile:

```c
int main (int argc, const char *argv[])
{
	int numberOfDots;
	numberOfDots = 500;
	DrawDots();
	return 0;
}

void DrawDots(void) 
{
	int index;
	for (index = 1; index <= numberOfDots; index`++) 
		printf(".")
}
```

The error in this code occurs when the function **DrawDots()** tries to reference the variable **numberOfDots**. According to the rules of scope. **DrawDots()** does not even know about the variable **numberOfDots**. If you tried to compile this program, the compiler would complain that **DrawDots()** tried to use the variable **numberOfDots** without declaring it.

The problem you are faced with is getting the value of **numberOfDots** to the function DrawDots() so DrawDots() knows how many dots to draw. The answer to this problem is function parameters.

---
TIP
**DrawDots()** is another example of the value of writing functions. We have taken the code needed to perform a specific function (in this case, draw some dots) and embedded it in a function. Now, instead of having to duplicate the code inside **DrawDots()** every time we want to draw some dots in our program, all we need is a single line of code: a call to the function **DrawDots()**
---

# * [How Function Parameters Works](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)

Function **parameters** are variables, but instead of being declared at the beginning of a function, parameters are listed between the parentheses of the function's declaration, like this:

```c
void DrawDots(int numberOfDots)
{
	// function's body goes here
}
```

When you call a function you simply provide a value for each parameter, making sure you pass the function what it expects. To call the version of **DrawDots()** just defined, make sure you place an int between parentheses. The call to **DrawDots** inside **main()** passes the value 30 into the function **DrawDots()**:

```c
int main(int argc, const char * argv[])
{
	DrawDots(30)
	return 0
}
```

When **DrawDots()** starts executing, it sets its parameter to the passed-on value. In this case, **DrawDots()** has one parameter, and int named **numberOfDots**. When this call executes

```c
DrawDots(30)
```

the function **DrawDots()** set its parameter, **numberOfDots**, to a value of 30.

To make this little clearer, here is a revised version of the example:

```c
#include <stdio.h>
void DrawDots( int numberOfDots );
int main (int argc, const char * argv[])
{
    DrawDots( 30 );
return 0; }

void DrawDots( int numberOfDots )
{
int i;
for ( i = 1; i <= numberOfDots; i++ ) printf( "." );
}
```

This version of drawDots will compile and run properly. Its starts with the #include of studio.h and follows with the function prototype of **DrawDots()**. Recall the concept of function prototypes that we introduced in Chapter 3. Imagine the compiler making its way down the file, processing one chunk of code at a time. Without the prototype, it would hit the call of DrawDots(30) inside **main()** and not have anything to veryfy it agains. The prototype assures the compiler that you intend to provide a function named DrawDots(), that it will not return a value (that is why it is declared as void), and that it will take and int as an argumnt. As the compiler continues to process the file and comes across the actual call of DrawDots(), it can make an intelligent assessment of the call to decide if it was made properly.

After the DrawDots prototype, you entere **main()**. **main()** calls DrawDots(), passing as a parameter the constant 30. **DrawDots()** receives the value 30 in its int parameter, numberOfDots. This means that the function **DrawDots** starts execution with a variable named **numberOfDots** having a value of 30.

Inside **DrawDots()**, the **for loop** behaves as you might expect, drawing 30 periods in the console window. Figure 7-9 shows a picture of this program in action. You can run this example yourself. 

```c
#include <stdio.h>

void DrawDots( int numberOfDots );

int main(int argc, const char * argv[]) {
    
    int numberOfDots;
    numberOfDots = 500;
    DrawDots(30);
    
    return 0;
}

void DrawDots(int numberOfDots)
{
    int index;
    for (index = 1; index <= numberOfDots; index++)
        printf(".");
    printf("\n");
}
```

output

```console
..............................
Program ended with exit code: 0
```

# * [Parameters are Temporary](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)

When a function gets called, a temporary variable is created for each of its parameters. When the function exits (returns to the calling function), that variable goes away.

In the example, we passed a value of 30 into **DrawDots** as a parameter. The value came to rest in the temporary variable named **numberOfDots**. Once **DrawDots** exited, this version of numberOfDots ceased to exist.

---
**Note**
Remember, a variable declared inside a function can only be used inside that function. For this reason, they are often called **local variables**.
---

It is perfectly acceptable for two functions to use the same variable names for completely different purposes. For example, using a variable name like index as a counter in a **for loop** is fairly standard. What happens when, in the middle of just such a **for loop**, you can call a function that also uses a variable named index ? Here is an example:

```c
#include <stdio.h>

void DrawDots( int numberOfDots );

int main(int argc, const char * argv[]) {
    
    int numberOfDots;
		int index;

		for(index = 1; index<=10; index++) {
    	DrawDots(30);
			printf("\n");
		} 
    return 0;
}

void DrawDots(int numberOfDots)
{
    int index;
    for (index = 1; index <= numberOfDots; index++)
        printf(".");
    printf("\n");
}
```

This code prints a series of 10 rows of dots, with 30 dots in each row. After each call to **DrawDot()**, carriage return is printed, moving the cursor in position to begin the nest row of dots.

Notice that **main()** and **DrawDots()** each feature a variable named index. **main()** uses the variable index as a counter, tracking the number of rows of dots printed.
**DrawDots()** also uses index as counter, tracking the number of dots in the row it is printing. Will not **DrawDots()'s** copy of index mess up **main()**'s copy of index ? No!

When **main()** starts executing, memory gets allocated for its copy of index. When **main()** calls **DrawDots**, additional memory gets allocated for the DrawDots copy of index. When DrawDots() exits, the memory for its copy of index is deallocated freed up so it can be used again for some variable.

---
**Note**
A parameter or variable declared within a function is known as an **automatic variable**, so called because they are automatically allocated when the function begins, and then automatically deallocated when the function ends. **DrawDots** has a two automatic variables: the variable **index** and the **numberOfDots** parameter.
---

# * [The Difference Between Arguments and Parameters]()

Here is one final point: **The value pased into a function is known as an **argument**. The variable declared to received the argument is known as a **parameter**. In this line of code:

```c
DrawDots(30)
```

The constant 30 is an **argument** being passed to **DrauDots()**; It is not a parameter.

Many programmers use the terms **"Argument"** and **"Parameter"** interchangeably. For example, someone might talk about passing a parameter to a function. Stricly speaking, you pass an argument to a function to be received as a parameter. As long as you understand that point, the term **"parameter passing"** will do just fine.

# * [Function return Value](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)

Parameters let you copy values to functions, but what about getting values from functions? That is where a function's return value comes into play. A **return value** passes a single value from the function back to the function that called it.

You declare the type of value a function will return right at the beginning of the function's definition. This permits the function to be used in an expression, juts as if the function was a variable of that type. The return statement at the end of the function's body determines what that value will be.

Now we can finally explain the mysterious **return 0**; statement that is been in every example in this book. The function **main** is declared to return and int value:

```c
int main( int argc, const char * argv[] )
```

When **main()** function ends, it returns a value of 0 to whoever called it using statement:

```c
return 0;
```

The function that called **main()** - **start()**, it must knows- receives the value when main() ends. The meaning of the value must be agreed upon in advance. In this case of main(), the value returned is the program's so-called **"status"** value. A zero indicates that the program ran successfully. Any other value indicates that the program failed to run or encountered some problem.

To see function return values in action, let's create a function named Average(). You will find this function in the Average project directory. Average() takes two ints and returns the average of those two values:

```c
#include <stdio.h>

int average( int firstNumber, int secondNumber);

int main(int argc, const char * argv[]) {
    int averageNumber;
    averageNumber = average(7,23);
    printf("The averag of 7 and 23 is %d\n", averageNumber);
    return 0;
}

int average( int firstNumber, int secondNumber)
{
    return ( firstNumber + secondNumber ) / 2;
}
```

```console
The averag of 7 and 23 is 15
Program ended with exit code: 0
```

Another way to use a function, nested:

```c
(if (average(i,j) > 100))
```

The key thing to remember is that the value of a function call in an expression will be the value returned by the function call in an expression will be the value returned by the function.

# * [printf() Returns a Value](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)

You are also within your rights to completely ignore the value returned by a function, like this:

```c
average(2,108)
```

If you write a function call, but ignore its returns value, nothing bad happens. The function executes and the value it returns simply disappears into the mist. For function like average() that would be silly, because the whole purpose of the function is to calculate a value. If you weren't interested in the value, you would not have called the function.

But a lot of functions perform useful tasks while also returning a value, which may or may not be of interest to the caller. It is worth nothing that printf() is actually declared to return an int. The value returned is the number of characters generated, or a negative value if an error occurred. The vast majority of programmers ignore this return value because all they are interested in is getting a message sent to the console. That is all we have cared about so far. But if you ever find yourself in a situation where you want to know exactly how many characters the printf() function sent to the console, all you have to do is observe the value returned by the printf() function call, like this:

```c
int averageNumber;
int lineLenght = printf("The average of 7 and 23 is %d\n", average(7,23));
printf("The previous line is %d characters long\n", lineLenght-1);
```

```console
The average of 7 and 23 is 15
The previous line is 29 characters long
Program ended with exit code: 0
```

# * [Multiple Returns Statements](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)

Let's create a slightly more complex example that also highlights a feature of **return** statements.

```c
#include <stdio.h>

int minimum(int firstNumber, int secondNumber);

int main(int argc, const char * argv[]) {
    printf("%d is smaller of 7 an 23\n", minimum(7,23));
    printf("%d is smaller of 23 and 7\n", minimum(23, 7));
}

int minimum(int firstNumber, int secondNumber)
{
    if(firstNumber<secondNumber)
        return firstNumber;
    return secondNumber;
}
```

```console
7 is smaller of 7 an 23
7 is smaller of 23 and 7
Program ended with exit code: 0
```

For a function that returns a value - we will get to functions that don't shortly - the **return** statement expresses what value is to be returned. But the **return** statement has another important attribute: **it ends the function**.

Just as the break statement you send in Chapter 6 will jump out of any remaining code in a loop, the **return** statement jumps out of any remaining code in that function. Typically, you will find a single **return** statement at the very end of the function, as you have been seen in **main()**, where its purpose is to state the value to be returned. But you can have additional **return** statements elsewhere in the function. If a **return** statement is not the last statement, it causes the function to exit immediately and return the stated value to the caller. No further code in the function is performed.

In the minimum() function, the **if** statement determines if the value of **a** is less than the value of **b**. If it is, the **return a**; statement is performed. This causes the value of **a** to be returned as the value for this function and no further statements in minimum are performed.

If **a** is not less than **b**, the statement following the if statement is executed instead. The **return b**; statement causes the value of **b** to be returned. The end result is that the value of the **minimum()** function call will be the smaller of its two argument values.

# * [Return Nothing At All](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)

Earlier in the book we alluded to the **void** type. The **void** type is a special type that means **nothing** or **no value**. You use it in places to indicate that something does not have any value at all, and **void** has two very important roles in functions.

Both of these roles are illustrated in this function definition from the **hello** project you ran in chapter 3:

```c
void sayHello( void );
```

A return type of void indicates that the function does not return a value. That's it. The function does not pass a value of any kind back to the caller. You can call a function with a **void** return type --called a **void function**--- like this:

```c
sayHello();
```

But you can't use it in an expression, because it has no value:

```c
variable = sayHello(); // error, sayHello() does not return a value
```

The other use of **void** is in the parameter list of a function that does not have any parameters. The definition sayHello(void) means that there are no values passed to sayHello(). When you call sayHello(), you don't put any arguments between the two parentheses.

---
**Note** 
You can still use a **return^** statement in a void function; you just omit the expression. This is sometimes called an **empty return statement**. It will still stop the function and return execution to the function that called it, but no value is passed. 
---

A function can have a return value and no parameters, parameters but no return value, or any combination that makes sense.

---
**TIP**
The compiler will help you use the **return** statement correctly. If you try to use a **return** with an expression in a void function, or forget the expression in a function that returns a value, or just forget the return statement altogether, the compiler will issue a warning. Check for those warnings to make sure you are using the appropiate return statement.

# * [Putting it All Together](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)

Brace yourself. You are about to use almost everything you have learned about C so far. You have learned about variables, expressions, functions, if statements, loops, pointers, and parameter passing. Now we are going to show a program that uses them all together. 

# * [Using Pointers as Parameters](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)

Combining the individual pieces of C definitely creates a whole that is more than a sum of its part. The first bit of alchemy we will perform is to combine pointers with function parameters.

To compile this project I have to change The Build Settings of the project to have access to the math headers, Use ANSI-C

![Screen Shot 2020-06-05 at 14 03 38](https://user-images.githubusercontent.com/24994818/83913667-605c7a00-a735-11ea-84a9-e2a565ac7283.png)

```c
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
```

Prototype function:

```c
bool factor(int number, int *firstFactorPointer, int *secondFactorPointer);
```

In main()

```c
int main(int argc, const char * argv[])
{
    int number;
    
    for (number=2; number<=20; number++) {
        bool isPrime;
        int firstFactorNumber, secondFactorNumber;
        
        isPrime = factor(number, &firstFactorNumber, &secondFactorNumber);
        if (isPrime)
            printf("The number %d is prime\n", number);
        else
            printf("The number %d has %d and %d as factors\n", number, firstFactorNumber, secondFactorNumber);
        
    }
    return 0;
}
```

Write the function:

```c
bool factor(int number, int *firstFactorPointer, int *secondFactorPointer)
{
    int factor;

    for (factor = sqrt(number); factor > 1; factor--) {
        if ((number % factor ) == 0) {
                break;
        }
    }
    *firstFactorPointer = factor;
    *secondFactorPointer = number / factor;
    return ( factor == 1);
}
```

By this point in your journey to master C, you should understand practically every aspects of this program.

```console
The number 2 is prime
The number 3 is prime
The number 4 has 2 and 2 as factors
The number 5 is prime
The number 6 has 2 and 3 as factors
The number 7 is prime
The number 8 has 2 and 4 as factors
The number 9 has 3 and 3 as factors
The number 10 has 2 and 5 as factors
The number 11 is prime
The number 12 has 3 and 4 as factors
The number 13 is prime
The number 14 has 2 and 7 as factors
The number 15 has 3 and 5 as factors
The number 16 has 4 and 4 as factors
The number 17 is prime
The number 18 has 3 and 6 as factors
The number 19 is prime
The number 20 has 4 and 5 as factors
Program ended with exit code: 0
```

# Algorithm of Factor project.

1. iterate over the range number 2 to number 20
2. for each number get its prime number
3. if the number is prime print it
		*if the number is not prime print its factors
4. terminate the program returning 0.

# Algorithm to get prime number and factors
		
# * [Some Pointers on Pointers](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)

There are some finer points (no pun intended) about pointers and parameters that you should know about. These will help you to understand the best ways to use, and maybe when not to use, pointers in your program.

# * [Pass-By-Value vs Pass-By-Reference](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)

In the program average(), you passed simple (int) values to the average() function. The values of the argument expressions were copied into the function's parameters before the function executed. The function could change its parameters variables, but that has no effect on the original values. (We know you know all of this, we are just restating it so it is clear).

In programming lingo this is called **pass-by-value**. A copy of the value is passed to the function and the function can do anything it wants to with its copy; it will never affect another variable in the program.

In the Factor project you passed the addresses of two variables. The factor() function was able to use those pointers to affect variables outside its scope. This method of passing values is called **pass-by-reference**. Instead of copying the value, a reference to the value is passed to the function. The function can use this reference to access and/or modify the original value at will.

Whether to use pass-by-value or pass-by-reference is a perennial topic of debate among programmers, in general, our approach is to use pass-by-value unless there is a compelling reason to use pass-by-reference.

Compelling reasons to use pass-by-reference might be

	* The value is a group or collection of values. (this will make sense after you read about arrays in the next chapter)
	* a Function must return more than one value. (there are also other solutions to this particular problem that you will learn about in chapter 9)
	* The amount of data you need to pass to, or from, a function is cumbersome to copy. Remember the library example at the start of the chapter? Even if you could make a copy of an entire book, It is still much easier to give someone the catalog number of the book instead.
	* The information that needs to be passed is a complex collection of values, and the function needs to examine some values and modify numbers others. (Again, this will make more sense after Chapter 9). It is easier to pass a single reference to the whole mess rather than copying every value the function will need.

# * [The NULL Pointer Value](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)

The C Language defines a special pointer value named **NULL** that means **"no address"**. You can assign the NULL value to any pointer (pointer == NULL) an you can compare pointer values with NULL, as in if(pointer == NULL). NULL gives you a value that means the pointer does not point any variable at all.

Earlier we stated that memory addresses start at zero and go up, and a variable can be allocated at any address. In practice, **that is not entirely true**. Addresses do start at 0, but OSX and BSD Unix never allocate variables at address 0, or anywhere near address 0. The reason why are many, but the one important is so **that programmers can be guaranteed that no valid variable address will ever be zero.**

The NULL constant is address 0. Assigning NULL to a pointer is the same as setting its integer value to 0. One side effect is that a lot of C programmers use a short-hand for testing to see if a pointer variable points to a value or not 

```c
if(pointer) {
}
```

Remember that an if statement performs its action if the expression is non-zero. Since NULL is always zero and any valid variable address will not be zero, this statement is equivalent to:

```c
if (pointer != null) {
}
```

 We suggest you write out the long form, simply because it makes your intentions clearer; both are common.

# * [The Dark Side of Pointers](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)

> With great power comes great responsibility

Pointers are very powerful, but they have a dark side. They occupy a dangerous land full of hazards just waiting to snare an unsuspecting programmer. To correct, and safe, use of pointers requires careful planning and attention to detail.

The principle peril of pointers is that they can point anywhere. There are no safeguards to ensure that a pointer points to the kind of value you expect it to. It can just as easily point another kind of value, or unused memory, or the part of memory where the code for your program is stored, or an address that does not even exist.

The effects of using pointers that point to the wrong thing range from the perplexing to the disastrous. If a pointer points to some other variable, changing it will have a bizarre effect on your program- the value you expected to change will not, and some other unrelated variable will spontaneously change. If the pointer points to memory that does not exist, the hardware will catch it and terminate your program with a **"segment default"** signal, colloquially known as a **"crash"**.

# * [Physical and Logical Memory Address](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)

If you are reading this book carefully, you might have detected an inconsistency.

We said that memory addresses start at zero and go up. We said C reserves address 0 (NULL) to mean **"no address"**. We said that if you try to access a memory address that does not exist, your program will crash. But why ? Does not address 0 always exist ? Isn't address 0 the one address in every computer that exists ?

Yes and no. The answer lies in the difference between physical memory addresses and logical memory addresses.

In **physical memory** -The RAM that is soldered to your motherboard- address 0 is the first byte of memory. But your program never addresses physical memory directly. It works with what we are called **logical addresses**.

Modern computers use a system called **virtual memory** that maps (translates) the logical addresses that your program uses into the physical addresses of your RAM. This is done through (surprise!) a bunch of pointers called a **page map**. When your program is started it is allocated a range of logical memory addresses to use. These addresses might start at, say, one million (1,000,000) and go up from there. You will notice that address 0 ins intentionally left out. If your program allocates an integer at address 1,000,000 and stores a value in it, **the CPU uses its page map to translate that logical address into the actual physical address of your RAM**. Don't worry about the complexity of this; It is all handled by hardware and it is mind-numbingly fast.

This arrangement benefits your program in two ways. The first is security. If you accidently use an uninitialized pointer, your program could end up accessing a memory address that's not even part of your program. Imagine if your program could change values in another running program! Well, relax; you can't. Your program can only access the logical addresses that have been assigned to it. Try to access anything outside that range and your program will crash.

The second benefit is simplicity. Every program can allocate its first variable at address 1,000,000. Each program has the same logical addresses, but the page map translates them into different physical addresses. One program does not have to worry about using addresses of another program. Each program lives in its own separate universe, and they never collide.

The short and long of it is that you don't need to worry about it. You will never see the actual (physical) address that your data is stored in. When Programming and debugging, everything will be in the logical addresses allotted to your program.

# * [Tips for staying safe with pointers](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters)

- Make sure your pointer variables are initialized. An uninitialized integer variable simple contains  goofy number, but an uninitialized pointer variable will point to some random, likely invalid location.
- If you don`t have a value to put in a pointer, set it to NULL. Test the pointer to make sure if is not equal to NULL before you use it. Dereferencing a NULL pointer is the fastest, and most common, way to crash your program. If a pointer is no longer valid, set it to NULL again.
- Make sure you don't use pointers to variables that no longer exist. In the Factor project, main() allocated a variable and passed its address to factor(), which used that pointer. The variable existed before, and after, the call to factor() so that was safe. But what happens if you reverse it ? what if factor() allocates a variable and passess its addres back to main() It is unsafe for main() to use that pointer. Why ? Because the variable created by factor() disappeared as soon as the function returned to main(), so the pointer that main() has now points to a varible that no longer exists. That is a recipe for disaster.

Dont feel bad if you make a mistake with pointers, because **you will make a mistake with pointers.**. We doubt there is a C programmer alive that has not crashed their application using a ULL or uninitialized pointer. Professional programmers with decades of experience do it. In fact, it is the number one reason application crash.

# * [Global and Static Variables](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)

So far we have used function parameters, return values, and pointers to pass values to and from other functions. We did this  because the scope of an automatic variable is confined to the function (of block) it was declared in. This is, by far, the **most common way that values are passed around inside a program**. There is, however, an alternative.

# * [Global Variables](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)

A **global variable** isa variable that is accessible from every function in your program. Said another way, the scope of a global variable is the entire program. The variable is created before the programm begins and exist until it ends.

**Global variables** provide and alternative to passing values via parameters. Global variables are just like regular variables, with the exception that they can be referenced inside any of your program's functions. One function might initialize the the global variable; another might change its value; and another function might print the value of the global variable in the console window.

As you design your programs, you will have to make some basic decisions about **data sharing between functions**. If you will be sharing a variable among a number of functions, you might want to consider making the varible a global. **Globals** are escpecially useful when you want to share a variable between two functions that are several calls apart.

**Several calls apart?** At times, you will find yourself passing a parameter to a function, not because the function needs the parameter, but because the function calls another function that needs that parameter

```c
#include <stdio.h>

void passAlong(int variable);
void printVariable(int variable);

int main(int argc, const char * argv[]) {
    int variable;
    
    variable = 10;
    passAlong(variable);
    return 0;
}

void passAlong(int variable)
{
    printVariable(variable);
}

void printVariable(int variable)
{
    printf("variable = %d\n", variable);
}
```

```console
variable = 10
Program ended with exit code: 0
```

Notice that main() passes **variable** tothe function **passAlong()**. **passAlong()** does not actually make use of **variable**. Instead, it just passes **variable** along to the function **printVariable()**. **printVariable(), prints **variable** and then returns. If **variable** were a global, you could have avoided some parameter passing. **main()** and **printVariable** could have **shared variable** without the use of parameters. 

# * [When to use Globals](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)

When should you use parameters ? when you should you use globars ?

In a nutshell (cascara), you should generally avoid using globals unless there's a compelling reason to do so. Global variables offer a shorcut that saves you from having to pass information up and down your chain of function calls and gives disparate functions access to the same information. They do save time, but sometimes at the cost of proper program design. As you move on to object progrmming languages like objective-c, you will find that rarely (if ever) need globals.

So why you learn about them ? There are times when a global is absolutely the correct solution. On the other hande, a telitale sign of an inexperienced programmer is overuse of globals.

None of these decisions are cut and dried. There's a very influenctial book title **Design Patters: Elements of Reusable Object-Oriented Design** written by the **so-called** **"Gang of Four"**. Erich Gamma, Richard Helm, Ralph Johnson, and John Vlissides. The book describes common programming problems and elegant solutions to those problems. These **"design patterns"** as they have become known as, are universal and can be applied to just about become familiar with design patterns.

At the same time, people have observed **"anti-patterns"**, bad programming practices, used by poor programmers. Using too many global variables is an anti-pattern, and here is why. **One variable should be available (in scope) to that code that makes use of that variable, and not much else. Functions shouldn't have acess to unrelated variables. A global variable is accessible everywhere, but it is rare to find a variable whose purpose is applicable to every function in your program. As your program get larger, they become even more rare**. 

# * [Adding Globals to Your Programs](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)

Let's take a look at the proper way to add globals to your programs.

Adding globals to your program is easy. Just declare a variable outside of any function. Here is the example we showed you earlier, using globals in place of parameters:

```c
#include <stdio.h>

void passAlong(void);
void printVariable(void);

int globalVariable;

int main(int argc, const char * argv[])
{
    globalVariable = 10;
    passAlong();
    return 0;
}

void passAlong(void)
{
    printVariable();
}

void printVariable(void)
{
    printf("globalVariable = %d\n", globalVariable);
}
```

This example starts with a variable declaration, right at the top of the program. Because **globalVariable** was declared outside of a function, **globalVariable** becomes a global variable, accessible to each of the program's functions. Notice that none of the functions in this version use parameters. As a reminder, when a function is declared without parameters, use the keyboard **void** in place of a parameter list.

---
Note
Did you notice that letter global at the beginning of the global's name ? Many C programmers start each of their global variables with the letter g (for global). Doing this will distinguish your local variables from your global variables.
---

# * [Static Variables](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)

So far all of the variables you have defined have a lifespan equal to their scope. Parameter and automatic variables defined in a function are created when the function starts and disappear again when it ends. This is also the same span of code that has access to that variable. Likewise, a global variable exists as long as the program does, and it is accessible anywhere in the program.

A **static variable is a hybrid that has the scope of a automatic variable and longevity of a global variable**. **It is created when the program starts, but its scope (the code that can "see" that variable) is limited to one function or block of code**

Here is an example:

```c
#include <stdio.h>

void countDown(void);

int main(int argc, const char * argv[]) {
    countDown();
    countDown();
    countDown();
    countDown();
    return 0;
}

void countDown(void)
{
    static int count = 3;
    
    if (count != 0)
        printf("%d ...\n", count--);
    else
        printf("Liff-off! \n");
}
```

The variable **count** is defined as **static** and includes and **initializer**. The variable is created when the program starts and is immediately assigned the value fter the equals sign. This happens only once. Even thought it looks like it would be set to 3 every time the function runs, it does not. And that's goog, because you want it 

---
Note
Both globals and statics can have initializers values. If you don't specify an initializer value, the variable is set to 0 before your program starts. Automatic variables can be uninitialized, but global and static variables are always initialized. The value of your initializer mus be a constant; It can't be an expression that uses variables or function calls.
---

Run the program and you will se this output

```console
3 ...
2 ...
1 ...
Liff-off! 
Program ended with exit code: 0
```

Each time the countdown() function runs it looks at the value in count. If it is not 0, it ouputs that number and then subtracs one from it. If it is 0, it outputs the message "Lift-off!".

This works because the value of count is set to 3 before the program starts. Every time countDown() is called, it decrements the count variable by 1 until it gets to 0.

The scope of count is still limited to the countDown() function. You can't refere tothe count variable in main() or any other function. countDown() can, however, safely get the address of count (&count) and pass that pointer to another function or return it. It is safe because count does not go away when countDown() returns, so that address will always point to a valid variable.

# * [Other Scopes](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)

Variables can have scopes besides **local** and **global**. The **static** keyword can be added to a global variable o function to limit its scope to a single source file (like main.c), which is called a module; technically it is a **translation unit**, but only hard-core compiler geeks ever call it that. Also note that variables and functions defined in other modules are not automatically available everywhere. You must use the **extern** keyword to define the functions and global variables you plan to use from other modules. Poke around some of the header (.h) files that you have been #includeing and you will see a lot.

The **extern** and **static** keywords are particularly useful when organizing your program into multiple modules. We will show you how to do that in Chapter 11.

# * [What is next?](https://github.com/c4arl0s/Learn_C_onTheMacForOSXandiOS#7-pointers-and-parameters-1)

# 8. [More Data Types]()

You may now consider yourself a C programmer, First Class. At this point, you have mastered all the basic elements of C programming. You know that C programs are made up of functions, one (and only one) of which is named main(). Each of these functions uses keywords (such as if, for, and while), operators (such as =, ++, and *=), and variables to manipulate data and make decitions.

Sometimes you will use a parameter to pass values between a calling and a called function. Sometimes these parameters are passed by value; other times pointers are used to pass a parameter by address. Some functions return values. Others declared with the void keyword, don't return a value.

So far, all of the variables you have declared are ints. In this chapter, you will focus on nother types of variables, As you will soon see, there are many other data types are out there.

# * [Data Types Beyond Int]()

So far, the focusas been on **ints**, which are extremly useful when it comes to working with integer numbers. You can add two **ints** together. You can check if and **int** is even, odd, or prime. There are a lot of things you can do with **ints**. as long as you limit yourself to integer numbers.

What do you do if you want to work with numbers such as 3.1416 and -98.6?
Check out this slice of ccode

```c
int number;
number = 3.5;
printf("number = %d \n", number);
```
Since number is and int, the number 3.5 will be truncated before it is assigned to number. When this code ends, number will be left with a value of 3 and not 3.5 as intended. Do not despair. C provides **floating point** data types, specifically designed to deal with non-integer numbers.

---
Note
The name "floating point" refers to the fact that the radix point (also called the "decimal point") can be placed wnywhere relative to the significant digits, which is what allows floating point values to represent such a wide range of numbers
---

The three floating point data types are **float, double, and long double**. The typesdiffer in the number of bytes allocated to each and, therefore, the range of values each can hold. The relative sizes of these three types will vary depending on what kind of CPU you are using an other variables. Let's look at a program you can run to tell you the size of these three types in your development environment and to show you various ways to use printf() to print floating point numbers.

# * [Floatsizer]()

```c
#include <stdio.h>

int main(int argc, const char * argv[]) {
    float floatNumber;
    double doubleNumber;
    long double longDoubleNumber;
    
    floatNumber = 12345.67890123456789f;
    doubleNumber = 12345.67890123456789;
    longDoubleNumber = 12345.67890123456789L;
    
    printf("size of float is: %zu bytes\n", sizeof(floatNumber));
    printf("size of double is: %zu bytes\n", sizeof(doubleNumber));
    printf("size of long double is: %zu bytes\n", sizeof(longDoubleNumber));
    return 0;
}
```

```console
size of float is: 4 bytes
size of double is: 8 bytes
size of long double is: 16 bytes
Program ended with exit code: 0
```




# 10. [Designing Your Own Data Structures]()

Chapter 8 introduced several new data types, such as float and char. We discussed the range of each type and the format specifiers used to print each type using printf(). Next, you explored the concept of arrays, focusing on the relationship between char arrays and C strings. Along the way, you discovered the #define statement, C's text substitution mechanism. In Chapters 7, 8 and 9, you learned a lot about pointers.

This chapter will show you how to use existing C types as building blocks to design your own customized data structures. You will also learn how to dynamically allocate memory for those structures as you need it.


# * [Bundling Data]()

There will be times when your programs will want to bundle together, or associate, related data. For example, suppose you are writing a program to organize your DVD Collection. Imagine the type of information you will want to access for each DVD At the very least, you will want to keep track of the movie's title. You might also want to rate each DVD on a scale from one to ten. Finally, let's add in a comment field you can use to describe your feelings about the movie or perhaps note the whom you loaned this particular movie.

In the next few sections, we will look at two separate approaches to a basic DVD tracking program. Each approach will revolve around a different set of data structyres. One will make use of arrays (Model A) and the other a set of custom designed data structures (model B)

# * [Model A: Three Arrays]()

One way to model you DVD collection is with a separate array for each DVD's attributes:

```c
#define kMaxDVDs					5000
#define kMaxTitleLenght		256
#define kMaxCommentLenght	256
```

```c
rating[37] = 8; /* a pretty good DVD */
```

```c
float array[5];
```

```c
array[0]
array[1]

array[4]
```

This statement

```c
float array[3][5];
```

declares a two-dimensional array containing 15 floats (3*5 = 15)

```c
array[0][0]

array[3][5]
```

here is a three dimensional array

```c
float array[3][5][10];
```

3*5*15 = 150 elements

---
Note
C allows you to create arrays of any dimension, though you will rarely have need for more than a single dimension
---


```c
#define kMaxDVDs         5000
#define kMaxTitleLenght		256
#define kMaxCommentLenght	256

char rating[kMaxDVDs];
char title[kMaxDVDs][kMaxTitleLenght];
char comment[kMaxDVDs][kMaxCommentLeght];
```

Do the math to know what size you are allocating into the stack.

# * [Stepping Through the MultiArray Source Code]()

```c
#include <stdio.h>

#define kMaxDVDs             5000
#define kMaxTitleLenght      256
#define kMaxCommentLenght    256

void printDVDTitle(int dvdNumber, char title[][kMaxTitleLenght]);

int main(int argc, const char * argv[]) {

    char title[kMaxDVDs][kMaxTitleLenght];
    int dvdNumber;
    printf("The title array takes up %zu bytes of memory\n", sizeof(title));
    for (dvdNumber=0; dvdNumber<kMaxDVDs; dvdNumber++) {
        printf("Title of DVD #%d", dvdNumber+1);
        fgets(title[dvdNumber], kMaxTitleLenght, stdin);
    }
    printf("-----\n");
    for (dvdNumber=0; dvdNumber<kMaxDVDs; dvdNumber++) {
        printDVDTitle(dvdNumber, title);
    }
    return 0;
}
```

Interesting !!!

```
fgets(char *restrict, int, FILE *)
```

# * [Printing the DVD Titles]()

```c
void printDVDTitle(int dvdNumber, char title[][kMaxTitleLength])
{
 printf("Title of DVD #%d: %s\n", dvdNumber+1, title[dvdNumber]);
}
```
Check this:

```c
title[5][0] = '\0';

Compilers do not bounds checking of any kind, if you want to access memory beyond the bounds of your array, no one will stop you. This is part of the "charm" of C - it gives you the freedom to write programs that crash in spectacular ways. Your job is to learn how to avoid such **pitfalls**.

# * [Getting Rid of the Extra Carriage Return]()

If you look back at figure 10-1, you might notuce an extra carriage return after each line of output produced by printingDVDTitle(). That is because when fgets() reads a line, it includes all of the characters on that line, including the newline character at the end of the line. (this is in contrast to scanf(), which stops when it gets to the newline character). Under normal circumstances, the newline character is always the last character in the string buffer, so you can add this like of code (just after the call to fgets()) to get rid of it:

```c
title[dvdNumber][strlen(title[dvdNumber])-1] = '\0';
```

Note that you will need to add a #include<string.h> to the top of the line to access the strlen() function. This line of code finds the length of the string that was just typed in. The string includes a carriage return at the very end of it. You substract one from the length, and then store a NUL character right where the carriage returns sits, making the string one byte shorter.

This code is not particularly good because it lacks some basic safeguards. You will learn about error and range checking in a later chapter, where we will explain what's wrong with this code. But for now, it is good enough.

# * [Finishing Model A]()

In the beginning of the chapter, we described a program that would track your DVD collection. The goal was to look at two different approaches to solving the same problem. The first approach, Model A, uses three arrays to hold a rating, title, and comment to each DVD in the collection:

```c
#define kMaxDVDs             5000
#define kMaxTitleLenght      256
#define kMaxCommentLenght    256
```

```c
char rating[kMaxDVDs];
char title[kMaxDVDs][kMaxTitleLenght];
char comment[kMaxDVDs][kMaxCommentLenght];
```

Before you move on to Model B, take a closer look at the memory used by the model A arrays:

 * The array rating uses 1 byte per DVD (enough for a 1-byte rating from 1 to 10)
 * The array title uses 256 bytes per DVD (enough for a text string holding the movie title, up to 255 bytes in length, plus the terminating NUL character).
 * The array comment also uses 256 bytes per DVD (enough for a text string holding a comment about the DVD, up to 256 bytes in length, plus the terminating NUL Character)

Added together, Model A allocates 513 bytes (1 byte + 256 bytes + 256 bytes) per DVD. Since Model A allocates space for 5,000 DVDs when it declares its three key arrays, it uses 2,565,000 bytes (513*5000) for its data

Since the program really only needs 513 bytes per DVD, would not it be nice if you could allocate the memory for a DVD onle when you need it ? With this type of approach, if your collection only consisted of 50 DVDs, you would only have to use 25,650 bytes of memory (50*513=25,650), instead of 2,565,000.

---
Note
Memory usage is just one factor to take into account when deciding which data structure to use in your program. Another is ease of use. If you have plenty of memory available. Model A takes less time to implement and is much easier to work with. In that case, be damned; go for the simpler solution. The cool thing about being the programmer is that you get to decide what's best in any given situation.
---

As you will see by the end of this chapter, C provides a mechanism for allocating memory as you need it. Model B takes a first step toward memory efficiency by creating a simple data structure that contains all the information relevant to a single DVD. Later in this chapter, you will learn how to allocate just enough memory for a single structure.

# * [Model B: The Structure Approach]()

As mentioned, your DVD program must keep track of a rating (from 1 to 10) the DVDs title, and a comment about the DVD.


```c
#define kMaxDVDs             5000
#define kMaxTitleLenght      256
#define kMaxCommentLenght    256
```

```c
char rating[kMaxDVDs];
char title[kMaxDVDs][kMaxTitleLenght];
char comment[kMaxDVDs][kMaxCommentLenght];
```

C provides the perfect mechanism for wrapping all three of these variables in one tidy bundle. A **struct** allows you to associate any number of variables together under a single name. Here is an example of a **struct** declaration:

```c

#define kMaxTitleLenght      256
#define kMaxCommentLenght    256

struct DVDInfo {
 int rating;
 char title[kMaxTitleLenght];
 char comment[kMaxCommentLenght];
};
```

This struct declaration creates a new type called struct DVDInfo. Just as you would use a type like int or float to declare a variable, you can use this new type to declare an individual struct. Here is an example:

```c
struct DVDInfo info;
```

To access the fields of a struct, use the dot operator.

```c
info.rating = 7;
```

An entire struct can be copied to another struct using the assignment (=) operator:

```c
struct Auto {
 char model;
 char year;
} autoA, autoB;

autoA = autoB;
```

# * [StructSize.xproj]()

```c
#include <stdio.h>
#include "StructSize.h"

int main(int argc, const char * argv[]) {
    struct DVDInfo dvdInfo;
    printf("rating field: %4zu bytes \n", sizeof(dvdInfo.rating));
    printf("title field: %4zu bytes \n", sizeof(dvdInfo.title));
    printf("comment field: %4zu bytes \n", sizeof(dvdInfo.comment));
    printf("dvdInfo Sruct: %4zu bytes \n", sizeof(dvdInfo));
}
```

```c
#ifndef StructSize_h
#define StructSize_h

#define kMaxTitleLenght      256
#define kMaxCommentLenght    256

struct DVDInfo {
 int rating;
 char title[kMaxTitleLenght];
 char comment[kMaxCommentLenght];
};


#endif /* StructSize_h */
```

console

```console
rating field:    4 bytes 
title field:  256 bytes 
comment field:  256 bytes 
dvdInfo Sruct:  516 bytes 
Program ended with exit code: 0
```

Concepts

- Alignment
- Padding

# * [Passing a Struct as a Parameter]()

Write the prototype function:

```console
void printDVD(struct DVDInfo *dvdInfo);
```

```c
#include <stdio.h>
#include "StructSize.h"

void printDVD(struct DVDInfo *dvdInfoPointer);

int main(int argc, const char * argv[]) {
    struct DVDInfo dvdInfo;
    printDVD(&dvdInfo);
    return 0;
}

void printDVD(struct DVDInfo *dvdInfoPointer)
{
    printf("rating: %d \n", (*dvdInfoPointer).rating);
    printf("title: %s \n", dvdInfoPointer->title);
    printf("comment: %s \n", dvdInfoPointer->comment);
}
```

```console
rating: -272633120 
title: \376 
comment:  
Program ended with exit code: 0
```

# * [Passing a copy of the struct]()

```c
void printDVD(struct DVDInfo dvdInfo)
{
    printf("rating: %d \n", dvdInfo.rating);
    printf("title: %s \n", dvdInfo->title);
    printf("comment: %s \n", dvdInfo->comment);
}
```

```c
#include <stdio.h>
#include "StructSize.h"

void printDVD(struct DVDInfo dvdInfo);

int main(int argc, const char * argv[]) {
    struct DVDInfo dvdInfo;
    printDVD(dvdInfo);
    return 0;
}

void printDVD(struct DVDInfo dvdInfo)
{
    printf("rating: %d \n", dvdInfo.rating);
    printf("title: %s \n", dvdInfo.title);
    printf("comment: %s \n", dvdInfo.comment);
}
```

```console
rating: -272633120 
title: \376
comment:  
Program ended with exit code: 0
```

# * [ParamAddress.xcode]()

```c
    struct DVDInfo dvdInfo;
    printf("Address of dvdInfo.rating in main(): %28p \n", &(dvdInfo.rating));
```

```console
Address of dvdInfo.rating in main():               0x7ffeefbff270 
Program ended with exit code: 0
```

Prototype function 

```c
void printParamInfo(struct DVDInfo *dvdInfoPointer, struct DVDInfo);
```

Function:

```c
void printParamInfo(struct DVDInfo *dvdInfoPointer, struct DVDInfo dvdInfo)
{
    printf("Address of dvdInfoPointer->rating in printParamInfo is: %10p \n",&(dvdInfoPointer->rating));
    printf("Address of dvdInfo->rating in printParamInfo is: %10p \n",&(dvdInfo.rating));
}
```

Calling the function in main():

```c
struct DVDInfo dvdInfo;
printf("Address of dvdInfo.rating in main(): %28p \n", &(dvdInfo.rating));
printParamInfo(&dvdInfo, dvdInfo);
return 0;
```

Output console

```console
Address of dvdInfo.rating in main():               0x7ffeefbff270 
Address of dvdInfoPointer->rating in printParamInfo is: 0x7ffeefbff270 
Address of dvdInfo->rating in printParamInfo is: 0x7ffeefbff040 
Program ended with exit code: 0
```

# * [Hexadecimal Memory Addresses]()

Computer Engineers love hexadecimal because every two hexadecimal digits is exactly one byte, which makes it well suited for describing values stored in RAM.

C also supports a (rarely used) notation called octal. Octal numbers are base 8, using only the digits 0 through 7. Octal numbers begin with a 0 digit. Thus, the constant 123 is one hundred and twenty three, while the constant 0123 is eighty three (1*8^2+2*8^1+3*8^0 = 1*64+2*8+3). Octal was popular in some of the very earliest computers that uses 6-bit bytes, but when CPUs moved to 8-bit bytes it was no longer conveniente

# * [struct Arrays]()

Just as you can declare an array of chars or ints, you can also declare an array of structs:

```c
#define kMaxDVDs 5000
struct DVDInfo infoDVDs[kMaxDVDs];
```

This declaration creates an array of 5,000 structs of type DVDInfo. The array is named infoDVDs. Each of the 5,000 structs will have the three fields: rating, title, and comment, You access the fields of the structs as you might expect. Here is an example (note the use of the all important . operator):

```c
infoDVDs[10].rating = 9;
```

You now have an equivalent to the first DVD tracking data structure. Where the first model used three arrays, you now have a solution that uses a single array. As you will see when you start writing your own programs, packing your data in a **struct** makes life a bit simpler. Instead of passing three parameters each time you need to pass a DVD to a function, you can simply pass a **struct**.

From a memory standpoint, both DVD tracking solutions cost the same. With three separate arrays, the cost is as follows:


|             |     5,000 | bytes | /*rating array*/  |   |
|-------------|-----------|-------|-------------------|---|
| 5,000 * 256 | 1,280,000 | bytes | /*titke array*/   |   |
| 5,000 * 256 | 1,280,000 | bytes | /*comment array*/ |   |
|             | --------- | ----- |                   |   |
|             | 2,565,000 | bytes |                   |   |	
 

With an array of structs, this is the cost:

```c
5,000 * 513 = 2,565,000 bytes /*Cost of array of 5,000 DVDInfo structs*/
```

So what can you do to cut this memory cost down ? we throught you would never ask!

# * [Allocating Your Own Memory]()

One of the limitations of an array-based DVD tracking model is that arrays are not resizable. When you define an array, you have to specify exactly how many elments make up your array. For example, this code defines an array of 5,000 DVDInfo structs:

```c
#define kMaxDVDs 5000
struct DVDInfo infoDVDs[kMaxDVDs];
```

As mencioned, this array will take up 2,565,000 bytes f memory, whether you use the array to track 1 DVD or 5,000. If you know idvance exactly hoe many elements your array requires, arrays are just fine. In this case of this DVD tracking program, using an array just is not practical. For example, if your DVD collection consist entirely of  test DVD that came with your DVD burner and a rare bootleg of Gilligan's Island outtakes, a 5,000 DVDs ? No matter what number you pick for kMaxDVDs, there's always the chance that it won`t prove large enough.

The problem here is that arrays are just not flexible enought to do what you want. Instead of trying to predict the amount of memory you will need in advance, you need a method that will give you a chunck of memory the exact size of a DVDInfo struct, as you need it. In more technical terms, you need to **allocate** and **manage** you own memory.

---
Note
Allocating your own memory, called **dynamic memory allocation**, is a very important programming skill to learn, An **automatic int variable** is invaluable in writing a **for** loop when you know you are going to need one **int** variable**. But you can't declare variables if you don't know how many or what kinds you are going to need. Your program will have to wait until it reads information from a file, the user asks to create a new document, they click on a button to add a DVD, or they drop in a picture; at that point your program will have to decide what variables it will need to represent those things and allocate them. As you progress to writing more useful programs, most of your data will be dinamically allocated.
---

When your program starts running, your operaring system (MAC OS X, Unix, and Windows are all examples of operating systems) carves out a chunk of memory for the exclusive use of your application. Some of this memory is used to hold things like your application's global variables. As your application runs, some of this memory will be allocated to **main()'s** local variables. When **main()** calls the function, memory is allocated for tha function's local variables. When that function returns, the memory allocated for its local variables is **freed up** (sometimes called **deallocated** or **released**). This memory becomes available to be allocated all over again. It is just like recycling.

In the next few sections, you will leran about some functions you can call to **allocate** a block of memory and to free that memory (**return in to the pool of available memory**). When your are don with it. Ultimately, you will combine these functions with a data structture called a **linked list** to provide a more memory-efficient, and more flexible, alternative to the array.

# * [Using malloc()]()

The Standard Library function of **malloc()** allows you to allocate a block of memory of a specified size. To access **malloc()**, you need to include the file **stdlib.h**.

```c
#include<stdlib.h>
```

**malloc()** takes a single parameter, the size of the requested block, in byes.
**malloc()** returns a pointer to the newly allocated block of memory. Here is the function prototype:

```c
void *malloc( size_t size );
```

The block of memory comes from a vast reservoir of memory called the **heap**. The heap consist of most of the unused addresses in your computer  - those not already used by your program's code, **static and automatic variables**, and some miscellaneous addresses reserved by the operating system.

If **malloc()** can't allocate a block of memory the size you requested, it returns a pointer with the value NULL. **NULL** is a constant, defined to have a value of zero, used to specify an invalid pointer. In other words, a pointer with a value o NULL does not point to a legal memory address. You learned about NULL in Chapter 7. Now you will get a chance to use it.

You might be scratching your head over **malloc()**'s return type, void*. C allows you to declare a pointer to void, It might appear **oxymoronic** (a pointer to nothing), but it turns out to be very useful. C interprets a void* as a **"pointer to a variable of unknown type"**. It is not that the pointer points to nothing; it points to something but the compiler does not know what.

You can use a void pointer like any other pointer. You can assign it an address, pass it as a variable, and so on. The only thing you can't do is this:

```c
void *nothing;
*nothing = 1;
```

You can't assign anything to the **"value"** that nothing points to because the compiler does not know what that is. **Is it an int?** A float ? A struct of some kind ?

So what good are void pointers ? Bear with us and you will find out.

# * [Converting the Type Returned by malloc()]()

Here is a code fragment that allocates a single **DVDInfo struct**:

```c
struct DVDInfo *dvdInfoPointer;
dvdInfoPointer = malloc(sizeof(struct DVDInfo));
```

In general, you will convert the **void** pointer returned by **malloc()** to the pointer type you really want. Here is how it is typically done. The first line of code declares a new variable, dvdInfoPointer, which is a pointer to a DVDInfo struct. At this time, dvdInfoPointer does not point to a DVDInfo struct. You have just told the compiler that dvdInfoPointer is designed to point to a DVDInfor struct.

The second line of the code calls **malloc()** to allocate a block of memory the size of a DVDInfo struct. The **sizeof** operator results in a **size_t** integer,the exactly type you need to pass as a parameter to **malloc()**. How convenient!

On the right side of the **=** operator is a void * and on the left side is a struct DVDInfo *. The compiler will normally complain if you try to assign a pointer of one type to a pointer of a different type. Consiidere the confution thatcould result if you set a pointer to a **char** to the address of an **int**.

The compiler makes an exception for void pointers. It allows you to assign a vooid pointer to any kind of pointer, and any kind of pointerca be assigned to a void pointer. In effect, a void * is a wildcard pointer trhat can point to anytthing in memory. C trusts that you know what it actually poins to.

So you could have used a **typecast** here to make this more explicit:

```c
dvdInfoPointer = (struct DVDInfo *)malloc(sizeof(struct DVDInfo));
```

Thowgh this **explicit typecaste** is not strictly necessary, it makes your intenstions quite crear and allows the compiler to step in with a warning if you have got your types mixed up. Doenn't worry if this is confusing. You will learn all about [typecasting in Chapter 13]()

# * [Calloc()]()

An alternative to the malloc() function is calloc(). calloc() also allocates a block of memory, exactly the way mallo() does, but it fills that block of bytes with zeros before it returns.

# * [Using the allocated Memory Block]()

If **malloc()** succeded, dvdInforPointer points to a struct of type DVDInfo. For the duration of the program, you can use dvdInfoPointer to access the fields of this newly allocated struct:

```c
dvdInfoPointer->rating = 7;
```

You need to understand the difference between a **block of memory** allocated using **malloc()** and a **block of memory that corresponds to a local variable**. When a function declares a local variable, the memory associated with that variable is temporary. As soon as the function exist, the block of memory associated with that memory **is returned to the pool of available memory**.

**A block of memory that you allocate using malloc()** sticks around until you specifically return it to the pool of available memory (**heap**) or until your program exists.
