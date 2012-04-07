/* === This file is part of Tomahawk Player - <http://tomahawk-player.org> ===
 *
 *   Copyright 2010-2011, Christian Muehlhaeuser <muesli@tomahawk-player.org>
 *   Copyright 2010-2011, Jeff Mitchell <jeff@tomahawk-player.org>
 *
 *   Tomahawk is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   Tomahawk is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with Tomahawk. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef FDONOTIFYPLUGIN_H
#define FDONOTIFYPLUGIN_H

#include "infosystem/infosystem.h"

namespace Tomahawk
{

namespace InfoSystem
{

class FdoNotifyPlugin : public InfoPlugin
{
    Q_OBJECT

public:
    FdoNotifyPlugin();
    virtual ~FdoNotifyPlugin();

protected slots:
    virtual void getInfo( Tomahawk::InfoSystem::InfoRequestData requestData )
    {
        Q_UNUSED( requestData );
    }

    virtual void pushInfo( Tomahawk::InfoSystem::InfoPushData pushData );

    virtual void notInCacheSlot( Tomahawk::InfoSystem::InfoStringHash criteria, Tomahawk::InfoSystem::InfoRequestData requestData )
    {
        Q_UNUSED( criteria );
        Q_UNUSED( requestData );
    }
};

}

}

#endif // FDONOTIFYPLUGIN_H
