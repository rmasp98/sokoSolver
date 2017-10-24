CXX       := g++
LD        := g++
FLAGS	  := -std=c++11 -Wall

SRC_DIR   := src/
BUILD_DIR := build/

SRC       := $(foreach sdir,$(SRC_DIR),$(wildcard $(sdir)/*.cpp))
OBJ       := $(patsubst src/%.cpp,build/%.o,$(SRC))
EXE       := Solver

INCLUDES   = -I include
LIBS += #-lglut -lGL -lGLU -lX11 -lXxf86vm -lpthread -lXrandr -lXi -lglfw -lGLEW -lSOIL -lentityx -lfreetype -lassimp

vpath %.cpp $(SRC_DIR)

define make-goal
$1/%.o: %.cpp
	$(CXX) $(FLAGS) $(INCLUDES) -c $$< -o $$@
endef

.PHONY: all checkdirs clean

all: checkdirs $(EXE)

$(EXE): $(OBJ)
	$(CXX) $(FLAGS) $^ -o $@ $(LIBS)


checkdirs: $(BUILD_DIR)

$(BUILD_DIR):
	@mkdir -p $@

clean:
	@rm -rf build
	@rm -f $(EXE)

$(foreach bdir,$(BUILD_DIR),$(eval $(call make-goal,$(bdir))))
