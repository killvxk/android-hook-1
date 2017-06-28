rm=/bin/rm -f
CC=/home/uniking/android/standalone-toolchain/21-arm86/bin/arm-linux-androideabi-g++
PROGNAME=hello
INCLUDES=-I.
CFLAGS=$(INCLUDES) -g -O0 -fPIC -D_LARGE_FILE -I../so
OBJS=hello.o
LDFLAGS=-g -O0 -pie -fPIC -L. -lm -llog -L../so -lElfHook
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
