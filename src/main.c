#include "../inc/pathfinder.h"

int main(int argc, char **argv) {  
    mx_find_errors(argc, argv);
    char *file = argv[1];
    char *str = mx_file_to_str(file);//файл в строку
    char **res = mx_separate_string(str);//массив строк
    char **unique = mx_unique_islands(res);
    mx_matrix_dst(unique, res);

    return 0;
}
