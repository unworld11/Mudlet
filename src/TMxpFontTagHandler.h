/***************************************************************************
 *   Copyright (C) 2020 by Gustavo Sousa - gustavocms@gmail.com            *
 *   Copyright (C) 2022 by Stephen Lyons - slysven@virginmedia.com         *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#ifndef MUDLET_TMXPFONTTAGHANDLER_H
#define MUDLET_TMXPFONTTAGHANDLER_H
#include "TMxpTagHandler.h"

// <FONT FACE=name [SIZE=size] [COLOR=foreground] [BACK=background]>
class TMxpFontTagHandler : public TMxpSingleTagHandler
{
public:
    TMxpFontTagHandler()
    : TMxpSingleTagHandler("FONT")
    {}

    TMxpTagHandlerResult handleStartTag(TMxpContext &context, TMxpClient& client, MxpStartTag* tag) override;

    TMxpTagHandlerResult handleEndTag(TMxpContext &context, TMxpClient& client, MxpEndTag* tag) override;
};
#include "TMxpTagHandler.h"
#endif //MUDLET_TMXPFONTTAGHANDLER_H
