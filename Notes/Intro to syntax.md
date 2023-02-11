# Intro to C++ Syntax

## 1. Starting off with (**#include**)
   ![image](https://user-images.githubusercontent.com/86865554/218273245-d434c1d3-2f2b-48dd-97df-3f5674c3d1cd.png)

   - **#include iostream**: **Header file library**
   - Helps us work with input and output objects e.g-- cout
   - Add functionality to C++

## 2. using namespace std

   - This prevents us from continuous usage of std::

## 3. int main() function 
![image](https://user-images.githubusercontent.com/86865554/218273449-13f4ecd0-a130-4598-b0b5-0af3bd9d98f2.png)


   - Beginning of main function
   - Alwats to be executed first
   - Enclosed with '{}'
    

## 4. return 0
  - Shows end of main function.
  - Program termination if no error shown.
  
## 5. Comments
  - Single-line comments --> //
  - Multi-line comments --> /* (text) */

## First Code
    #include <iostream>
    
    using namespace std;
    
    int main(){
      cout<<"Hello World"<<endl;
      
      return 0;
    }

# I/O Library iostream.h
  1. Data treated as streams of bytes. The I/O library manages transfer of these bytes.
  2. Interface between user level & Lowest impolementation level
  3. Predefined set of operations
  
  ## Predefined streams in I/O Library
    1. cin --> Standard input
    2. cout --> Standard output
    3. cerr --> standard Error/console error
    
  ## Using I/O Operators
    1. Output Operator --> "<<"
    2. Input Operator --> ">>"
