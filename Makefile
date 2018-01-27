test:
	protoc game.proto --cpp_out=./
	g++ -g -std=c++11 main.cpp game.pb.cc -o gmxReader -lpugixml -lprotobuf
