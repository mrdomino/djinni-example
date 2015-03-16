# Bootstrapping makefile. Generates all prerequisites for gyp + ninja to run.
all: ninja

NINJAFLAGS = -v

DJINNI_START=djinni/src/target/start
DJINNI_RUN=djinni/src/run
GYP=gyp/gyp


$(DJINNI_RUN) $(GYP):
	git submodule update --init --recursive

$(DJINNI_START): $(DJINNI_RUN)
	djinni/src/build

STAGE1=.STAGE1
STAGE1_DEPS=build.gyp common.gypi $(DJINNI_RUN) $(DJINNI_START) $(GYP) \
            Makefile platform.djinni
$(STAGE1): $(STAGE1_DEPS)
	touch $@
djinni_outputs.gypi: $(STAGE1)
	rm -rf out
	$(GYP) --depth=. -fninja -Rbootstrap
	ninja -C out/Default
	rm -rf out

STAGE2=.STAGE2
STAGE2_DEPS=$(STAGE1) djinni_outputs.gypi
$(STAGE2): $(STAGE2_DEPS)
	touch $@
out/Default/build.ninja: $(STAGE2)
	$(GYP) --depth=. -fninja


ninja: out/Default/build.ninja
	ninja -C out/Default $(NINJAFLAGS)

clean:
	rm -rf out

.PHONY: all clean ninja
