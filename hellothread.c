#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

void* run(void* arg) {
    char* threadName = arg;
    for (int i = 0; i < 5; ++i) {
        printf("%s: %d\n", threadName, i);
        sleep(0);
    }
    return NULL;
}

int main() {
    printf("Launching threads\n");
    pthread_t thread1;
    pthread_create(&thread1, NULL, run, "thread 1");

    pthread_t thread2;
    pthread_create(&thread2, NULL, run, "thread 2");

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    printf("Threads complete!\n");
}
