#include <apt-pkg/cachefile.h>
#include <apt-pkg/configuration.h>
#include <apt-pkg/pkgcache.h>
#include <string>

#include "apt.h"

void Apt::List() {
  pkgInitConfig(*_config);
  pkgInitSystem(*_config, _system);

  pkgCacheFile cacheFile;
  pkgCache *cache = cacheFile.GetPkgCache();

  for (pkgCache::PkgIterator package = cache->PkgBegin(); !package.end();
       package++) {
    std::cout << package.Name() << std::endl;
  }
}
