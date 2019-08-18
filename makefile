defualt : a.exe

a.exe : main.c show.c openfile.c
	gcc show.c openfile.c main.c
	
clean : 
	rm *.exe 
