# Object-oriented-like programming in C?
### Last updated: 2014/06/01


## Introduction

Since starting object-oriented programming, the programming paradigm has drawn me in by its attractive simplicity. It gives me, the programmer, a clearer understanding of the solution to the problem. I am able to have an abstract vision of the solution when thinking of each element of the problem as an object. I believe that thinking in an object-oriented sense has allowed me to improve as a programmer (though I may be wrong, and may have gotten worse).

This afternoon, I emulated the principles of object-oriented programming using C, in a sense:

I was able to emulate a class, the blueprint for an object. I was also able to allow an object to have a method.

To emulate an object class, I realized that structs are essentially objects. As each object can have properties, it is the same for structs where each `struct` can have one or more members.

As for object methods, I have been able to allow an object to have methods. When a `struct` is defined, a function can be defined as a pointer.


## Object classes

An object class in this emulation is defined as a `struct`. Each member of the `struct` can either be an object property or an object method.

For example, to define an object called 'Person', we write it as a `struct`. The following object, Person, can have a name and can speak.

```
struct person {
    const char *name;
    void (*say)(const char *speech);
};
```

The equivalent of the above in an object-orient programming language would look as follows:

```
class Person
{
    string name;

    void say(string speech) {
        system.out(speech);
    }
}
```

(I haven't really programmed in any other object-oriented language, other than PHP. So, please excuse if my code doesn't look as genuine as any object-oriented language).


## Object properties

### Initializing properties

The downfall to this emulation is that properties cannot be initialized within `struct`, because C does not allow it. However, to initialize properties, the property must be initalized before the main meat of the program begins.

## Object methods

### Initializing methods

The greater downfall to this emulation is that methods cannot be initialized within the struct declaration. A method of an object must be assigned address of the method function.

### Conventions

Because methods are not defined in scope of a class, as would be done in a real object-oriented language, we need to develop and use some conventions in order to keep the program out of any same-name conflicts. If it were than we could apply scope, then two object classes could have methods of the same name. However, because object methods are just functions in the C program, then we use a convention to make each function unique to their respective object classes.

The method applied here is to prepend the name of the object to the object method. For instance, an object called `Person` has the method `say()`; so, the `say()` method of the `Person` object will be named `person_say()`.
