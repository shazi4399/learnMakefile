test:libSoTest.so
	g++ test.cpp -L. -lSoTest -o test
libSoTest.so:
	g++ SoTest.cpp -fPIC -shared -o libSoTest.so
clean:
	rm -f *.so