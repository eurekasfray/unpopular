# Integer parser

Last modified: Nov 6, 2012

## Intro

In trying to practise programming and algorithms, I've created an integer parser. Such a parser is useful in compiler/assembler parsers and other tools that have the job of recognizing numbers such as a calculator.

## Syntax

The syntax of an integer is specified by the following EBNF:

```
int = digit [digit] ;
digit = "0" | "1" | "2" | "3" | "4" | "5" | "6" | "7" | "8" | "9" ;
```

## Working

The parser works by using a deterministic finite-state machine (FSM). The FSM has three states --- S1 start, S2 main, and S3 end.

```
                        ,--|digit|--.
                       |            |
                        \          /
                         \        v    .-------------|EOS; error=false|------------.
  .----.                   .----.     /                                             \     .----.
 (  S1  )-----|digit|---->(  S2  )---+                                               +-->(  S3  )
  '----'                   '----'     \                                             /     '----'
                                       '-----|any other character; error=true|-----'

```

The initiating state, *S1*, the machine gets the first character from the input and checks to see if the character is a digit. If the character is in fact a digit, then the machines switches to state *S2* where it will continue to check the remaining input. However if the character is not a digit, the machine sets the error flag and then switches to the ending state *S3*.

The main state, *S2*, accepts either digits or the EOS (end-of-string) character. This state now continually checks to see if the incoming stream of characters are digits. Once finished, it moves to the terminal state *S3*, leaving the error flag untouched.

## Notes

I didn't have to create the FSM with three states; instead, I could have created an FSM that has only two states, which would be *S2* and *S3*. However, the FSM used in the integer parser was adopted from the identifier parser I created, in that the machine would check to see if the first character of the identifier is in fact a letter and not a digit. If the first character is a letter then the machine continues to check that the characters are letters and digits. So this FSM could have simply worked with two states, but for the sake of exploring, experimenting and understanding an the concept of FSM and their implementations, I created it with an unnecessary state.
