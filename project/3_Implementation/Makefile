MAIN_APP = project
MAIN_HEX_PATH = F:\temp\M2-EmbSys\Project\3_Implementation\src\$(MAIN_APP).hex

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif
CC = avr-gcc -std=c99
OBJCOPY = avr-objcopy.exe
CFLAGS = -g -Os -o
LFLAGS = -Os -mmcu=atmega328 -o
HFLAGS = -j .text -j .data -O ihex
SRC = src/$(MAIN_APP).c src/smartlock.c/smartlockmain.c
INCLUDE =-Iheader\
TEST_SRC =Unity_Test/test_smartlock.c\
Unity_Test/smartlocktesting.c\
Unity_Test/unity.c
Burn : Build
	$(AVRDUDE) $(DUDEFLAGS) 

Build : $(MAIN_APP).elf
	$(OBJCOPY) $(HFLAGS) $< $(MAIN_APP).hex
	
$(MAIN_APP).elf: $(MAIN_APP).o
	$(CC) $(SRC) $(INCLUDE) $(LFLAGS) $@
	
$(MAIN_APP).o:$(SRC)
	$(CC) $^ $(INCLUDE) $(CFLAGS) $@

build_test : 
	gcc $(TEST_SRC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm	
run_test : build_test
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

staticcheck : 
	cppcheck --enable=all -iunity .