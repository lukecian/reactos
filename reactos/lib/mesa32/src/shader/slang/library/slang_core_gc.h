"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"int __constructor (const float _f) {\n"
"    int _i;\n"
"    __asm float_to_int _i, _f;\n"
"    return _i;\n"
"}\n"
"\n"
"bool __constructor (const int _i) {\n"
"    return _i != 0;\n"
"}\n"
"\n"
"bool __constructor (const float _f) {\n"
"    return _f != 0.0;\n"
"}\n"
"\n"
"int __constructor (const bool _b) {\n"
"    return _b ? 1 : 0;\n"
"}\n"
"\n"
"float __constructor (const bool _b) {\n"
"    return _b ? 1.0 : 0.0;\n"
"}\n"
"\n"
"float __constructor (const int _i) {\n"
"    float _f;\n"
"    __asm int_to_float _f, _i;\n"
"    return _f;\n"
"}\n"
"\n"
"bool __constructor (const bool _b) {\n"
"    return _b;\n"
"}\n"
"\n"
"int __constructor (const int _i) {\n"
"    return _i;\n"
"}\n"
"\n"
"float __constructor (const float _f) {\n"
"    return _f;\n"
"}\n"
"\n"
"vec2 __constructor (const float _f) {\n"
"    return vec2 (_f, _f);\n"
"}\n"
"\n"
"vec2 __constructor (const int _i) {\n"
"    return vec2 (_i, _i);\n"
"}\n"
"\n"
"vec2 __constructor (const bool _b) {\n"
"    return vec2 (_b, _b);\n"
"}\n"
"\n"
"vec3 __constructor (const float _f) {\n"
"    return vec3 (_f, _f, _f);\n"
"}\n"
"\n"
"vec3 __constructor (const int _i) {\n"
"    return vec3 (_i, _i, _i);\n"
"}\n"
"\n"
"vec3 __constructor (const bool _b) {\n"
"    return vec3 (_b, _b, _b);\n"
"}\n"
"\n"
"vec4 __constructor (const float _f) {\n"
"    return vec4 (_f, _f, _f, _f);\n"
"}\n"
"\n"
"vec4 __constructor (const int _i) {\n"
"    return vec4 (_i, _i, _i, _i);\n"
"}\n"
"\n"
"vec4 __constructor (const bool _b) {\n"
"    return vec4 (_b, _b, _b, _b);\n"
"}\n"
"\n"
"ivec2 __constructor (const int _i) {\n"
"    return ivec2 (_i, _i);\n"
"}\n"
"\n"
"ivec2 __constructor (const float _f) {\n"
"    return ivec2 (_f, _f);\n"
"}\n"
"\n"
"ivec2 __constructor (const bool _b) {\n"
"    return ivec2 (_b, _b);\n"
"}\n"
"\n"
"ivec3 __constructor (const int _i) {\n"
"    return ivec3 (_i, _i, _i);\n"
"}\n"
"\n"
"ivec3 __constructor (const float _f) {\n"
"    return ivec3 (_f, _f, _f);\n"
"}\n"
"\n"
"ivec3 __constructor (const bool _b) {\n"
"    return ivec3 (_b, _b, _b);\n"
"}\n"
"\n"
"ivec4 __constructor (const int _i) {\n"
"    return ivec4 (_i, _i, _i, _i);\n"
"}\n"
"\n"
"ivec4 __constructor (const float _f) {\n"
"    return ivec4 (_f, _f, _f, _f);\n"
"}\n"
"\n"
"ivec4 __constructor (const bool _b) {\n"
"    return ivec4 (_b, _b, _b, _b);\n"
"}\n"
"\n"
"bvec2 __constructor (const bool _b) {\n"
"    return bvec2 (_b, _b);\n"
"}\n"
"\n"
"bvec2 __constructor (const float _f) {\n"
"    return bvec2 (_f, _f);\n"
"}\n"
"\n"
"bvec2 __constructor (const int _i) {\n"
"    return bvec2 (_i, _i);\n"
"}\n"
"\n"
"bvec3 __constructor (const bool _b) {\n"
"    return bvec3 (_b, _b, _b);\n"
"}\n"
"\n"
"bvec3 __constructor (const float _f) {\n"
"    return bvec3 (_f, _f, _f);\n"
"}\n"
"\n"
"bvec3 __constructor (const int _i) {\n"
"    return bvec3 (_i, _i, _i);\n"
"}\n"
"\n"
"bvec4 __constructor (const bool _b) {\n"
"    return bvec4 (_b, _b, _b, _b);\n"
"}\n"
"\n"
"bvec4 __constructor (const float _f) {\n"
"    return bvec4 (_f, _f, _f, _f);\n"
"}\n"
"\n"
"bvec4 __constructor (const int _i) {\n"
"    return bvec4 (_i, _i, _i, _i);\n"
"}\n"
"\n"
"mat2 __constructor (const float _f) {\n"
"    return mat2 (\n"
"        _f, .0,\n"
"        .0, _f\n"
"    );\n"
"}\n"
"\n"
"mat2 __constructor (const int _i) {\n"
"    return mat2 (\n"
"        _i, .0,\n"
"        .0, _i\n"
"    );\n"
"}\n"
"\n"
"mat2 __constructor (const bool _b) {\n"
"    return mat2 (\n"
"        _b, .0,\n"
"        .0, _b\n"
"    );\n"
"}\n"
"\n"
"mat3 __constructor (const float _f) {\n"
"    return mat3 (\n"
"        _f, .0, .0,\n"
"        .0, _f, .0,\n"
"        .0, .0, _f\n"
"    );\n"
"}\n"
"\n"
"mat3 __constructor (const int _i) {\n"
"    return mat3 (\n"
"        _i, .0, .0,\n"
"        .0, _i, .0,\n"
"        .0, .0, _i\n"
"    );\n"
"}\n"
"\n"
"mat3 __constructor (const bool _b) {\n"
"    return mat3 (\n"
"        _b, .0, .0,\n"
"        .0, _b, .0,\n"
"        .0, .0, _b\n"
"    );\n"
"}\n"
"\n"
"mat4 __constructor (const float _f) {\n"
"    return mat4 (\n"
"        _f, .0, .0, .0,\n"
"        .0, _f, .0, .0,\n"
"        .0, .0, _f, .0,\n"
"        .0, .0, .0, _f\n"
"    );\n"
"}\n"
"\n"
"mat4 __constructor (const int _i) {\n"
"    return mat4 (\n"
"        _i, .0, .0, .0,\n"
"        .0, _i, .0, .0,\n"
"        .0, .0, _i, .0,\n"
"        .0, .0, .0, _i\n"
"    );\n"
"}\n"
"\n"
"mat4 __constructor (const bool _b) {\n"
"    return mat4 (\n"
"        _b, .0, .0, .0,\n"
"        .0, _b, .0, .0,\n"
"        .0, .0, _b, .0,\n"
"        .0, .0, .0, _b\n"
"    );\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"void __operator += (inout float a, const float b) {\n"
"    __asm float_add a, a, b;\n"
"}\n"
"\n"
"float __operator - (const float a) {\n"
"    float c;\n"
"    __asm float_negate c, a;\n"
"    return c;\n"
"}\n"
"\n"
"void __operator -= (inout float a, const float b) {\n"
"    a += -b;\n"
"}\n"
"\n"
"void __operator *= (inout float a, const float b) {\n"
"    __asm float_multiply a, a, b;\n"
"}\n"
"\n"
"void __operator /= (inout float a, const float b) {\n"
"    __asm float_divide a, a, b;\n"
"}\n"
"\n"
"float __operator + (const float a, const float b) {\n"
"    float c;\n"
"    c = a;\n"
"    return c += b;\n"
"}\n"
"\n"
"void __operator += (inout int a, const int b) {\n"
"    a = int (float (a) + float (b));\n"
"}\n"
"\n"
"int __operator - (const int a) {\n"
"	return int (-float (a));\n"
"}\n"
"\n"
"void __operator -= (inout int a, const int b) {\n"
"    a += -b;\n"
"}\n"
"\n"
"float __operator * (const float a, const float b) {\n"
"    float c;\n"
"    c = a;\n"
"    return c *= b;\n"
"}\n"
"\n"
"void __operator *= (inout int a, const int b) {\n"
"    a = int (float (a) * float (b));\n"
"}\n"
"\n"
"float __operator / (const float a, const float b) {\n"
"    float c;\n"
"    c = a;\n"
"    return c /= b;\n"
"}\n"
"\n"
"void __operator /= (inout int a, const int b) {\n"
"    a = int (float (a) / float (b));\n"
"}\n"
"\n"
"void __operator += (inout vec2 v, const vec2 u) {\n"
"    v.x += u.x, v.y += u.y;\n"
"}\n"
"\n"
"void __operator -= (inout vec2 v, const vec2 u) {\n"
"    v.x -= u.x, v.y -= u.y;\n"
"}\n"
"\n"
"void __operator *= (inout vec2 v, const vec2 u) {\n"
"    v.x *= u.x, v.y *= u.y;\n"
"}\n"
"\n"
"void __operator /= (inout vec2 v, const vec2 u) {\n"
"    v.x /= u.x, v.y /= u.y;\n"
"}\n"
"\n"
"void __operator += (inout vec3 v, const vec3 u) {\n"
"    v.x += u.x, v.y += u.y, v.z += u.z;\n"
"}\n"
"\n"
"void __operator -= (inout vec3 v, const vec3 u) {\n"
"    v.x -= u.x, v.y -= u.y, v.z -= u.z;\n"
"}\n"
"\n"
"void __operator *= (inout vec3 v, const vec3 u) {\n"
"    v.x *= u.x, v.y *= u.y, v.z *= u.z;\n"
"}\n"
"\n"
"void __operator /= (inout vec3 v, const vec3 u) {\n"
"    v.x /= u.x, v.y /= u.y, v.z /= u.z;\n"
"}\n"
"\n"
"void __operator += (inout vec4 v, const vec4 u) {\n"
"    v.x += u.x, v.y += u.y, v.z += u.z, v.w += u.w;\n"
"}\n"
"\n"
"void __operator -= (inout vec4 v, const vec4 u) {\n"
"    v.x -= u.x, v.y -= u.y, v.z -= u.z, v.w -= u.w;\n"
"}\n"
"\n"
"void __operator *= (inout vec4 v, const vec4 u) {\n"
"    v.x *= u.x, v.y *= u.y, v.z *= u.z, v.w *= u.w;\n"
"}\n"
"\n"
"void __operator /= (inout vec4 v, const vec4 u) {\n"
"    v.x /= u.x, v.y /= u.y, v.z /= u.z, v.w /= u.w;\n"
"}\n"
"\n"
"void __operator += (inout ivec2 v, const ivec2 u) {\n"
"    v.x += u.x, v.y += u.y;\n"
"}\n"
"\n"
"void __operator -= (inout ivec2 v, const ivec2 u) {\n"
"    v.x -= u.x, v.y -= u.y;\n"
"}\n"
"\n"
"void __operator *= (inout ivec2 v, const ivec2 u) {\n"
"    v.x *= u.x, v.y *= u.y;\n"
"}\n"
"\n"
"void __operator /= (inout ivec2 v, const ivec2 u) {\n"
"    v.x /= u.x, v.y /= u.y;\n"
"}\n"
"\n"
"void __operator += (inout ivec3 v, const ivec3 u) {\n"
"    v.x += u.x, v.y += u.y, v.z += u.z;\n"
"}\n"
"\n"
"void __operator -= (inout ivec3 v, const ivec3 u) {\n"
"    v.x -= u.x, v.y -= u.y, v.z -= u.z;\n"
"}\n"
"\n"
"void __operator *= (inout ivec3 v, const ivec3 u) {\n"
"    v.x *= u.x, v.y *= u.y, v.z *= u.z;\n"
"}\n"
"\n"
"void __operator /= (inout ivec3 v, const ivec3 u) {\n"
"    v.x /= u.x, v.y /= u.y, v.z /= u.z;\n"
"}\n"
"\n"
"void __operator += (inout ivec4 v, const ivec4 u) {\n"
"    v.x += u.x, v.y += u.y, v.z += u.z, v.w += u.w;\n"
"}\n"
"\n"
"void __operator -= (inout ivec4 v, const ivec4 u) {\n"
"    v.x -= u.x, v.y -= u.y, v.z -= u.z, v.w -= u.w;\n"
"}\n"
"\n"
"void __operator *= (inout ivec4 v, const ivec4 u) {\n"
"    v.x *= u.x, v.y *= u.y, v.z *= u.z, v.w *= u.w;\n"
"}\n"
"\n"
"void __operator /= (inout ivec4 v, const ivec4 u) {\n"
"    v.x /= u.x, v.y /= u.y, v.z /= u.z, v.w /= u.w;\n"
"}\n"
"\n"
"void __operator += (inout mat2 m, const mat2 n) {\n"
"    m[0] += n[0], m[1] += n[1];\n"
"}\n"
"\n"
"void __operator -= (inout mat2 m, const mat2 n) {\n"
"    m[0] -= n[0], m[1] -= n[1];\n"
"}\n"
"\n"
"vec2 __operator * (const mat2 m, const vec2 v) {\n"
"    return vec2 (\n"
"        v.x * m[0].x + v.y * m[1].x,\n"
"        v.x * m[0].y + v.y * m[1].y\n"
"    );\n"
"}\n"
"\n"
"mat2 __operator * (const mat2 m, const mat2 n) {\n"
"    return mat2 (m * n[0], m * n[1]);\n"
"}\n"
"\n"
"void __operator *= (inout mat2 m, const mat2 n) {\n"
"    m = m * n;\n"
"}\n"
"\n"
"void __operator /= (inout mat2 m, const mat2 n) {\n"
"    m[0] /= n[0], m[1] /= n[1];\n"
"}\n"
"\n"
"void __operator += (inout mat3 m, const mat3 n) {\n"
"    m[0] += n[0], m[1] += n[1], m[2] += n[2];\n"
"}\n"
"\n"
"void __operator -= (inout mat3 m, const mat3 n) {\n"
"    m[0] -= n[0], m[1] -= n[1], m[2] -= n[2];\n"
"}\n"
"\n"
"vec3 __operator * (const mat3 m, const vec3 v) {\n"
"    return vec3 (\n"
"        v.x * m[0].x + v.y * m[1].x + v.z * m[2].x,\n"
"        v.x * m[0].y + v.y * m[1].y + v.z * m[2].y,\n"
"        v.x * m[0].z + v.y * m[1].z + v.z * m[2].z\n"
"    );\n"
"}\n"
"\n"
"mat3 __operator * (const mat3 m, const mat3 n) {\n"
"    return mat3 (m * n[0], m * n[1], m * n[2]);\n"
"}\n"
"\n"
"void __operator *= (inout mat3 m, const mat3 n) {\n"
"    m = m * n;\n"
"}\n"
"\n"
"void __operator /= (inout mat3 m, const mat3 n) {\n"
"    m[0] /= n[0], m[1] /= n[1], m[2] /= n[2];\n"
"}\n"
"\n"
"void __operator += (inout mat4 m, const mat4 n) {\n"
"    m[0] += n[0], m[1] += n[1], m[2] += n[2], m[3] += n[3];\n"
"}\n"
"\n"
"void __operator -= (inout mat4 m, const mat4 n) {\n"
"    m[0] -= n[0], m[1] -= n[1], m[2] -= n[2], m[3] -= n[3];\n"
"}\n"
"\n"
"vec4 __operator * (const mat4 m, const vec4 v) {\n"
"    return vec4 (\n"
"        v.x * m[0].x + v.y * m[1].x + v.z * m[2].x + v.w * m[3].x,\n"
"        v.x * m[0].y + v.y * m[1].y + v.z * m[2].y + v.w * m[3].y,\n"
"        v.x * m[0].z + v.y * m[1].z + v.z * m[2].z + v.w * m[3].z,\n"
"        v.x * m[0].w + v.y * m[1].w + v.z * m[2].w + v.w * m[3].w\n"
"    );\n"
"}\n"
"\n"
"mat4 __operator * (const mat4 m, const mat4 n) {\n"
"    return mat4 (m * n[0], m * n[1], m * n[2], m * n[3]);\n"
"}\n"
"\n"
"void __operator *= (inout mat4 m, const mat4 n) {\n"
"    m = m * n;\n"
"}\n"
"\n"
"void __operator /= (inout mat4 m, const mat4 n) {\n"
"    m[0] /= n[0], m[1] /= n[1], m[2] /= n[2], m[3] /= n[3];\n"
"}\n"
"\n"
"void __operator += (inout vec2 v, const float a) {\n"
"    v.x += a, v.y += a;\n"
"}\n"
"\n"
"void __operator -= (inout vec2 v, const float a) {\n"
"    v.x -= a, v.y -= a;\n"
"}\n"
"\n"
"void __operator *= (inout vec2 v, const float a) {\n"
"    v.x *= a, v.y *= a;\n"
"}\n"
"\n"
"void __operator /= (inout vec2 v, const float a) {\n"
"    v.x /= a, v.y /= a;\n"
"}\n"
"\n"
"void __operator += (inout vec3 v, const float a) {\n"
"    v.x += a, v.y += a, v.z += a;\n"
"}\n"
"\n"
"void __operator -= (inout vec3 v, const float a) {\n"
"    v.x -= a, v.y -= a, v.z -= a;\n"
"}\n"
"\n"
"void __operator *= (inout vec3 v, const float a) {\n"
"    v.x *= a, v.y *= a, v.z *= a;\n"
"}\n"
"\n"
"void __operator /= (inout vec3 v, const float a) {\n"
"    v.x /= a, v.y /= a, v.z /= a;\n"
"}\n"
"\n"
"void __operator += (inout vec4 v, const float a) {\n"
"    v.x += a, v.y += a, v.z += a, v.w += a;\n"
"}\n"
"\n"
"void __operator -= (inout vec4 v, const float a) {\n"
"    v.x -= a, v.y -= a, v.z -= a, v.w -= a;\n"
"}\n"
"\n"
"void __operator *= (inout vec4 v, const float a) {\n"
"    v.x *= a, v.y *= a, v.z *= a, v.w *= a;\n"
"}\n"
"\n"
"void __operator /= (inout vec4 v, const float a) {\n"
"    v.x /= a, v.y /= a, v.z /= a, v.w /= a;\n"
"}\n"
"\n"
"void __operator += (inout mat2 m, const float a) {\n"
"    m[0] += a, m[1] += a;\n"
"}\n"
"\n"
"void __operator -= (inout mat2 m, const float a) {\n"
"    m[0] -= a, m[1] -= a;\n"
"}\n"
"\n"
"void __operator *= (inout mat2 m, const float a) {\n"
"    m[0] *= a, m[1] *= a;\n"
"}\n"
"\n"
"void __operator /= (inout mat2 m, const float a) {\n"
"    m[0] /= a, m[1] /= a;\n"
"}\n"
"\n"
"void __operator += (inout mat3 m, const float a) {\n"
"    m[0] += a, m[1] += a, m[2] += a;\n"
"}\n"
"\n"
"void __operator -= (inout mat3 m, const float a) {\n"
"    m[0] -= a, m[1] -= a, m[2] -= a;\n"
"}\n"
"\n"
"void __operator *= (inout mat3 m, const float a) {\n"
"    m[0] *= a, m[1] *= a, m[2] *= a;\n"
"}\n"
"\n"
"void __operator /= (inout mat3 m, const float a) {\n"
"    m[0] /= a, m[1] /= a, m[2] /= a;\n"
"}\n"
"\n"
"void __operator += (inout mat4 m, const float a) {\n"
"    m[0] += a, m[1] += a, m[2] += a, m[3] += a;\n"
"}\n"
"\n"
"void __operator -= (inout mat4 m, const float a) {\n"
"    m[0] -= a, m[1] -= a, m[2] -= a, m[3] -= a;\n"
"}\n"
"\n"
"void __operator *= (inout mat4 m, const float a) {\n"
"    m[0] *= a, m[1] *= a, m[2] *= a, m[3] *= a;\n"
"}\n"
"\n"
"void __operator /= (inout mat4 m, const float a) {\n"
"    m[0] /= a, m[1] /= a, m[2] /= a, m[3] /= a;\n"
"}\n"
"\n"
"vec2 __operator * (const vec2 v, const mat2 m) {\n"
"    return vec2 (\n"
"        v.x * m[0].x + v.y * m[0].y,\n"
"        v.x * m[1].x + v.y * m[1].y\n"
"    );\n"
"}\n"
"\n"
"void __operator *= (inout vec2 v, const mat2 m) {\n"
"    v = v * m;\n"
"}\n"
"\n"
"vec3 __operator * (const vec3 v, const mat3 m) {\n"
"    return vec3 (\n"
"        v.x * m[0].x + v.y * m[0].y + v.z * m[0].z,\n"
"        v.x * m[1].x + v.y * m[1].y + v.z * m[1].z,\n"
"        v.x * m[2].x + v.y * m[2].y + v.z * m[2].z\n"
"    );\n"
"}\n"
"\n"
"void __operator *= (inout vec3 v, const mat3 m) {\n"
"    v = v * m;\n"
"}\n"
"\n"
"vec4 __operator * (const vec4 v, const mat4 m) {\n"
"    return vec4 (\n"
"        v.x * m[0].x + v.y * m[0].y + v.z * m[0].z + v.w * m[0].w,\n"
"        v.x * m[1].x + v.y * m[1].y + v.z * m[1].z + v.w * m[1].w,\n"
"        v.x * m[2].x + v.y * m[2].y + v.z * m[2].z + v.w * m[2].w,\n"
"        v.x * m[3].x + v.y * m[3].y + v.z * m[3].z + v.w * m[3].w\n"
"    );\n"
"}\n"
"\n"
"void __operator *= (inout vec4 v, const mat4 m) {\n"
"    v = v * m;\n"
"}\n"
"\n"
"float __operator - (const float a, const float b) {\n"
"    return a + -b;\n"
"}\n"
"\n"
"int __operator + (const int a, const int b) {\n"
"    int c;\n"
"    c = a;\n"
"    return c += b;\n"
"}\n"
"\n"
"int __operator - (const int a, const int b) {\n"
"    return a + -b;\n"
"}\n"
"\n"
"int __operator * (const int a, const int b) {\n"
"    int c;\n"
"    return (c = a) *= b;\n"
"}\n"
"\n"
"int __operator / (const int a, const int b) {\n"
"    int c;\n"
"    return (c = a) /= b;\n"
"}\n"
"\n"
"vec2 __operator + (const vec2 v, const vec2 u) {\n"
"    return vec2 (v.x + u.x, v.y + u.y);\n"
"}\n"
"\n"
"vec2 __operator - (const vec2 v, const vec2 u) {\n"
"    return vec2 (v.x - u.x, v.y - u.y);\n"
"}\n"
"\n"
"vec3 __operator + (const vec3 v, const vec3 u) {\n"
"    return vec3 (v.x + u.x, v.y + u.y, v.z + u.z);\n"
"}\n"
"\n"
"vec3 __operator - (const vec3 v, const vec3 u) {\n"
"    return vec3 (v.x - u.x, v.y - u.y, v.z - u.z);\n"
"}\n"
"\n"
"vec4 __operator + (const vec4 v, const vec4 u) {\n"
"    return vec4 (v.x + u.x, v.y + u.y, v.z + u.z, v.w + u.w);\n"
"}\n"
"\n"
"vec4 __operator - (const vec4 v, const vec4 u) {\n"
"    return vec4 (v.x - u.x, v.y - u.y, v.z - u.z, v.w - u.w);\n"
"}\n"
"\n"
"ivec2 __operator + (const ivec2 v, const ivec2 u) {\n"
"    return ivec2 (v.x + u.x, v.y + u.y);\n"
"}\n"
"\n"
"ivec2 __operator - (const ivec2 v, const ivec2 u) {\n"
"    return ivec2 (v.x - u.x, v.y - u.y);\n"
"}\n"
"\n"
"ivec3 __operator + (const ivec3 v, const ivec3 u) {\n"
"    return ivec3 (v.x + u.x, v.y + u.y, v.z + u.z);\n"
"}\n"
"\n"
"ivec3 __operator - (const ivec3 v, const ivec3 u) {\n"
"    return ivec3 (v.x - u.x, v.y - u.y, v.z - u.z);\n"
"}\n"
"\n"
"ivec4 __operator + (const ivec4 v, const ivec4 u) {\n"
"    return ivec4 (v.x + u.x, v.y + u.y, v.z + u.z, v.w + u.w);\n"
"}\n"
"\n"
"ivec4 __operator - (const ivec4 v, const ivec4 u) {\n"
"    return ivec4 (v.x - u.x, v.y - u.y, v.z - u.z, v.w - u.w);\n"
"}\n"
"\n"
"mat2 __operator + (const mat2 m, const mat2 n) {\n"
"    return mat2 (m[0] + n[0], m[1] + n[1]);\n"
"}\n"
"\n"
"mat2 __operator - (const mat2 m, const mat2 n) {\n"
"    return mat2 (m[0] - n[0], m[1] - n[1]);\n"
"}\n"
"\n"
"mat3 __operator + (const mat3 m, const mat3 n) {\n"
"    return mat3 (m[0] + n[0], m[1] + n[1], m[2] + n[2]);\n"
"}\n"
"\n"
"mat3 __operator - (const mat3 m, const mat3 n) {\n"
"    return mat3 (m[0] - n[0], m[1] - n[1], m[2] - n[2]);\n"
"}\n"
"\n"
"mat4 __operator + (const mat4 m, const mat4 n) {\n"
"    return mat4 (m[0] + n[0], m[1] + n[1], m[2] + n[2], m[3] + n[3]);\n"
"}\n"
"\n"
"mat4 __operator - (const mat4 m, const mat4 n) {\n"
"    return mat4 (m[0] - n[0], m[1] - n[1], m[2] - n[2], m[3] - n[3]);\n"
"}\n"
"\n"
"vec2 __operator + (const float a, const vec2 u) {\n"
"    return vec2 (a + u.x, a + u.y);\n"
"}\n"
"\n"
"vec2 __operator + (const vec2 v, const float b) {\n"
"    return vec2 (v.x + b, v.y + b);\n"
"}\n"
"\n"
"vec2 __operator - (const float a, const vec2 u) {\n"
"    return vec2 (a - u.x, a - u.y);\n"
"}\n"
"\n"
"vec2 __operator - (const vec2 v, const float b) {\n"
"    return vec2 (v.x - b, v.y - b);\n"
"}\n"
"\n"
"vec2 __operator * (const float a, const vec2 u) {\n"
"    return vec2 (a * u.x, a * u.y);\n"
"}\n"
"\n"
"vec2 __operator * (const vec2 v, const float b) {\n"
"    return vec2 (v.x * b, v.y * b);\n"
"}\n"
"\n"
"vec2 __operator / (const float a, const vec2 u) {\n"
"    return vec2 (a / u.x, a / u.y);\n"
"}\n"
"\n"
"vec2 __operator / (const vec2 v, const float b) {\n"
"    return vec2 (v.x / b, v.y / b);\n"
"}\n"
"\n"
"vec3 __operator + (const float a, const vec3 u) {\n"
"    return vec3 (a + u.x, a + u.y, a + u.z);\n"
"}\n"
"\n"
"vec3 __operator + (const vec3 v, const float b) {\n"
"    return vec3 (v.x + b, v.y + b, v.z + b);\n"
"}\n"
"\n"
"vec3 __operator - (const float a, const vec3 u) {\n"
"    return vec3 (a - u.x, a - u.y, a - u.z);\n"
"}\n"
"\n"
"vec3 __operator - (const vec3 v, const float b) {\n"
"    return vec3 (v.x - b, v.y - b, v.z - b);\n"
"}\n"
"\n"
"vec3 __operator * (const float a, const vec3 u) {\n"
"    return vec3 (a * u.x, a * u.y, a * u.z);\n"
"}\n"
"\n"
"vec3 __operator * (const vec3 v, const float b) {\n"
"    return vec3 (v.x * b, v.y * b, v.z * b);\n"
"}\n"
"\n"
"vec3 __operator / (const float a, const vec3 u) {\n"
"    return vec3 (a / u.x, a / u.y, a / u.z);\n"
"}\n"
"\n"
"vec3 __operator / (const vec3 v, const float b) {\n"
"    return vec3 (v.x / b, v.y / b, v.z / b);\n"
"}\n"
"\n"
"vec4 __operator + (const float a, const vec4 u) {\n"
"    return vec4 (a + u.x, a + u.y, a + u.z, a + u.w);\n"
"}\n"
"\n"
"vec4 __operator + (const vec4 v, const float b) {\n"
"    return vec4 (v.x + b, v.y + b, v.z + b, v.w + b);\n"
"}\n"
"\n"
"vec4 __operator - (const float a, const vec4 u) {\n"
"    return vec4 (a - u.x, a - u.y, a - u.z, a - u.w);\n"
"}\n"
"\n"
"vec4 __operator - (const vec4 v, const float b) {\n"
"    return vec4 (v.x - b, v.y - b, v.z - b, v.w - b);\n"
"}\n"
"\n"
"vec4 __operator * (const float a, const vec4 u) {\n"
"    return vec4 (a * u.x, a * u.y, a * u.z, a * u.w);\n"
"}\n"
"\n"
"vec4 __operator * (const vec4 v, const float b) {\n"
"    return vec4 (v.x * b, v.y * b, v.z * b, v.w * b);\n"
"}\n"
"\n"
"vec4 __operator / (const float a, const vec4 u) {\n"
"    return vec4 (a / u.x, a / u.y, a / u.z, a / u.w);\n"
"}\n"
"\n"
"vec4 __operator / (const vec4 v, const float b) {\n"
"    return vec4 (v.x / b, v.y / b, v.z / b, v.w / b);\n"
"}\n"
"\n"
"mat2 __operator + (const float a, const mat2 n) {\n"
"    return mat2 (a + n[0], a + n[1]);\n"
"}\n"
"\n"
"mat2 __operator + (const mat2 m, const float b) {\n"
"    return mat2 (m[0] + b, m[1] + b);\n"
"}\n"
"\n"
"mat2 __operator - (const float a, const mat2 n) {\n"
"    return mat2 (a - n[0], a - n[1]);\n"
"}\n"
"\n"
"mat2 __operator - (const mat2 m, const float b) {\n"
"    return mat2 (m[0] - b, m[1] - b);\n"
"}\n"
"\n"
"mat2 __operator * (const float a, const mat2 n) {\n"
"    return mat2 (a * n[0], a * n[1]);\n"
"}\n"
"\n"
"mat2 __operator * (const mat2 m, const float b) {\n"
"    return mat2 (m[0] * b, m[1] * b);\n"
"}\n"
"\n"
"mat2 __operator / (const float a, const mat2 n) {\n"
"    return mat2 (a / n[0], a / n[1]);\n"
"}\n"
"\n"
"mat2 __operator / (const mat2 m, const float b) {\n"
"    return mat2 (m[0] / b, m[1] / b);\n"
"}\n"
"\n"
"mat3 __operator + (const float a, const mat3 n) {\n"
"    return mat3 (a + n[0], a + n[1], a + n[2]);\n"
"}\n"
"\n"
"mat3 __operator + (const mat3 m, const float b) {\n"
"    return mat3 (m[0] + b, m[1] + b, m[2] + b);\n"
"}\n"
"\n"
"mat3 __operator - (const float a, const mat3 n) {\n"
"    return mat3 (a - n[0], a - n[1], a - n[2]);\n"
"}\n"
"\n"
"mat3 __operator - (const mat3 m, const float b) {\n"
"    return mat3 (m[0] - b, m[1] - b, m[2] - b);\n"
"}\n"
"\n"
"mat3 __operator * (const float a, const mat3 n) {\n"
"    return mat3 (a * n[0], a * n[1], a * n[2]);\n"
"}\n"
"\n"
"mat3 __operator * (const mat3 m, const float b) {\n"
"    return mat3 (m[0] * b, m[1] * b, m[2] * b);\n"
"}\n"
"\n"
"mat3 __operator / (const float a, const mat3 n) {\n"
"    return mat3 (a / n[0], a / n[1], a / n[2]);\n"
"}\n"
"\n"
"mat3 __operator / (const mat3 m, const float b) {\n"
"    return mat3 (m[0] / b, m[1] / b, m[2] / b);\n"
"}\n"
"\n"
"mat4 __operator + (const float a, const mat4 n) {\n"
"    return mat4 (a + n[0], a + n[1], a + n[2], a + n[3]);\n"
"}\n"
"\n"
"mat4 __operator + (const mat4 m, const float b) {\n"
"    return mat4 (m[0] + b, m[1] + b, m[2] + b, m[3] + b);\n"
"}\n"
"\n"
"mat4 __operator - (const float a, const mat4 n) {\n"
"    return mat4 (a - n[0], a - n[1], a - n[2], a - n[3]);\n"
"}\n"
"\n"
"mat4 __operator - (const mat4 m, const float b) {\n"
"    return mat4 (m[0] - b, m[1] - b, m[2] - b, m[3] - b);\n"
"}\n"
"\n"
"mat4 __operator * (const float a, const mat4 n) {\n"
"    return mat4 (a * n[0], a * n[1], a * n[2], a * n[3]);\n"
"}\n"
"\n"
"mat4 __operator * (const mat4 m, const float b) {\n"
"    return mat4 (m[0] * b, m[1] * b, m[2] * b, m[3] * b);\n"
"}\n"
"\n"
"mat4 __operator / (const float a, const mat4 n) {\n"
"    return mat4 (a / n[0], a / n[1], a / n[2], a / n[3]);\n"
"}\n"
"\n"
"mat4 __operator / (const mat4 m, const float b) {\n"
"    return mat4 (m[0] / b, m[1] / b, m[2] / b, m[3] / b);\n"
"}\n"
"\n"
"ivec2 __operator + (const int a, const ivec2 u) {\n"
"    return ivec2 (a + u.x, a + u.y);\n"
"}\n"
"\n"
"ivec2 __operator + (const ivec2 v, const int b) {\n"
"    return ivec2 (v.x + b, v.y + b);\n"
"}\n"
"\n"
"ivec2 __operator - (const int a, const ivec2 u) {\n"
"    return ivec2 (a - u.x, a - u.y);\n"
"}\n"
"\n"
"ivec2 __operator - (const ivec2 v, const int b) {\n"
"    return ivec2 (v.x - b, v.y - b);\n"
"}\n"
"\n"
"ivec2 __operator * (const int a, const ivec2 u) {\n"
"    return ivec2 (a * u.x, a * u.y);\n"
"}\n"
"\n"
"ivec2 __operator * (const ivec2 v, const int b) {\n"
"    return ivec2 (v.x * b, v.y * b);\n"
"}\n"
"\n"
"ivec2 __operator / (const int a, const ivec2 u) {\n"
"    return ivec2 (a / u.x, a / u.y);\n"
"}\n"
"\n"
"ivec2 __operator / (const ivec2 v, const int b) {\n"
"    return ivec2 (v.x / b, v.y / b);\n"
"}\n"
"\n"
"ivec3 __operator + (const int a, const ivec3 u) {\n"
"    return ivec3 (a + u.x, a + u.y, a + u.z);\n"
"}\n"
"\n"
"ivec3 __operator + (const ivec3 v, const int b) {\n"
"    return ivec3 (v.x + b, v.y + b, v.z + b);\n"
"}\n"
"\n"
"ivec3 __operator - (const int a, const ivec3 u) {\n"
"    return ivec3 (a - u.x, a - u.y, a - u.z);\n"
"}\n"
"\n"
"ivec3 __operator - (const ivec3 v, const int b) {\n"
"    return ivec3 (v.x - b, v.y - b, v.z - b);\n"
"}\n"
"\n"
"ivec3 __operator * (const int a, const ivec3 u) {\n"
"    return ivec3 (a * u.x, a * u.y, a * u.z);\n"
"}\n"
"\n"
"ivec3 __operator * (const ivec3 v, const int b) {\n"
"    return ivec3 (v.x * b, v.y * b, v.z * b);\n"
"}\n"
"\n"
"ivec3 __operator / (const int a, const ivec3 u) {\n"
"    return ivec3 (a / u.x, a / u.y, a / u.z);\n"
"}\n"
"\n"
"ivec3 __operator / (const ivec3 v, const int b) {\n"
"    return ivec3 (v.x / b, v.y / b, v.z / b);\n"
"}\n"
"\n"
"ivec4 __operator + (const int a, const ivec4 u) {\n"
"    return ivec4 (a + u.x, a + u.y, a + u.z, a + u.w);\n"
"}\n"
"\n"
"ivec4 __operator + (const ivec4 v, const int b) {\n"
"    return ivec4 (v.x + b, v.y + b, v.z + b, v.w + b);\n"
"}\n"
"\n"
"ivec4 __operator - (const int a, const ivec4 u) {\n"
"    return ivec4 (a - u.x, a - u.y, a - u.z, a - u.w);\n"
"}\n"
"\n"
"ivec4 __operator - (const ivec4 v, const int b) {\n"
"    return ivec4 (v.x - b, v.y - b, v.z - b, v.w - b);\n"
"}\n"
"\n"
"ivec4 __operator * (const int a, const ivec4 u) {\n"
"    return ivec4 (a * u.x, a * u.y, a * u.z, a * u.w);\n"
"}\n"
"\n"
"ivec4 __operator * (const ivec4 v, const int b) {\n"
"    return ivec4 (v.x * b, v.y * b, v.z * b, v.w * b);\n"
"}\n"
"\n"
"ivec4 __operator / (const int a, const ivec4 u) {\n"
"    return ivec4 (a / u.x, a / u.y, a / u.z, a / u.w);\n"
"}\n"
"\n"
"ivec4 __operator / (const ivec4 v, const int b) {\n"
"    return ivec4 (v.x / b, v.y / b, v.z / b, v.w / b);\n"
"}\n"
"\n"
"vec2 __operator * (const vec2 v, const vec2 u) {\n"
"    return vec2 (v.x * u.x, v.y * u.y);\n"
"}\n"
"\n"
"vec3 __operator * (const vec3 v, const vec3 u) {\n"
"    return vec3 (v.x * u.x, v.y * u.y, v.z * u.z);\n"
"}\n"
"\n"
"vec4 __operator * (const vec4 v, const vec4 u) {\n"
"    return vec4 (v.x * u.x, v.y * u.y, v.z * u.z, v.w * u.w);\n"
"}\n"
"\n"
"ivec2 __operator * (const ivec2 v, const ivec2 u) {\n"
"    return ivec2 (v.x * u.x, v.y * u.y);\n"
"}\n"
"\n"
"ivec3 __operator * (const ivec3 v, const ivec3 u) {\n"
"    return ivec3 (v.x * u.x, v.y * u.y, v.z * u.z);\n"
"}\n"
"\n"
"ivec4 __operator * (const ivec4 v, const ivec4 u) {\n"
"    return ivec4 (v.x * u.x, v.y * u.y, v.z * u.z, v.w * u.w);\n"
"}\n"
"\n"
"vec2 __operator / (const vec2 v, const vec2 u) {\n"
"    return vec2 (v.x / u.x, v.y / u.y);\n"
"}\n"
"\n"
"vec3 __operator / (const vec3 v, const vec3 u) {\n"
"    return vec3 (v.x / u.x, v.y / u.y, v.z / u.z);\n"
"}\n"
"\n"
"vec4 __operator / (const vec4 v, const vec4 u) {\n"
"    return vec4 (v.x / u.x, v.y / u.y, v.z / u.z, v.w / u.w);\n"
"}\n"
"\n"
"ivec2 __operator / (const ivec2 v, const ivec2 u) {\n"
"    return ivec2 (v.x / u.x, v.y / u.y);\n"
"}\n"
"\n"
"ivec3 __operator / (const ivec3 v, const ivec3 u) {\n"
"    return ivec3 (v.x / u.x, v.y / u.y, v.z / u.z);\n"
"}\n"
"\n"
"ivec4 __operator / (const ivec4 v, const ivec4 u) {\n"
"    return ivec4 (v.x / u.x, v.y / u.y, v.z / u.z, v.w / u.w);\n"
"}\n"
"\n"
"mat2 __operator / (const mat2 m, const mat2 n) {\n"
"    return mat2 (m[0] / n[0], m[1] / n[1]);\n"
"}\n"
"\n"
"mat3 __operator / (const mat3 m, const mat3 n) {\n"
"    return mat3 (m[0] / n[0], m[1] / n[1], m[2] / n[2]);\n"
"}\n"
"\n"
"mat4 __operator / (const mat4 m, const mat4 n) {\n"
"    return mat4 (m[0] / n[0], m[1] / n[1], m[2] / n[2], m[3] / n[3]);\n"
"}\n"
"\n"
"vec2 __operator - (const vec2 v) {\n"
"    return vec2 (-v.x, -v.y);\n"
"}\n"
"\n"
"vec3 __operator - (const vec3 v) {\n"
"    return vec3 (-v.x, -v.y, -v.z);\n"
"}\n"
"\n"
"vec4 __operator - (const vec4 v) {\n"
"    return vec4 (-v.x, -v.y, -v.z, -v.w);\n"
"}\n"
"\n"
"ivec2 __operator - (const ivec2 v) {\n"
"    return ivec2 (-v.x, -v.y);\n"
"}\n"
"\n"
"ivec3 __operator - (const ivec3 v) {\n"
"    return ivec3 (-v.x, -v.y, -v.z);\n"
"}\n"
"\n"
"ivec4 __operator - (const ivec4 v) {\n"
"    return ivec4 (-v.x, -v.y, -v.z, -v.w);\n"
"}\n"
"\n"
"mat2 __operator - (const mat2 m) {\n"
"    return mat2 (-m[0], -m[1]);\n"
"}\n"
"\n"
"mat3 __operator - (const mat3 m) {\n"
"    return mat3 (-m[0], -m[1], -m[2]);\n"
"}\n"
"\n"
"mat4 __operator - (const mat4 m) {\n"
"    return mat4 (-m[0], -m[1], -m[2], -m[3]);\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"void __operator -- (inout float a) {\n"
"    a -= 1.0;\n"
"}\n"
"\n"
"void __operator -- (inout int a) {\n"
"    a -= 1;\n"
"}\n"
"\n"
"void __operator -- (inout vec2 v) {\n"
"    --v.x, --v.y;\n"
"}\n"
"\n"
"void __operator -- (inout vec3 v) {\n"
"    --v.x, --v.y, --v.z;\n"
"}\n"
"\n"
"void __operator -- (inout vec4 v) {\n"
"    --v.x, --v.y, --v.z, --v.w;\n"
"}\n"
"\n"
"void __operator -- (inout ivec2 v) {\n"
"    --v.x, --v.y;\n"
"}\n"
"\n"
"void __operator -- (inout ivec3 v) {\n"
"    --v.x, --v.y, --v.z;\n"
"}\n"
"\n"
"void __operator -- (inout ivec4 v) {\n"
"    --v.x, --v.y, --v.z, --v.w;\n"
"}\n"
"\n"
"void __operator -- (inout mat2 m) {\n"
"    --m[0], --m[1];\n"
"}\n"
"\n"
"void __operator -- (inout mat3 m) {\n"
"    --m[0], --m[1], --m[2];\n"
"}\n"
"\n"
"void __operator -- (inout mat4 m) {\n"
"    --m[0], --m[1], --m[2], --m[3];\n"
"}\n"
"\n"
"void __operator ++ (inout float a) {\n"
"    a += 1.0;\n"
"}\n"
"\n"
"void __operator ++ (inout int a) {\n"
"    a += 1;\n"
"}\n"
"\n"
"void __operator ++ (inout vec2 v) {\n"
"    ++v.x, ++v.y;\n"
"}\n"
"\n"
"void __operator ++ (inout vec3 v) {\n"
"    ++v.x, ++v.y, ++v.z;\n"
"}\n"
"\n"
"void __operator ++ (inout vec4 v) {\n"
"    ++v.x, ++v.y, ++v.z, ++v.w;\n"
"}\n"
"\n"
"void __operator ++ (inout ivec2 v) {\n"
"    ++v.x, ++v.y;\n"
"}\n"
"\n"
"void __operator ++ (inout ivec3 v) {\n"
"    ++v.x, ++v.y, ++v.z;\n"
"}\n"
"\n"
"void __operator ++ (inout ivec4 v) {\n"
"    ++v.x, ++v.y, ++v.z, ++v.w;\n"
"}\n"
"\n"
"void __operator ++ (inout mat2 m) {\n"
"    ++m[0], ++m[1];\n"
"}\n"
"\n"
"void __operator ++ (inout mat3 m) {\n"
"    ++m[0], ++m[1], ++m[2];\n"
"}\n"
"\n"
"void __operator ++ (inout mat4 m) {\n"
"    ++m[0], ++m[1], ++m[2], ++m[3];\n"
"}\n"
"\n"
"float __operator -- (inout float a, const int) {\n"
"    float c;\n"
"    c = a;\n"
"    --a;\n"
"    return c;\n"
"}\n"
"\n"
"int __operator -- (inout int a, const int) {\n"
"    int c;\n"
"    c = a;\n"
"    --a;\n"
"    return c;\n"
"}\n"
"\n"
"vec2 __operator -- (inout vec2 v, const int) {\n"
"    return vec2 (v.x--, v.y--);\n"
"}\n"
"\n"
"vec3 __operator -- (inout vec3 v, const int) {\n"
"    return vec3 (v.x--, v.y--, v.z--);\n"
"}\n"
"\n"
"vec4 __operator -- (inout vec4 v, const int) {\n"
"    return vec4 (v.x--, v.y--, v.z--, v.w--);\n"
"}\n"
"\n"
"ivec2 __operator -- (inout ivec2 v, const int) {\n"
"    return ivec2 (v.x--, v.y--);\n"
"}\n"
"\n"
"ivec3 __operator -- (inout ivec3 v, const int) {\n"
"    return ivec3 (v.x--, v.y--, v.z--);\n"
"}\n"
"\n"
"ivec4 __operator -- (inout ivec4 v, const int) {\n"
"    return ivec4 (v.x--, v.y--, v.z--, v.w--);\n"
"}\n"
"\n"
"mat2 __operator -- (inout mat2 m, const int) {\n"
"    return mat2 (m[0]--, m[1]--);\n"
"}\n"
"\n"
"mat3 __operator -- (inout mat3 m, const int) {\n"
"    return mat3 (m[0]--, m[1]--, m[2]--);\n"
"}\n"
"\n"
"mat4 __operator -- (inout mat4 m, const int) {\n"
"    return mat4 (m[0]--, m[1]--, m[2]--, m[3]--);\n"
"}\n"
"\n"
"float __operator ++ (inout float a, const int) {\n"
"    float c;\n"
"    c = a;\n"
"    ++a;\n"
"    return c;\n"
"}\n"
"\n"
"int __operator ++ (inout int a, const int) {\n"
"    int c;\n"
"    c = a;\n"
"    ++a;\n"
"    return c;\n"
"}\n"
"\n"
"vec2 __operator ++ (inout vec2 v, const int) {\n"
"    return vec2 (v.x++, v.y++);\n"
"}\n"
"\n"
"vec3 __operator ++ (inout vec3 v, const int) {\n"
"    return vec3 (v.x++, v.y++, v.z++);\n"
"}\n"
"\n"
"vec4 __operator ++ (inout vec4 v, const int) {\n"
"    return vec4 (v.x++, v.y++, v.z++, v.w++);\n"
"}\n"
"\n"
"ivec2 __operator ++ (inout ivec2 v, const int) {\n"
"    return ivec2 (v.x++, v.y++);\n"
"}\n"
"\n"
"ivec3 __operator ++ (inout ivec3 v, const int) {\n"
"    return ivec3 (v.x++, v.y++, v.z++);\n"
"}\n"
"\n"
"ivec4 __operator ++ (inout ivec4 v, const int) {\n"
"    return ivec4 (v.x++, v.y++, v.z++, v.w++);\n"
"}\n"
"\n"
"mat2 __operator ++ (inout mat2 m, const int) {\n"
"    return mat2 (m[0]++, m[1]++);\n"
"}\n"
"\n"
"mat3 __operator ++ (inout mat3 m, const int) {\n"
"    return mat3 (m[0]++, m[1]++, m[2]++);\n"
"}\n"
"\n"
"mat4 __operator ++ (inout mat4 m, const int) {\n"
"    return mat4 (m[0]++, m[1]++, m[2]++, m[3]++);\n"
"}\n"
"\n"
"bool __operator < (const float a, const float b) {\n"
"    bool c;\n"
"    __asm float_less c, a, b;\n"
"    return c;\n"
"}\n"
"\n"
"bool __operator < (const int a, const int b) {\n"
"	return float (a) < float (b);\n"
"}\n"
"\n"
"bool __operator > (const float a, const float b) {\n"
"    return b < a;\n"
"}\n"
"\n"
"bool __operator > (const int a, const int b) {\n"
"    return b < a;\n"
"}\n"
"\n"
"bool __operator >= (const float a, const float b) {\n"
"    return a > b || a == b;\n"
"}\n"
"\n"
"bool __operator >= (const int a, const int b) {\n"
"    return a > b || a == b;\n"
"}\n"
"\n"
"bool __operator <= (const float a, const float b) {\n"
"    return a < b || a == b;\n"
"}\n"
"\n"
"bool __operator <= (const int a, const int b) {\n"
"    return a < b || a == b;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"bool __operator ^^ (const bool a, const bool b) {\n"
"    return a != b;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"bool __operator ! (const bool a) {\n"
"    return a == false;\n"
"}\n"
"\n"
