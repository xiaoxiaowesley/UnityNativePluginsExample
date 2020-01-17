cmake_minimum_required(VERSION 2.0)

# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_LIB_SRCS 变量
# Find all source file in current directory
# and save its name to value named DIR_LIB_SRCS
aux_source_directory(. DIR_LIB_SRCS)

# 生成链接库
# Generate static library
add_library (MathFunctions SHARED ${DIR_LIB_SRCS})

set_target_properties(MathFunctions PROPERTIES
    FRAMEWORK TRUE
    FRAMEWORK_VERSION A
    MACOSX_FRAMEWORK_IDENTIFIER cn.tvm.tvm_model
    # MACOSX_FRAMEWORK_INFO_PLIST Info.plist
    # "current version" in semantic format in Mach-O binary file
    VERSION 1.0.0
    # "compatibility version" in semantic format in Mach-O binary file
    SOVERSION 1.0.0
    PUBLIC_HEADER MathFunction.h
    XCODE_ATTRIBUTE_CODE_SIGN_IDENTITY "iPhone Developer"
    RESOURCE "${RESOURCE_FILES}"
)