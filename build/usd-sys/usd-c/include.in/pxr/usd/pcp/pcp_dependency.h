#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;

/** \enum PcpDependencyType

A classification of PcpPrimIndex->PcpSite dependencies
by composition structure. */
enum pxrInternal_v0_21__pxrReserved____PcpDependencyType_e {
    pxr_PcpDependencyType_PcpDependencyTypeNone = 0,
    pxr_PcpDependencyType_PcpDependencyTypeRoot = 1,
    pxr_PcpDependencyType_PcpDependencyTypePurelyDirect = 2,
    pxr_PcpDependencyType_PcpDependencyTypePartlyDirect = 4,
    pxr_PcpDependencyType_PcpDependencyTypeDirect = 6,
    pxr_PcpDependencyType_PcpDependencyTypeAncestral = 8,
    pxr_PcpDependencyType_PcpDependencyTypeVirtual = 16,
    pxr_PcpDependencyType_PcpDependencyTypeNonVirtual = 32,
    pxr_PcpDependencyType_PcpDependencyTypeAnyNonVirtual = 47,
    pxr_PcpDependencyType_PcpDependencyTypeAnyIncludingVirtual = 63,
};
typedef unsigned int pxr_PcpDependencyType;

/** Description of a dependency. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpDependency_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpDependency_t;
typedef pxrInternal_v0_21__pxrReserved____PcpDependency_t pxr_PcpDependency_t;


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpDependency__eq(
    pxr_PcpDependency_t const * this_
    , _Bool * return_
    , pxr_PcpDependency_t const * rhs);
#define pxr_PcpDependency__eq pxrInternal_v0_21__pxrReserved____PcpDependency__eq


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpDependency__ne(
    pxr_PcpDependency_t const * this_
    , _Bool * return_
    , pxr_PcpDependency_t const * rhs);
#define pxr_PcpDependency__ne pxrInternal_v0_21__pxrReserved____PcpDependency__ne


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpDependencyFlagsToString(
    std_string_t * * return_
    , unsigned int const flags);
#define pxr_PcpDependencyFlagsToString pxrInternal_v0_21__pxrReserved___PcpDependencyFlagsToString


#ifdef __cplusplus
}
#endif
