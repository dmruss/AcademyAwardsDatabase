*******************************************************
*  Name      :  David Russell        
*  Student ID:  101147569     
*  Class     :  CSC 2421           
*  Final Project                
*  Due Date  :  December 12, 2019
*******************************************************


                 Read Me


*******************************************************
*  Description of the program
*******************************************************

This program is a database management system for the Academy Awards.
Two files, one for movies and one for actors, are read from a file into
separate vectors.  Then, the user may search, modify, sort, display, and save 
the records. Currently, all functions work in this program and compile
successfully on csegrid.

*******************************************************
*  Source files
*******************************************************

Name:  main.cpp
   Main program.  This runs menu event loop.

Name:  function.h
   Contains the class declarations for the Actor class
and movie class.  Also contains the function declarations for 
non-member functions and the menu function.

Name: function.cpp
   Implements the movie class.  Also implements the menu function.

Name: ActorFunctions.cpp
   Implements the actor class.
   


   
*******************************************************
*  Circumstances of programs
*******************************************************

   The program runs successfully.  
   
   The program was developed and tested on Visual Studio version 16.2.3.  It was 
   compiled, run, and tested on gcc version 6.3.1 on csegrid.cudenver.pvt.


*******************************************************
*  How to build and run the program
*******************************************************

1. Uncompress the homework.  The homework file is compressed.  
   To uncompress it use the following commands 
       % unzip [russelldavidFinalProject.zip]

   Now you should see the files:
        main.cpp
        functions.h
	ActorFunctions.cpp
	functions.cpp
	actor-actress.csv
	pictures.csv
        makefile
        README.txt
	FinalReport.pdf

2. Build the program.

    Compile the program by:
    % make

3. Run the program by:
   % ./[awards]

4. Delete the obj files, executables, and core dump by
   %./make clean
