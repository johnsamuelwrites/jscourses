CC = gcc
CFLAGS = -Wall -Wextra -pedantic-errors
BUILD = build
PROGRAMS = $(BUILD)/c89 $(BUILD)/c99 $(BUILD)/c11 $(BUILD)/c17 $(BUILD)/threads $(BUILD)/c23

.PHONY: all run versions clean
all: $(PROGRAMS)

$(BUILD):
	mkdir -p $@

$(BUILD)/c89: 01_c89.c | $(BUILD)
	$(CC) $(CFLAGS) -std=c90 $< -o $@
$(BUILD)/c99: 02_c99.c | $(BUILD)
	$(CC) $(CFLAGS) -std=c99 $< -o $@
$(BUILD)/c11: 03_c11.c | $(BUILD)
	$(CC) $(CFLAGS) -std=c11 $< -o $@
$(BUILD)/c17: 03_c11.c | $(BUILD)
	$(CC) $(CFLAGS) -std=c17 $< -o $@
$(BUILD)/threads: 04_c11_threads.c | $(BUILD)
	$(CC) $(CFLAGS) -std=c11 -pthread $< -o $@
$(BUILD)/c23: 05_c23.c | $(BUILD)
	$(CC) $(CFLAGS) -std=c23 $< -o $@

run: all
	@set -e; for programme in $(PROGRAMS); do echo "$$programme"; ./$$programme; done

versions: | $(BUILD)
	@set -e; for norme in c90 c99 c11 c17 c23; do \
	    echo "$$norme"; \
	    $(CC) $(CFLAGS) -std=$$norme 06_version.c -o $(BUILD)/version-$$norme; \
	    ./$(BUILD)/version-$$norme; \
	done

clean:
	rm -rf $(BUILD)
