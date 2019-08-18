defualt : a.exe

a.exe : *.c
	gcc *.c
	
clean : 
	rm *.exe 

