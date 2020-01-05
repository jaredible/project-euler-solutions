TARGETS = p1 p2 p3 p4 p5 p6 p7

all: $(TARGETS)

$(TARGETS): %: %.c

clean:
	rm -f $(TARGETS)