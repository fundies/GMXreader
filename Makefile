SCHEMAS := $(shell find -name '*.proto' -printf '%P\n')
SOURCES := $(addprefix codegen/,$(SCHEMAS:.proto=.pb.cc))
OBJDIRS := ./codegen

test: $(OBJDIRS)
	protoc -I=./ --cpp_out=./codegen/ $(SCHEMAS)
	g++ -g -std=c++11 -Icodegen/ main.cpp $(SOURCES) -o gmxReader -lpugixml -lprotobuf

$(OBJDIRS):
	mkdir -p $@
