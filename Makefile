all: ninja

GYPFLAGS = --format=ninja --root-target=platform
NINJAFLAGS = -v

CORE = .MAKEFILE-VERSION
$(CORE): Makefile
	touch $@

bootstrap:
	gyp/gyp --depth=. --format=ninja --root-target=bootstrap
	ninja -C out/Default
	rm -rf out

djinni_outputs.gypi: platform.djinni make_djinni_outputs.py gyp/gyp
	$(MAKE) bootstrap

out/Default/build.ninja: build.gyp common.gypi djinni_outputs.gypi platform.djinni gyp/gyp $(CORE)
	gyp/gyp --depth=. $(GYPFLAGS)

ninja: djinni/src/run out/Default/build.ninja $(CORE)
	ninja -C out/Default $(NINJAFLAGS)

gyp/gyp djinni/src/run:
	git submodule update --init --recursive

clean:
	rm -rf out

.PHONY: all bootstrap ninja
