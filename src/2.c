  int getRandomNumber(int min, int max) {
    if (min > max || max < min) {
        return -1;
    }
    int random = rand() % (max - min + 1) + min;
    return random;
}

float getRandomFloat(float min, float max) {
    if (min > max || max < min) {
        return -1.0f;
    }
    float random = ((float)rand() / RAND_MAX) * (max - min) + min;
    return random;
}