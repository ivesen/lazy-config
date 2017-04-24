# lol, makefiles in 2017
# maybe we should rename this file to Meme
# and just make it work anyway

# Compiles a debug object file
compile_debug:
	gcc -o out/lc-debug src/* -c

# Compile and run a suite of tests, think of unit-testing.
# That is, if we do those one day.
#test:
#	gcc -o lc-test 

.PHONY: clean
clean:
	rm out/*