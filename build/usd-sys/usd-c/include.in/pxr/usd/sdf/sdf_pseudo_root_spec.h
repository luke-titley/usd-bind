#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtValue_t_s pxrInternal_v0_21__pxrReserved____VtValue_t;
typedef pxrInternal_v0_21__pxrReserved____VtValue_t pxr_VtValue_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t_s pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t;
typedef pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t pxr_SdfLayerHandle_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfToken_t_s pxrInternal_v0_21__pxrReserved____TfToken_t;
typedef pxrInternal_v0_21__pxrReserved____TfToken_t pxr_TfToken_t;
typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfType_t_s pxrInternal_v0_21__pxrReserved____TfType_t;
typedef pxrInternal_v0_21__pxrReserved____TfType_t pxr_TfType_t;

typedef struct pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_t pxr_SdfPseudoRootSpec_t;


/** Returns true if this object is invalid or expired. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_IsDormant(
    pxr_SdfPseudoRootSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfPseudoRootSpec_IsDormant pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_IsDormant


/** Returns the layer that this object belongs to. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetLayer(
    pxr_SdfPseudoRootSpec_t const * this_
    , pxr_SdfLayerHandle_t * * return_);
#define pxr_SdfPseudoRootSpec_GetLayer pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetLayer


/** Returns the scene path of this object. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetPath(
    pxr_SdfPseudoRootSpec_t const * this_
    , pxr_SdfPath_t * * return_);
#define pxr_SdfPseudoRootSpec_GetPath pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetPath


/** Returns whether this object's layer can be edited. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_PermissionToEdit(
    pxr_SdfPseudoRootSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfPseudoRootSpec_PermissionToEdit pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_PermissionToEdit


/** Sets the value for the given metadata key.

It is an error to pass a value that is not the correct type for
that given key.

This is interim API which is likely to change.  Only editors with
an immediate specific need (like the Inspector) should use this API. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetInfo(
    pxr_SdfPseudoRootSpec_t * this_
    , pxr_TfToken_t const * key
    , pxr_VtValue_t const * value);
#define pxr_SdfPseudoRootSpec_SetInfo pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetInfo


/** Sets the value for \p entryKey to \p value within the dictionary 
       with the given metadata key \p dictionaryKey */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetInfoDictionaryValue(
    pxr_SdfPseudoRootSpec_t * this_
    , pxr_TfToken_t const * dictionaryKey
    , pxr_TfToken_t const * entryKey
    , pxr_VtValue_t const * value);
#define pxr_SdfPseudoRootSpec_SetInfoDictionaryValue pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetInfoDictionaryValue


/** Returns whether there is a setting for the scene spec info 
with the given key.

When asked for a value for one of its scene spec info, a valid value
will always be returned. But if this API returns \b false for a scene
spec info, the value of that info will be the defined default value.

When dealing with a composedLayer, it is not necessary to worry about
whether a scene spec info "has a value" because the composed layer will
always have a valid value, even if it is the default.

A spec may or may not have an expressed value for some of its
scene spec info.

This is interim API which is likely to change.  Only editors with
an immediate specific need (like the Inspector) should use this API. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_HasInfo(
    pxr_SdfPseudoRootSpec_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * key);
#define pxr_SdfPseudoRootSpec_HasInfo pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_HasInfo


/** Clears the value for scene spec info with the given \a key.

After calling this, HasInfo() will return \b false.
To make HasInfo() return \b true just set a value for that
scene spec info.

This is interim API which is likely to change.  Only editors with
an immediate specific need (like the Inspector) should use this API. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_ClearInfo(
    pxr_SdfPseudoRootSpec_t * this_
    , pxr_TfToken_t const * key);
#define pxr_SdfPseudoRootSpec_ClearInfo pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_ClearInfo


/** Returns the data type for the info with the given \a key. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetTypeForInfo(
    pxr_SdfPseudoRootSpec_t const * this_
    , pxr_TfType_t * * return_
    , pxr_TfToken_t const * key);
#define pxr_SdfPseudoRootSpec_GetTypeForInfo pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetTypeForInfo


/** Returns the fallback for the info with the given \a key. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetFallbackForInfo(
    pxr_SdfPseudoRootSpec_t const * this_
    , pxr_VtValue_t const * * return_
    , pxr_TfToken_t const * key);
#define pxr_SdfPseudoRootSpec_GetFallbackForInfo pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetFallbackForInfo


/** Returns whether this object has no significant data.

"Significant" here means that the object contributes opinions to
a scene. If this spec has any child scenegraph objects (e.g.,
prim or property spec), it will be considered significant even if
those child objects are not.
However, if \p ignoreChildren is \c true, these child objects
will be ignored.  */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_IsInert(
    pxr_SdfPseudoRootSpec_t const * this_
    , _Bool * return_
    , _Bool ignoreChildren);
#define pxr_SdfPseudoRootSpec_IsInert pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_IsInert


/** Returns \c true if the spec has a non-empty value with field
name \p name. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_HasField(
    pxr_SdfPseudoRootSpec_t const * this_
    , _Bool * return_
    , pxr_TfToken_t const * name);
#define pxr_SdfPseudoRootSpec_HasField pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_HasField


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetField(
    pxr_SdfPseudoRootSpec_t * this_
    , _Bool * return_
    , pxr_TfToken_t const * name
    , pxr_VtValue_t const * value);
#define pxr_SdfPseudoRootSpec_SetField pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetField


/** Clears a field. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_ClearField(
    pxr_SdfPseudoRootSpec_t * this_
    , _Bool * return_
    , pxr_TfToken_t const * name);
#define pxr_SdfPseudoRootSpec_ClearField pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_ClearField


/** Returns the prim's name. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetName(
    pxr_SdfPseudoRootSpec_t const * this_
    , std_string_t const * * return_);
#define pxr_SdfPseudoRootSpec_GetName pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetName


/** Returns true if setting the prim spec's name to \p newName will
succeed.

Returns false if it won't, and sets \p whyNot with a string
describing why not. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_CanSetName(
    pxr_SdfPseudoRootSpec_t const * this_
    , _Bool * return_
    , std_string_t const * newName
    , std_string_t * whyNot);
#define pxr_SdfPseudoRootSpec_CanSetName pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_CanSetName


/** Sets the prim's name.

Children prims must be unique by name. It is an error to
set the name to the same name as an existing child of this
prim's parent.

Setting validate to false, will skip validation of the \p newName
(that is, CanSetName will not be called).

Returns true if successful, false otherwise. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetName(
    pxr_SdfPseudoRootSpec_t * this_
    , _Bool * return_
    , std_string_t const * newName
    , _Bool validate);
#define pxr_SdfPseudoRootSpec_SetName pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetName


/** Returns true if the given string is a valid prim name. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_IsValidName(
    _Bool * return_
    , std_string_t const * name);
#define pxr_SdfPseudoRootSpec_IsValidName pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_IsValidName


/** Returns true if this prim has name children order specified */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_HasNameChildrenOrder(
    pxr_SdfPseudoRootSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfPseudoRootSpec_HasNameChildrenOrder pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_HasNameChildrenOrder


/** Adds a new name child \p name in the name children order.
If \p index is -1, the name is inserted at the end. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_InsertInNameChildrenOrder(
    pxr_SdfPseudoRootSpec_t * this_
    , pxr_TfToken_t const * name
    , int index);
#define pxr_SdfPseudoRootSpec_InsertInNameChildrenOrder pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_InsertInNameChildrenOrder


/** Removes a name child name from the name children order. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_RemoveFromNameChildrenOrder(
    pxr_SdfPseudoRootSpec_t * this_
    , pxr_TfToken_t const * name);
#define pxr_SdfPseudoRootSpec_RemoveFromNameChildrenOrder pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_RemoveFromNameChildrenOrder


/** Removes a name child name from the name children order by index. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_RemoveFromNameChildrenOrderByIndex(
    pxr_SdfPseudoRootSpec_t * this_
    , int index);
#define pxr_SdfPseudoRootSpec_RemoveFromNameChildrenOrderByIndex pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_RemoveFromNameChildrenOrderByIndex


/** Returns true if this prim has a property ordering specified. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_HasPropertyOrder(
    pxr_SdfPseudoRootSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfPseudoRootSpec_HasPropertyOrder pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_HasPropertyOrder


/** Add a new property \p name in the property order.
If \p index is -1, the name is inserted at the end. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_InsertInPropertyOrder(
    pxr_SdfPseudoRootSpec_t * this_
    , pxr_TfToken_t const * name
    , int index);
#define pxr_SdfPseudoRootSpec_InsertInPropertyOrder pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_InsertInPropertyOrder


/** Remove a property name from the property order. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_RemoveFromPropertyOrder(
    pxr_SdfPseudoRootSpec_t * this_
    , pxr_TfToken_t const * name);
#define pxr_SdfPseudoRootSpec_RemoveFromPropertyOrder pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_RemoveFromPropertyOrder


/** Remove a property name from the property order by index. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_RemoveFromPropertyOrderByIndex(
    pxr_SdfPseudoRootSpec_t * this_
    , int index);
#define pxr_SdfPseudoRootSpec_RemoveFromPropertyOrderByIndex pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_RemoveFromPropertyOrderByIndex


/** Sets the typeName of the model prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetTypeName(
    pxr_SdfPseudoRootSpec_t * this_
    , std_string_t const * value);
#define pxr_SdfPseudoRootSpec_SetTypeName pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetTypeName


/** Returns the comment string for this prim spec.

The default value for comment is @"". */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetComment(
    pxr_SdfPseudoRootSpec_t const * this_
    , std_string_t * * return_);
#define pxr_SdfPseudoRootSpec_GetComment pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetComment


/** Sets the comment string for this prim spec. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetComment(
    pxr_SdfPseudoRootSpec_t * this_
    , std_string_t const * value);
#define pxr_SdfPseudoRootSpec_SetComment pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetComment


/** Returns the documentation string for this prim spec.

The default value for documentation is @"". */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetDocumentation(
    pxr_SdfPseudoRootSpec_t const * this_
    , std_string_t * * return_);
#define pxr_SdfPseudoRootSpec_GetDocumentation pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetDocumentation


/** Sets the documentation string for this prim spec. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetDocumentation(
    pxr_SdfPseudoRootSpec_t * this_
    , std_string_t const * value);
#define pxr_SdfPseudoRootSpec_SetDocumentation pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetDocumentation


/** Returns whether this prim spec is active.

The default value for active is true. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetActive(
    pxr_SdfPseudoRootSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfPseudoRootSpec_GetActive pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetActive


/** Sets whether this prim spec is active. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetActive(
    pxr_SdfPseudoRootSpec_t * this_
    , _Bool value);
#define pxr_SdfPseudoRootSpec_SetActive pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetActive


/** Returns true if this prim spec has an opinion about active. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_HasActive(
    pxr_SdfPseudoRootSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfPseudoRootSpec_HasActive pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_HasActive


/** Removes the active opinion in this prim spec if there is one. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_ClearActive(
    pxr_SdfPseudoRootSpec_t * this_);
#define pxr_SdfPseudoRootSpec_ClearActive pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_ClearActive


/** Returns whether this prim spec will be hidden in browsers.

The default value for hidden is false. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetHidden(
    pxr_SdfPseudoRootSpec_t const * this_
    , _Bool * return_);
#define pxr_SdfPseudoRootSpec_GetHidden pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_GetHidden


/** Sets whether this prim spec will be hidden in browsers. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetHidden(
    pxr_SdfPseudoRootSpec_t * this_
    , _Bool value);
#define pxr_SdfPseudoRootSpec_SetHidden pxrInternal_v0_21__pxrReserved____SdfPseudoRootSpec_SetHidden


#ifdef __cplusplus
}
#endif
