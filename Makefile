OUT = ./sl

$(OUT): simple_lisp.cpp
	clang++ simple_lisp.cpp -o $(OUT) -g -std=c++11 -DSL_DEBUG

clean:
	rm -rf $(OUT)

.PHONY: clean
