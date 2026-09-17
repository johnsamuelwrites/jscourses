#include <stdio.h>

union coord_gps {
    float valuers[2];
    struct {
        float latitude, longitude;
    };
};

int main() {
    union coord_gps position;

    printf("gps -trace %zu\n", sizeof(position));
    position.valuers[0] = 35.34;
    position.valuers[1] = 70.34;

    printf("lat: %f, lon: %f\n", position.latitude, position.longitude);

    union coord_gps trace_positions[10] = {0};

    trace_positions[0].valuers[0] = 35.34;
    trace_positions[0].valuers[1] = 70.34;

    printf("trace[0]: lat: %f, lon: %f\n",  trace_positions[0].latitude,  trace_positions[0].longitude);
    return (0);
}