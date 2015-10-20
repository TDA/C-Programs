CFLAGS=-Wall -g
run:
	gcc-4.9 ${CFLAGS} $(1).c -o $(1).out
	-./$(1).out

val:
	gcc-4.9 ${CFLAGS} $(1).c -o $(1).out
	valgrind ./$(1).out --track-origins=yes

clean:
	rm -rf $(1).out*
	rm -rf $(1).dSYM*

git:
	make clean $(1)
	git s
	git a
	git c "Some random git push"
