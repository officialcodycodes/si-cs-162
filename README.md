# CS 162 SI Table

The official repository for Oregon State University's CS 162 in-person SI table.  This contains folders with C++ activities relating to memory, OOP, etc.

Use this repository to access all of the activities and resources for the CS 162 SI table for Fall 2024!

## Starting an Activity
To start one of the weekly activities, you will want to open the corresponding weekly folder for that week.  Then, copy the GitHub link and paste it into the website linked below. 

### Downloading a folder from GitHub
To download a folder from this repository, please use [the following guide](https://www.wikihow.com/Download-a-GitHub-Folder).

Essentially, paste a link from one of the GitHub folders into this website, and it will download a ZIP folder to your machine.  This is similar to a wget command, but with GitHub.
https://download-directory.github.io/

## Solutions
Solutions for each table will be posted at the SI leaders' discretion.  This will likely be at the end of the week after all tables have been completed.  Practice exam solutions will be sent via emails.

## Valgrind
To use Valgrind to check your code for memory leaks, use the following command:
`valgrind ./prog` --> use the executable name in place of "prog"

Flags for valgrind [sourced from StackOverflow](https://stackoverflow.com/questions/5134891/how-do-i-use-valgrind-to-find-memory-leaks) :
```
valgrind --leak-check=full \
         --show-leak-kinds=all \
         --track-origins=yes \
         --verbose \
         --log-file=valgrind-out.txt \
         ./executable exampleParam1
```

### Flag Details
* `--leak-check=full`: "each individual leak will be shown in detail"

* `--show-leak-kinds=all`: Show all of "definite, indirect, possible, reachable" leak kinds in the "full" report.

* `--track-origins=yes`: Favor useful output over speed. This tracks the origins of uninitialized values, which could be very useful for memory errors. Consider turning off if Valgrind is unacceptably slow.

* `--verbose`: Can tell you about unusual behavior of your program. Repeat for more verbosity.

* `--log-file`: Write to a file. Useful when output exceeds terminal space.
