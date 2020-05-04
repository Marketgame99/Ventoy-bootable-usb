/******************************************************************************
 * Language.c
 *
 * Copyright (c) 2020, longpanda <admin@ventoy.net>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 3 of the
 * License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 *
 */
 
#include <Windows.h>
#include "Ventoy2Disk.h"
#include "Language.h"

const TCHAR * g_Str_English[STR_ID_MAX] =
{
    TEXT("Error"),
    TEXT("Warning"),
    TEXT("Info"),
    TEXT("Please run under the correct directory!"),
    TEXT("Device"),
    TEXT("Ventoy At Local"),
    TEXT("Ventoy In Device"),
    TEXT("Status - READY"),
    TEXT("Install"),
    TEXT("Update"),
    TEXT("Upgrade operation is safe, ISO files will be unchanged.\r\nContinue?"),
    TEXT("The disk will be formatted and all the data will be lost.\r\nContinue?"),
    TEXT("The disk will be formatted and all the data will be lost.\r\nContinue? (Double Check)"),
    TEXT("Congratulations!\r\nVentoy has been successfully installed to the device."),
    TEXT("An error occurred during the installation. You can replug the USB and try again. Check log.txt for detail."),
    TEXT("Congratulations!\r\nVentoy has been successfully updated to the device."),
    TEXT("An error occurred during the update. You can replug the USB and try again. Check log.txt for detail."),

    TEXT("A thread is running, please wait..."),
};

const TCHAR * g_Str_German[STR_ID_MAX] =
{
    TEXT("Fehler"),
    TEXT("Warnung"),
    TEXT("Info"),
    TEXT("Bitte in dem richtigen Verzeichnis starten!"),
    TEXT("Gerät"),
    TEXT("Ventoy (lokal)"),
    TEXT("Ventoy (Gerät)"),
    TEXT("Status - BEREIT"),
    TEXT("Installieren"),
    TEXT("Aktualisieren"),
    TEXT("Die Aktualisierung ist sicher, ISO-Dateien bleiben unverändert.\r\Fortfahren?"),
    TEXT("Das Gerät wird formatiert und alle Daten gehen verloren.\r\Fortfahren?"),
    TEXT("Das Gerät wird formatiert und alle Daten gehen verloren.\r\Fortfahren? (erneute Überprüfung)"),
    TEXT("Herzlichen Glückwunsch!\r\nVentoy wurde erfolgreich auf dem Gerät installiert."),
    TEXT("Während der Installation ist ein Fehler aufgetreten. Stecken Sie das Gerät neu ein und versuchen Sie es erneut. Überprüfen sie die log.txt auf Details."),
    TEXT("Herlichen Glückwunsch!\r\nVentoy wurde erfolgreich auf dem Gerät aktualisiert."),
    TEXT("Während der Aktualisierung ist ein Fehler aufgetreten. Stecken Sie das Gerät neu ein und versuchen Sie es erneut. Überprüfen sie die log.txt auf Details."),

    TEXT("Ein Thread läuft, bitte warten..."),
};

const TCHAR * g_Str_ChineseSimple[STR_ID_MAX] =
{
    TEXT("错误"),
    TEXT("警告"),
    TEXT("提醒"),
    TEXT("请在正确的目录下运行!"),
    TEXT("设备"),
    TEXT("本地 Ventoy"),
    TEXT("设备上 Ventoy"),
    TEXT("状态 - 准备就绪"),
    TEXT("安装"),
    TEXT("升级"),
    TEXT("升级操作是安全的, ISO文件不会丢失\r\n是否继续？"),
    TEXT("磁盘会被格式化, 所有数据都会丢失!\r\n是否继续？"),
    TEXT("磁盘会被格式化, 所有数据都会丢失!\r\n再次确认是否继续？"),
    TEXT("恭喜你! Ventoy 已经成功安装到此设备中."),
    TEXT("安装 Ventoy 过程中发生错误. 你可以重新拔插一下U盘然后重试一次, 详细信息请查阅 log.txt 文件."),
    TEXT("恭喜你! 新版本的 Ventoy 已经成功更新到此设备中."),
    TEXT("更新 Ventoy 过程中遇到错误. 你可以重新拔插一下U盘然后重试一次, 详细信息请查阅 log.txt 文件."),

    TEXT("当前有任务正在运行, 请等待..."),
};

const TCHAR * GetString(enum STR_ID ID)
{
    return g_Str_English[ID];
};
