rm=/bin/rm -f
CC=/home/uniking/android/standalone-toolchain/21-arm86/bin/arm-linux-androideabi-g++
PROGNAME=hello
INCLUDES=-I.
CFLAGS=$(INCLUDES) -g -fPIC -D_LARGE_FILE
OBJS=hello.o
LDFLAGS=-pie -fPIC -L. -lmyadd
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
