# Identifier parser notes

## Syntax

The syntax for an identifier is as follows. An identifier's legal
characters are of numerical digits, the lowercase and uppercase
letters of the alphabet, and lastly, the symbol character the
underscore. An identifier must begin with either an letter
or the a symbol character; an identifier cannot begin with a digit.

```
<identifer> ::= <init> | <init> <tail>
<tail>      ::= <other> | <other> <rest>
<rest>      ::= <letter> | <digit> | <symbol>
<init>      ::= <letter> | <symbol>
<letter>    ::= "A" | ... | "Z" | ... | "a" | ... | "z"
<digit>     ::= "1" | "2" | "3" | "4" | "5" | "6" | "7" | "8" | "9"
<symbol>    ::= "_"
```

*Fig. Identifier grammar written in BNF*

## FSM state diagram

```
                                             ,----------------.
                                            /                  \
            +----+                    +----+                    +
 start ---> | S1 |---{ A-Z,a-z,_ }--->| S2 |<---{ A-Z,a-z,0-9,_ }
            +-+--+                    +--+-+
              |                          |
              |                          |
              |                          |
        {anything else}            {anything else}
              |                          |
              |                          |
              |                          |
           +--v--+                       |
           | Err |<----------------------+
           +-----+
```
