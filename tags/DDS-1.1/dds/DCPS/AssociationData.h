// -*- C++ -*-
//
// $Id$
#ifndef OPENDDS_DCPS_ASSOCIATIONDATA_H
#define OPENDDS_DCPS_ASSOCIATIONDATA_H

#include "dds/DdsDcpsInfoUtilsC.h"


namespace OpenDDS
{

  namespace DCPS
  {

    struct AssociationData
    {
      RepoId                 remote_id_;
      // TBD - May change to a pointer (a smart pointer?)
      TransportInterfaceInfo remote_data_;
    };

  }  /* namespace DCPS */

}  /* namespace OpenDDS */

#endif  /* OPENDDS_DCPS_ASSOCIATIONDATA_H */
