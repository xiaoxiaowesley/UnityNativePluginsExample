# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_LIB_SRCS 变量
# Find all source file in current directory
# and save its name to value named DIR_LIB_SRCS
aux_source_directory(. DIR_LIB_SRCS)

# 生成链接库
# Generate static library
add_library (MathFunctions ${DIR_LIB_SRCS})
