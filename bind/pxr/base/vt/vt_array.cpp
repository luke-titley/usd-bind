#include <cppmm_bind.hpp>
#include <pxr/base/gf/quatf.h>
#include <pxr/base/gf/quatd.h>
#include <pxr/base/gf/vec2i.h>
#include <pxr/base/gf/vec3i.h>
#include <pxr/base/gf/vec4i.h>
#include <pxr/base/gf/vec2f.h>
#include <pxr/base/gf/vec3f.h>
#include <pxr/base/gf/vec4f.h>
#include <pxr/base/gf/matrix2f.h>
#include <pxr/base/gf/matrix2d.h>
#include <pxr/base/gf/matrix3f.h>
#include <pxr/base/gf/matrix3d.h>
#include <pxr/base/gf/matrix4f.h>
#include <pxr/base/gf/matrix4d.h>
#include <pxr/base/tf/token.h>
#include <pxr/base/vt/array.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

template <typename ELEM> struct VtArray {
    using BoundType = pxr::VtArray<ELEM>;

    VtArray();

    /// Destructor.
    ~VtArray();

    void reserve(size_t num);
    size_t size() const;
    void push_back(ELEM const& elem);

    ELEM* data() CPPMM_RENAME(data_mut);
    const ELEM* data() const CPPMM_RENAME(data_const);

    ELEM& operator[](size_t index) CPPMM_RENAME(index_mut);
    ELEM const& operator[](size_t index) const CPPMM_RENAME(index);

} CPPMM_OPAQUEPTR CPPMM_IGNORE_UNBOUND; // struct VtArray

/*
template class VtArray<bool>;
template class VtArray<uint8_t>;
template class VtArray<int32_t>;
template class VtArray<uint32_t>;
template class VtArray<int64_t>;
template class VtArray<uint64_t>;
// template class VtArray<float>;
// template class VtArray<double>;

using VtArrayBool = pxr::VtArray<bool>;
using VtArrayUint8 = pxr::VtArray<uint8_t>;
using VtArrayInt32 = pxr::VtArray<int32_t>;
using VtArrayUint32 = pxr::VtArray<uint32_t>;
using VtArrayInt64 = pxr::VtArray<int64_t>;
using VtArrayUint64 = pxr::VtArray<uint64_t>;
*/

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

/*
template class pxr::VtArray<bool>;
template class pxr::VtArray<uint8_t>;
template class pxr::VtArray<int32_t>;
template class pxr::VtArray<uint32_t>;
template class pxr::VtArray<int64_t>;
template class pxr::VtArray<uint64_t>;
*/
// template class pxr::VtArray<float>;
// template class pxr::VtArray<double>;

#define ARR(T, NAME)                                                           \
    namespace cppmm_bind {                                                     \
    namespace PXR_INTERNAL_NS {                                                \
    namespace pxr = ::PXR_INTERNAL_NS;                                         \
    template class VtArray<T>;                                                 \
    using VtArray##NAME = pxr::VtArray<T>;                                    \
    }                                                                          \
    }                                                                          \
    template class pxr::VtArray<T>;

// define these as a no-op so the binding process works.
#define VTARRAY_MODULO_NOOP(T)                                                 \
    template <>                                                                \
    pxr::VtArray<T> pxr::VtArray<T>::operator%(const pxr::VtArray<T>& rhs)     \
        const {                                                                \
        return rhs;                                                            \
    }

// define these as a no-op so the binding process works.
#define VTARRAY_MUL_NOOP(T)                                                    \
    template <>                                                                \
    pxr::VtArray<T> pxr::VtArray<T>::operator*(const pxr::VtArray<T>& rhs)     \
        const {                                                                \
        return rhs;                                                            \
    }                                                                          \
    template <>                                                                \
    pxr::VtArray<T> pxr::VtArray<T>::operator/(const pxr::VtArray<T>& rhs)     \
        const {                                                                \
        return rhs;                                                            \
    }

#define VTARRAY_ADD_NOOP(T)                                                    \
    template <>                                                                \
    pxr::VtArray<T> pxr::VtArray<T>::operator+(const pxr::VtArray<T>& rhs)     \
        const {                                                                \
        return rhs;                                                            \
    }                                                                          \
    template <>                                                                \
    pxr::VtArray<T> pxr::VtArray<T>::operator-(const pxr::VtArray<T>& rhs)     \
        const {                                                                \
        return rhs;                                                            \
    }                                                                          \
    template <> pxr::VtArray<T> pxr::VtArray<T>::operator-() const {           \
        return *this;                                                          \
    }

VTARRAY_MODULO_NOOP(float)
VTARRAY_MODULO_NOOP(double)
VTARRAY_MODULO_NOOP(pxr::TfToken)
VTARRAY_MUL_NOOP(pxr::TfToken)
VTARRAY_ADD_NOOP(pxr::TfToken)

VTARRAY_MODULO_NOOP(std::string)
VTARRAY_MUL_NOOP(std::string)
VTARRAY_ADD_NOOP(std::string)

// GfVec
VTARRAY_MODULO_NOOP(pxr::GfVec2i)
VTARRAY_MUL_NOOP(pxr::GfVec2i)
VTARRAY_MODULO_NOOP(pxr::GfVec3i)
VTARRAY_MUL_NOOP(pxr::GfVec3i)
VTARRAY_MODULO_NOOP(pxr::GfVec4i)
VTARRAY_MUL_NOOP(pxr::GfVec4i)

VTARRAY_MODULO_NOOP(pxr::GfVec2f)
VTARRAY_MUL_NOOP(pxr::GfVec2f)
VTARRAY_MODULO_NOOP(pxr::GfVec3f)
VTARRAY_MUL_NOOP(pxr::GfVec3f)
VTARRAY_MODULO_NOOP(pxr::GfVec4f)
VTARRAY_MUL_NOOP(pxr::GfVec4f)

VTARRAY_MODULO_NOOP(pxr::GfVec2d)
VTARRAY_MUL_NOOP(pxr::GfVec2d)
VTARRAY_MODULO_NOOP(pxr::GfVec3d)
VTARRAY_MUL_NOOP(pxr::GfVec3d)
VTARRAY_MODULO_NOOP(pxr::GfVec4d)
VTARRAY_MUL_NOOP(pxr::GfVec4d)

// GfQuat
VTARRAY_MODULO_NOOP(pxr::GfQuatf)
VTARRAY_MUL_NOOP(pxr::GfQuatf)
VTARRAY_MODULO_NOOP(pxr::GfQuatd)
VTARRAY_MUL_NOOP(pxr::GfQuatd)

// GfMatrix
VTARRAY_MODULO_NOOP(pxr::GfMatrix2f);
VTARRAY_MUL_NOOP(pxr::GfMatrix2f);
VTARRAY_MODULO_NOOP(pxr::GfMatrix3f);
VTARRAY_MUL_NOOP(pxr::GfMatrix3f);
VTARRAY_MODULO_NOOP(pxr::GfMatrix4f);
VTARRAY_MUL_NOOP(pxr::GfMatrix4f);

VTARRAY_MODULO_NOOP(pxr::GfMatrix2d);
VTARRAY_MUL_NOOP(pxr::GfMatrix2d);
VTARRAY_MODULO_NOOP(pxr::GfMatrix3d);
VTARRAY_MUL_NOOP(pxr::GfMatrix3d);
VTARRAY_MODULO_NOOP(pxr::GfMatrix4d);
VTARRAY_MUL_NOOP(pxr::GfMatrix4d);

ARR(bool, Bool)
ARR(uint8_t, U8)
ARR(uint32_t, U32)
ARR(uint64_t, U64)
ARR(int32_t, I32)
ARR(int64_t, I64)
ARR(float, F32)
ARR(double, F64)

ARR(pxr::TfToken, TfToken)
ARR(std::string, string)

// GfVec
ARR(pxr::GfVec2i, GfVec2i)
ARR(pxr::GfVec3i, GfVec3i)
ARR(pxr::GfVec4i, GfVec4i)

ARR(pxr::GfVec2f, GfVec2f)
ARR(pxr::GfVec3f, GfVec3f)
ARR(pxr::GfVec4f, GfVec4f)

ARR(pxr::GfVec2d, GfVec2d)
ARR(pxr::GfVec3d, GfVec3d)
ARR(pxr::GfVec4d, GfVec4d)

// GfQuat
ARR(pxr::GfQuatf, GfQuatf)
ARR(pxr::GfQuatd, GfQuatd)

// GfMatrix
ARR(pxr::GfMatrix2f, GfMatrix2f)
ARR(pxr::GfMatrix3f, GfMatrix3f)
ARR(pxr::GfMatrix4f, GfMatrix4f)
ARR(pxr::GfMatrix2d, GfMatrix2d)
ARR(pxr::GfMatrix3d, GfMatrix3d)
ARR(pxr::GfMatrix4d, GfMatrix4d)
