# These makefiles work by using $(addsuffix) to add the appropriate suffix
# to each target and then $* inside the target yields the "stem" of the match.
# since the suffix is used as the matching criteria, the stem is the 
# name of the subdirectory and will yield something like $(MAKE) -C ./ex-01/ clean

.PHONY : default clean test $(SUBDIRS)

SUBDIRS := $(wildcard */.)

default: $(addsuffix .default,$(SUBDIRS))
clean: $(addsuffix .clean, $(SUBDIRS))
test: $(addsuffix .test, $(SUBDIRS))

%.default:
	$(MAKE) -C $*

%.clean:
	$(MAKE) -C $* clean

%.test:
	$(MAKE) -C $* test