rm=/bin/rm -f
CC=/home/uniking/android/standalone-toolchain/21-arm86/bin/arm-linux-androideabi-g++
PROGNAME=libElfHook.so
INCLUDES=-I.
CFLAGS=$(INCLUDES) -g -shared -fPIC -D_LARGE_FILE
OBJS=elf_common.o elf_hooker.o elf_module.o main.o
LDFLAGS=-pie -shared -fPIC -lm -llog
all :$(PROGNAME)
%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<
$(PROGNAME) : $(OBJS)
	@echo "-----------------" $(INCLUDES) "-----------------"
	@echo  "Linking $(PROGNAME)......"
	${CC} ${LDFLAGS} -o ${PROGNAME} ${OBJS}
	@echo  "Linking Success!"
clean:
	$(rm) *.o  $(PROGNAME)

