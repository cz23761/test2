I have created a the system.h header file and in which I have declared a class called System. It simply contains the systems's parameters.

I also created the header disk.h header file. It is a class that represents the hard disks in the system. It contains only variables storing the position and radius of each disk as well as a move and distance method.

The distance method was is a simple calculation that returns the distance between one disk and another. I implemented it in disk.cpp.

I have also created a Makefile that allows for easy compilation of the code in the terminal. It creates an executable called "disk". After running the executable, the results can be visualised by running "view.py" which creates an animated plot of the results.

