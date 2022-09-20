all: libprocess_log.o harness.o libprocess_log.a
libprocess_log.o:
	cc -c libprocess_log.c
harness.o:
	cc -c harness.c
libprocess_log.a:
	ar cr libprocess_log.a libprocess_log.o harness.o
clean:
	rm *.o *.a
