COMPILE_DIR = compiled

all: run

build: hello_world.asm
	mkdir -p $(COMPILE_DIR)
	nasm -f elf64 -o $(COMPILE_DIR)/hello_world.o hello_world.asm
	ld -o $(COMPILE_DIR)/hello_world $(COMPILE_DIR)/hello_world.o
	chmod u+x $(COMPILE_DIR)/hello_world

run: build
	@echo "Running hello_world..."
	@echo ""
	./$(COMPILE_DIR)/hello_world

clean:
	rm -rf $(COMPILE_DIR)