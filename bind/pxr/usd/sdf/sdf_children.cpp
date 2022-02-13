#if 0
#include <pxr/usd/sdf/children.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class Sdf_Children
/// 
/// Sdf_Children generically represents the children of an object. For
/// instance, it might be used for the name children of a prim or the
/// relationship targets of a relationship.
/// 
/// The provided ChildPolicy class determines how this object behaves.
/// It primarily specifies how to map between keys (such as the name of
/// an object) and values (such as SpecHandles for those objects).
template <class ChildPolicy>
struct Sdf_Children {
    using BoundType = pxr::Sdf_Children<ChildPolicy>;

    Sdf_Children<ChildPolicy>();

    Sdf_Children<ChildPolicy>(const pxr::Sdf_Children& other);

    Sdf_Children<ChildPolicy>(const pxr::SdfLayerHandle& layer, const pxr::SdfPath& parentPath, const pxr::TfToken& childrenKey, const pxr::Sdf_Children::KeyPolicy& keyPolicy);

    /// Return whether this object is valid.
    bool IsValid() const;

    /// Return the number of children that this object contains.
    size_t GetSize() const;

    /// Return the child at the specified index.
    pxr::Sdf_Children::ValueType GetChild(size_t index) const;

    /// Find the index of the specified key, or return the size if it's not found.
    size_t Find(const pxr::Sdf_Children::KeyType& key) const;

    /// Find the key that corresponds to \a value, or return a default
    /// constructed key if it's not found.
    pxr::Sdf_Children::KeyType FindKey(const pxr::Sdf_Children::ValueType& value) const;

    /// Return true if this object and \a other are equivalent.
    bool IsEqualTo(const pxr::Sdf_Children& other) const;

    /// Replace this object's children with the ones in \a values.
    bool Copy(const UNKNOWN& values, const std::string& type);

    /// Insert a new child at the specified \a index.
    bool Insert(const pxr::Sdf_Children::ValueType& value, size_t index, const std::string& type);

    /// Erase the child with the specified key.
    bool Erase(const pxr::Sdf_Children::KeyType& key, const std::string& type);

} CPPMM_OPAQUEPTR; // struct Sdf_Children

// TODO: fill in explicit instantiations, e.g.:
// template class Sdf_Children<int>;
// using Sdf_ChildrenInt = pxr::Sdf_Children<int>;


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

// TODO: fill in explicit instantiations
// template class pxr::Sdf_Children<int>;
#endif
