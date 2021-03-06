/*****************************************************************************
  groupBy.h

  (c) 2009, 2010 - Aaron Quinlan
  Center for Public Health Genomics
  University of Virginia
  aaronquinlan@gmail.com

  Licenced under the GNU General Public License 2.0 license.
******************************************************************************/

#ifndef GROUPBY_H
#define GROUPBY_H

#include "FiloTool.h"

namespace File { 
  
class GroupByTool : public AbstractTool {
  
    public:
        GroupByTool(void);
        ~GroupByTool(void);

    public:
        int Help(void);
        int Run(int argc, char* argv[]); 
        
    private: 
        struct CountSettings;
        CountSettings* m_settings;
};
  
} // namespace Filo

#endif // GROUPBY_H