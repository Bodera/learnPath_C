# Pointer definition

Before we go any further you need to be sure that you understand exactly what a pointer is.

In many languages such as [Java](https://java.com/en/download/faq/whatis_java.xml), [Ruby](https://www.ruby-lang.org/en/), [C-Sharp](https://docs.microsoft.com/en-us/dotnet/csharp/), and others, you either never come across pointers at all, or only in very special circumstances.

Behind the scenes all those languages use pointers but they hide them from the programmer. And that's because pointers can be quite hard to use and if you use them incorrectly they can cause all sorts of errors.

In C on the other hand, there's no getting away from pointers, that's because C operates at a relatively low-level. By low-level it means that it's a language that makes it fairly easy to access the operating system and the computer hardware.

On the plus side that means that you can optimize your programs to make them very fast and very efficient. On the downside it means that C does not protect your programs from making silly or even dangerous mistakes.

And one of the commonest causes of programmer errors in C are pointers. So let's be clear, what exactly is a pointer?

Put simply, a pointer is a variable that refers to, or points to, an address in your computer's memory. Ok so now you need to be sure that you understand what an address is.

Think of the computer memory as a long series of locations where bits of data are stored on the location or position in memory where some piece of data is stored, is an address.

So if you want to find a specific piece of data in memory you need to find the address where it's stored. And that's what a pointer does.

If you find that hard to visualize, try thinking how you'd get something that's been stored somewhere in the real world.

Imagine a long road with lots of warehouses on it. Each warehouse contains an artifact. I know that a specific artifact has been stored in a specific warehouse and I want you to get it for me. But how are you going to locate the warehouse on a road where there are hundreds, thousands, or even millions of different warehouses? Well of course I need to give you the address!

![Warehouse-address](./assets/images/warehouse-address.png)

And here it is, so I've written the address Warehouse 18 on this index card. Now you have the address so you can go to the correct location.

And in computer terms this card is like a pointer variable, and it's value is an address. By using the pointer to locate the address, that is a precise location in computer memory, I can access data stored at that location or alternatively I can store a new piece of data at that location.

In the next lesson we will see how to do this in a C program.
