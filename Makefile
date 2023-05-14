#OBJS: Files to be compiled
OBJS = main.cpp fileio.cpp record.cpp

#OBJ_NAME: Name of the executeable
LINUX_OBJ = simple-macro
WINDOWS_OBJ = simple-macro.exe

#COMPILER_FLAGS: flags to compile with
COMPILER_FLAGS = -w

#LINKER_FLAGS: Flags to link extra libraries to the executable
LINUX_FLAGS = 
WINDOWS_FLAGS = 

#All
all:
	@echo "Type \"make linux\" to compile for linux"
	@echo "Type \"make windows\" to compile for windows"

#Compile for linux
linux: $(OBJS)
	g++ $(OBJS) $(COMPILER_FLAGS) $(LINUX_FLAGS) -o $(LINUX_OBJ)
	@echo "Updating the build number"
	settings/build_number.sh


#Compile for windows
windows: $(OBJS)
	g++ $(OBJS) $(COMPILER_FLAGS) -o $(WINDOWS_OBJ)
	@echo Done
#settings/build_number_w.sh