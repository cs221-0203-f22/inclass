int main(int argc, char **argv) {
    char *pc;  // doesn't point to allocated memory
    if (argv[1] > 1) {
        strcpy(pc, argv[1]);
    }
    return 0;
}


// unbounded memory copy
// fix with strncpy() or strlen() + malloc()
int main(int argc, char **argv) {
    char *buf = malloc(strlen(argv[1]) + 1);

    if (argc > 1) {
        strncpy(buf, argv[1];
    }
    return 0;
}
