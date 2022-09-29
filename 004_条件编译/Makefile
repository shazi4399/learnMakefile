

.PHONY: build

build: libmylib.a

libmylib.a: sayhello.o saynihao.o
	ar crv $@ saynihao.o sayhello.o

sayhello.o: sayhello.cpp
	g++ -c sayhello.cpp

saynihao.o: saynihao.cpp
	g++ -c saynihao.cpp


