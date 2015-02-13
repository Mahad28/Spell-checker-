all:spellcheck
spellcheck: main.o Dictionary.o hash.o SpellChecker.o
	g++ main.o Dictionary.o hash.o SpellChecker.o  -o spellcheck
Dictionary.o: Dictionary.cpp Dictionary.h hash.h
	g++ -c Dictionary.cpp

main.o: main.cpp Dictionary.h SpellChecker.h
	g++ -c main.cpp

hash.o: hash.cpp hash.h
	g++ -c hash.cpp

SpellChecker.o: SpellChecker.cpp SpellChecker.h Dictionary.h
	g++ -c SpellChecker.cpp

clean:
	rm -rf *o spellcheck
