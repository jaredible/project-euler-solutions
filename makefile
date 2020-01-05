TARGETS = p1 p2 p3

all: $(TARGETS)

$(TARGETS): %: %.c

clean:
	rm -f $(TARGETS)