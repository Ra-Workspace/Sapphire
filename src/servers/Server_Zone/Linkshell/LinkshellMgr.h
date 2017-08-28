#ifndef CORE_LINKSHELLMGR_H
#define CORE_LINKSHELLMGR_H

#include <boost/shared_ptr.hpp>
#include <map>

namespace Core
{
class Linkshell;
typedef boost::shared_ptr< Linkshell > LinkshellPtr;

class LinkshellMgr
{
private:
   std::map< uint32_t, LinkshellPtr > m_linkshellIdMap;
   std::map< std::string, LinkshellPtr > m_linkshellNameMap;

public:
   LinkshellMgr();

   bool loadLinkshells();
};

}
#endif //CORE_LINKSHELLMGR_H
