cmake_minimum_required(VERSION 3.23)
project(huffman_algorithm_master C)

set(CMAKE_C_STANDARD 11)

include_directories(huffman_algorithm)

add_executable(huffman_algorithm_master
        huffman_algorithm/defines.h
        huffman_algorithm/huffmanTree.c
        huffman_algorithm/huffmanTree.h
        huffman_algorithm/main.c
        huffman_algorithm/nodes.c
        huffman_algorithm/nodes.h
        huffman_algorithm/priority_queue.c
        huffman_algorithm/priority_queue.h
        huffman_algorithm/write_read_file.c
        huffman_algorithm/write_read_file.h)
