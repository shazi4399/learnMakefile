
test:libtest.so
	gcc test.c -L. -ltest -o test
libtest.so:
	gcc test_a.c test_b.c test_c.c -fPIC -shared -o libtest.so
clean:
	$(RM) *.so
