
SUBDIRS += lab00 lab01 lab02 lab03
SUBDIRS += lab04 lab05 lab06 lab07
SUBDIRS += lab08 lab09 lab10 

.PHONY: clean all
all clean: 
	for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir -f Makefile $@; \
	done
