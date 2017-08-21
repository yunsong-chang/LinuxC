all:
	g++ hellospeak.cpp speak.cpp -o hellospeak

obj:
	g++ -c hellospeak.cpp
	g++ -c speak.cpp
	g++ hellospeak.o speak.o -o hellospeak

obj2:
	g++ -c hellospeak.cpp -o hs.o
	g++ -c speak.cpp -o s.o
	g++ hs.o s.o -o hellospeak

clean:
	rm -rf *.out hellospeak *.o

# Linux 环境下使用g++编译C++
# http://blog.csdn.net/hnyzwtf/article/details/44674145
