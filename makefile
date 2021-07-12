all:
	mkdir diagonal/
	cd src/ && make
	cd src/ && make clean
clean:
	rm -r diagonal
run:
	cd diagonal && ./matrix


