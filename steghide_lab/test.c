#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>

int main() {
    const char *filename = "input.jpg";
    DIR *dir;
    struct dirent *entry;
    
    dir = opendir("."); // Mở thư mục hiện tại
    if (dir == NULL) {
        perror("khong the mo thuc muc");
        return 1;
    }
    
    while ((entry = readdir(dir)) != NULL) {
        if (strcmp(entry->d_name, filename) == 0) {
            printf("co\n");
            closedir(dir);
            return 0;
        }
    }
    
    printf("ko\n");
    closedir(dir);
    return 0;
}
