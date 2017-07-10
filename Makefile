SRC = helloworld.cpp

all:
	g++ $(SRC)

g++:
	g++ $(SRC) -o helloworld

gcc:
	gcc $(SRC) -lstdc++ -o helloworld
# /usr/lib/libstdc++.so.6 -> libstdc++.so.6.0.13
# 无libstdc++.a

c++:
	c++ $(SRC) -o helloworld
# /usr/bin/c++ -> /etc/alternatives/c++ -> /usr/bin/g++ -> g++-4.4

CPP:
	gcc -E $(SRC)

CPP2:
	gcc -E $(SRC) -o helloworld.ii

S:
	gcc -S $(SRC)

clean:
	rm -rf *.out helloworld *.ii *.s

# Linux 环境下使用g++编译C++
# http://blog.csdn.net/hnyzwtf/article/details/44674145
