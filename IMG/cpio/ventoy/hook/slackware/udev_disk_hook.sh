#!/ventoy/busybox/sh
#************************************************************************************
# Copyright (c) 2020, longpanda <admin@ventoy.net>
#
# This program is free software; you can redistribute it and/or
# modify it under the terms of the GNU General Public License as
# published by the Free Software Foundation; either version 3 of the
# License, or (at your option) any later version.
#
# This program is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, see <http://www.gnu.org/licenses/>.
#
#************************************************************************************

. /ventoy/hook/ventoy-hook-lib.sh

if is_ventoy_hook_finished || not_ventoy_disk "${1:0:-1}"; then
    exit 0
fi

ventoy_udev_disk_common_hook $*

#
# make a fake cdrom link
#
if [ -e /dev/sr3 ]; then
    if ! [ -e /dev/hdp ]; then
        ln -s $VTOY_DM_PATH /dev/hdp
    fi
else
    ln -s $VTOY_DM_PATH /dev/sr3
fi

# OK finish
set_ventoy_hook_finish

