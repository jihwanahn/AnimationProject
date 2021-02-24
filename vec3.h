#pragma once

#ifndef _H_VEC3_
#define _H_VEC3_

struct vec3 {
    union {
        struct {
            float x;
            float y;
            float z;
        };
        float v[3];
    };
    inline vec3() : x(0.0f), y(0.0f), z(0.0f){ }
    inline vec3 (float _x, float _y, float _z) :
        x(_x), y(_y), z(_z) { }
    inline vec3(float *fv) :
        x(fv[0]), y(fv[1]), z(fv[2]) { }
};

#endif

#define VEC3_EPSILON 0.000001f

vec3 operator+(const vec3 &l, const vec3 &r) {
    return vec3(l.x + r.x , l.y + r.y, l.z + r.z);
}

vec3 operator-(const vec3 &l, const vec3 &r) {
    return vec3(l.x - r.x, l.y - r.y, l.z - r.z);
}

vec3 operator*(const vec3 &v, float f) {
    return vec3(v.x * f, v.y * f, v.z * f);
}

vec3 operator*(const vec3 &l, const vec3 &r) {
    return vec3(l.x * r.x, l.y * r.y, l.z * r.z);
}
float dot(const vec3 &l, const vec3 &r) {
    return l.x * r.x + l.y* r.y + l.z * r.z;
}