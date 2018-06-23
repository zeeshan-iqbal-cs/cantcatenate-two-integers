# Cancatenate Two Integers
this code is written to cancatenate two positive integers. 

## compile and deploy
This example is for Linux Enviroment.
1) clone or download this repo.
2) Extract if repo was ownloaded in .zip formate
3) Open terminal inside repo.
4) Compile code using g++ compilor
```console 
username@computer:~$ g++ Source.cpp -o out.com 
```
5) Run compiled code
```console 
username@computer:~$ ./out.com 
```
## Programme flow
1) Input first number.
2) Input Second number.
3) output will be cancatenation of these two numbers.

## working 
1) Find in which power of ten second number is.
2) Append that many number of zeros with forst number.
3) Add second number in first number.

for examle:

num1 = 330 and num2 550

550 in power of 10 = 1000

330 * (1000) = 330000

330000 + 550 = 330550

## Platform
This code is cross platform and can run on all major enviroment (Linux, Windows, MAc) and all Major compilers.
But tested on Dev c++ (Windows), Visual Studio(Windows) and g++ (Linux)

## More . . .
This join can also work for two negative numbers but answer will be negative but will not work for numbers with opposite signs.
