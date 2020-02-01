APP_PLATFORM:= android-15
APP_ABI := arm64-v8a 
APP_STL := c++_shared
APP_CPPFLAGS := -frtti -std=c++11 -fsigned-char
APP_LDFLAGS := -latomic
# NDK_TOOLCHAIN_VERSION := 4.9