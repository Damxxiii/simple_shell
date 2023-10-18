#include <stdio.h>
#include <stdlib.h>

int setenv(const char *name, const char *value, int overwrite) {
    if (overwrite == 0 && getenv(name) != NULL) {
        fprintf(stderr, "Variable %s already exists\n", name);
        return -1;
    }

    char *env_var = malloc(strlen(name) + strlen(value) + 2);
    sprintf(env_var, "%s=%s", name, value);
    putenv(env_var);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int unsetenv(const char *name) {
    if (getenv(name) == NULL) {
        fprintf(stderr, "Variable %s does not exist\n", name);
        return -1;
    }

    char *env_var = malloc(strlen(name) + 2);
    sprintf(env_var, "%s=", name);
    putenv(env_var);

    return 0;
}

