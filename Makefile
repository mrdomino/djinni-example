all: ninja

bootstrap:
	gyp/gyp --depth=. --format=ninja --root-target=bootstrap
	ninja -C out/Default
	rm -rf out

djinni_outputs.gypi: platform.djinni make_djinni_outputs.py gyp/gyp
	$(MAKE) bootstrap

out/Default/build.ninja: build.gyp djinni_outputs.gypi platform.djinni gyp/gyp
	gyp/gyp --depth=. --format=ninja

ninja: djinni/src/run out/Default/build.ninja
	ninja -C out/Default

gyp/gyp djinni/src/run:
	git submodule update --init --recursive

.PHONY: all bootstrap ninja
