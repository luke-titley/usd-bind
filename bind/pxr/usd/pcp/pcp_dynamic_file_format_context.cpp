#include <cppmm_bind.hpp>
#include <pxr/usd/pcp/dynamicFileFormatContext.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class PcpDynamicFileFormatContext
struct PcpDynamicFileFormatContext
{
public:
    using BoundType = pxr::PcpDynamicFileFormatContext;

} CPPMM_OPAQUEPTR; // struct PcpDynamicFileFormatContext

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
