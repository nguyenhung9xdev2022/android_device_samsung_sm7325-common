#ifndef INIT_SEC_H
#define INIT_SEC_H

#include <string.h>

enum device_variant {
    VARIANT_A736N = 0,
    VARIANT_A736B,
    VARIANT_M526BR,
    VARIANT_M526B,
    VARIANT_MAX
};

typedef struct {
    std::string model;
    std::string codename;
} variant;

static const variant international_models = {
    .model = "SM-A736N",
    .codename = "a73xq"
};

static const variant international_models_m52 = {
    .model = "SM-M526BR",
    .codename = "m52xq"
};

static const variant america_models = {
    .model = "SM-A736B",
    .codename = "a73xq"
};

static const variant america_models_m52 = {
    .model = "SM-M526B",
    .codename = "m52xq"
};

static const variant *all_variants[VARIANT_MAX] = {
    &international_models,
    &international_models_m52,
    &america_models,
    &america_models_m52
};

#endif // INIT_SEC_H

