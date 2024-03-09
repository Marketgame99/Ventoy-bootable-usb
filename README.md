<div align="center">
    <!-- Logo -->
    <h1><img src="https://www.ventoy.net/static/img/ventoy.png?v=1" height="24px" alt="Ventoy logo"> Ventoy</h1>
    <a href="https://www.ventoy.net">Visit our website: ventoy.net</a>
    <!-- Badges -->
    <div>
        <br>
        <img alt="Release number" src="https://img.shields.io/github/release/ventoy/Ventoy.svg?style=flat">
        <img alt="License" src="https://img.shields.io/github/license/ventoy/Ventoy?style=flat">
        <img alt="Star count" src="https://img.shields.io/github/stars/ventoy/Ventoy?style=flat">
        <img alt="Download count" src="https://img.shields.io/github/downloads/ventoy/Ventoy/total.svg?style=flat">
        <img alt="Action status" src="https://img.shields.io/github/actions/workflow/status/ventoy/Ventoy/ci.yml?label=actions&logo=github&style=flat">
    </div>
</div>

## About

An open-source tool to create a bootable USD drive for multiple ISO, WIM, IMG, VHD(x), EFI files.

With Ventoy, you don't need to repeatedly format the disk -- simply copy the image files to the USB drive and boot it. You can copy multiple images at a time and select which one you'd like to boot to from a menu. Furthermore, you can browse image files in the local disk and boot them right there. Simple!

Most operating systems are supported ([details](https://github.com/ventoy/Ventoy/tree/master?tab=readme-ov-file#tested-os)). Over 1,100 ISO files are tested ([list](https://www.ventoy.net/en/isolist.html)), and over 90% of the distros in [distrowatch.com](https://distrowatch.com) are supported ([details](https://www.ventoy.net/en/distrowatch.html)).

<div align="center">
    <!-- Product Showcase -->
    <img src="https://www.ventoy.net/static/img/screen/screen_uefi.png" width="720px" alt="Ventoy screenshot">
</div>

## Features
* 100% open source
* Simple to use
* Fast (limited only by the speed of copying iso file)
* Can be installed in USB/Local Disk/SSD/NVMe/SD Card
* Directly boot from ISO/WIM/IMG/VHD(x)/EFI files, no extraction needed
* Support to browse and boot ISO/WIM/IMG/VHD(x)/EFI files in local disk
* No need to be continuous in disk for ISO/WIM/IMG/VHD(x)/EFI files
* MBR and GPT partition style supported (1.0.15+)
* x86 Legacy BIOS, IA32 UEFI, x86_64 UEFI, ARM64 UEFI, MIPS64EL UEFI supported
* IA32/x86_64 UEFI Secure Boot supported (1.0.07+)
* Linux Persistence supported (1.0.11+)
* Windows auto installation supported (1.0.09+)
* Linux auto installation supported (1.0.09+)
* Variables Expansion supported for Windows/Linux auto installation script
* FAT32/exFAT/NTFS/UDF/XFS/Ext2(3)(4) supported for main partition
* ISO files larger than 4GB supported
* Menu alias, Menu tip message supported
* Password protect supported
* Native boot menu style for Legacy & UEFI
* Most types of OS supported, 1100+ iso files tested
* Linux vDisk boot supported
* Not only boot but also complete installation process
* Menu dynamically switchable between List/TreeView mode
* "Ventoy Compatible" concept
* Plugin Framework and GUI plugin configurator
* Injection files to runtime environment
* Boot configuration file dynamically replacement
* Highly customizable theme and menu
* USB drive write-protected support
* USB normal use unaffected
* Data nondestructive during version upgrade
* No need to update Ventoy when a new distro is released



## Tested operating systems

### Windows

Windows 7, Windows 8, Windows 8.1, Windows 10, Windows 11, WinPE

### Windows Server

Windows Server 2012, Windows Server 2012 R2, Windows Server 2016, Windows Server 2019, Windows Server 2022

### Linux

Debian, Ubuntu, CentOS(6/7/8/9), RHEL(6/7/8/9), Deepin, Fedora, Rocky Linux, AlmaLinux, EuroLinux(6/7/8/9), openEuler, OpenAnolis, SLES, openSUSE, MX Linux, Manjaro, Linux Mint, Endless OS, Elementary OS, Solus, Linx, Zorin, antiX, PClinuxOS, Arch, ArcoLinux, ArchLabs, BlackArch, Obarun, Artix Linux, Puppy Linux, Tails, Slax, Kali, Mageia, Slackware, Q4OS, Archman, Gentoo, Pentoo, NixOS, Kylin, openKylin, Ubuntu Kylin, KylinSec, Lubuntu, Xubuntu, Kubuntu, Ubuntu MATE, Ubuntu Budgie, Ubuntu Studio, Bluestar, OpenMandriva, ExTiX, Netrunner, ALT Linux, Nitrux, Peppermint, KDE neon, Linux Lite, Parrot OS, Qubes, Pop OS, ROSA, Void Linux, Star Linux, EndeavourOS, MakuluLinux, Voyager, Feren, ArchBang, LXLE, Knoppix, Calculate Linux, Clear Linux, Pure OS, Oracle Linux, Trident, Septor, Porteus, Devuan, GoboLinux, 4MLinux, Simplicity Linux, Zeroshell, Android-x86, netboot.xyz, Slitaz, SuperGrub2Disk, Proxmox VE, Kaspersky Rescue, SystemRescueCD, MemTest86, MemTest86+, MiniTool Partition Wizard, Parted Magic, veket, Sabayon, Scientific, alpine, ClearOS, CloneZilla, Berry Linux, Trisquel, Ataraxia Linux, Minimal Linux Live, BackBox Linux, Emmabuntüs, ESET SysRescue Live,Nova Linux, AV Linux, RoboLinux, NuTyX, IPFire, SELKS, ZStack, Enso Linux, Security Onion, Network Security Toolkit, Absolute Linux, TinyCore, Springdale Linux, Frost Linux, Shark Linux, LinuxFX, Snail Linux, Astra Linux, Namib Linux, Resilient Linux, Virage Linux, Blackweb Security OS, R-DriveImage, O-O.DiskImage, Macrium, ToOpPy LINUX, GNU Guix, YunoHost, foxclone, siduction, Adelie Linux, Elive, Pardus, CDlinux, AcademiX, Austrumi, Zenwalk, Anarchy, DuZeru, BigLinux, OpenMediaVault, Ubuntu DP, Exe GNU/Linux, 3CX Phone System, KANOTIX, Grml, Karoshi, PrimTux, ArchStrike, CAELinux, Cucumber, Fatdog, ForLEx, Hanthana, Kwort, MiniNo, Redcore, Runtu, Asianux, Clu Linux Live, Uruk, OB2D, BlueOnyx, Finnix, HamoniKR, Parabola, LinHES, LinuxConsole, BEE free, Untangle, Pearl, Thinstation, TurnKey, tuxtrans, Neptune, HefftorLinux, GeckoLinux, Mabox Linux, Zentyal, Maui, Reborn OS, SereneLinux , SkyWave Linux, Kaisen Linux, Regata OS, TROM-Jaro, DRBL Linux, Chalet OS, Chapeau, Desa OS, BlankOn, OpenMamba, Frugalware, Kibojoe Linux, Revenge OS, Tsurugi Linux, Drauger OS, Hash Linux, gNewSense, Ikki Boot, SteamOS, Hyperbola, VyOS, EasyNAS, SuperGamer, Live Raizo, Swift Linux, RebeccaBlackOS, Daphile, CRUX, Univention, Ufficio Zero, Rescuezilla, Phoenix OS, Garuda Linux, Mll, NethServer, OSGeoLive, Easy OS, Volumio, FreedomBox, paldo, UBOS, Recalbox, batocera, Lakka, LibreELEC, Pardus Topluluk, Pinguy, KolibriOS, Elastix, Arya, Omoikane, Omarine, Endian Firewall, Hamara, Rocks Cluster, MorpheusArch, Redo, Slackel, SME Server, APODIO, Smoothwall, Dragora, Linspire, Secure-K OS, Peach OSI, Photon, Plamo, SuperX, Bicom, Ploplinux, HP SPP, LliureX, Freespire, DietPi, BOSS, Webconverger, Lunar, TENS, Source Mage, RancherOS, T2, Vine, Pisi, blackPanther, mAid, Acronis, Active.Boot, AOMEI, Boot.Repair, CAINE, DaRT, EasyUEFI, R-Drive, PrimeOS, Avira Rescue System, bitdefender, Checkra1n Linux, Lenovo Diagnostics, Clover, Bliss-OS, Lenovo BIOS Update, Arcabit Rescue Disk, MiyoLinux, TeLOS, Kerio Control, RED OS, OpenWrt, MocaccinoOS, EasyStartup, Pyabr, Refracta, Eset SysRescue, Linpack Xtreme, Archcraft, NHVBOOT, pearOS, SeaTools, Easy Recovery Essentional, iKuai, StorageCraft SCRE, ZFSBootMenu, TROMjaro, BunsenLabs, Todo en Uno, ChallengerOS, Nobara, Holo, CachyOS, Peux OS, Vanilla OS, ShredOS, paladin, Palen1x, dban, ReviOS, HelenOS, XeroLinux, ......

#### Unix

DragonFly, FreeBSD, pfSense, GhostBSD, FreeNASS TrueNAS, XigmaNAS, FuryBSD, OPNsense, HardenedBSD, MidnightBSD, ClonOS, EmergencyBootKit,

#### ChromeOS
FydeOS, CloudReady, ChromeOS Flex

### Other

VMware ESXi, Citrix XenServer, Xen XCP-ng

## Installation

Our website features tutorials regarding how you may:

* [install a prebuilt binary](https://www.ventoy.net/en/doc_start.html)
* [compile from source](DOC/BuildVentoyFromSource.txt)

A complete list of tutorials is as follows:

Title | Link
-|-
**Install & Update** | [https://www.ventoy.net/en/doc_start.html](https://www.ventoy.net/en/doc_start.html)
**Browse/Boot Files In Local Disk** | [https://www.ventoy.net/en/doc_browser.html](https://www.ventoy.net/en/doc_browser.html)
**Secure Boot** | [https://www.ventoy.net/en/doc_secure.html](https://www.ventoy.net/en/doc_secure.html)
**Customize Theme** | [https://www.ventoy.net/en/plugin_theme.html](https://www.ventoy.net/en/plugin_theme.html)  
**Global Control** | [https://www.ventoy.net/en/plugin_control.html](https://www.ventoy.net/en/plugin_control.html)  
**Image List** | [https://www.ventoy.net/en/plugin_imagelist.html](https://www.ventoy.net/en/plugin_imagelist.html)  
**Auto Installation** | [https://www.ventoy.net/en/plugin_autoinstall.html](https://www.ventoy.net/en/plugin_autoinstall.html)  
**Injection Plugin** | [https://www.ventoy.net/en/plugin_injection.html](https://www.ventoy.net/en/plugin_injection.html)  
**Persistence Support** | [https://www.ventoy.net/en/plugin_persistence.html](https://www.ventoy.net/en/plugin_persistence.html)  
**Boot WIM file** | [https://www.ventoy.net/en/plugin_wimboot.html](https://www.ventoy.net/en/plugin_wimboot.html)  
**Windows VHD Boot** | [https://www.ventoy.net/en/plugin_vhdboot.html](https://www.ventoy.net/en/plugin_vhdboot.html)  
**Linux vDisk Boot** | [https://www.ventoy.net/en/plugin_vtoyboot.html](https://www.ventoy.net/en/plugin_vtoyboot.html)  
**DUD Plugin** | [https://www.ventoy.net/en/plugin_dud.html](https://www.ventoy.net/en/plugin_dud.html)  
**Password Plugin** | [https://www.ventoy.net/en/plugin_password.html](https://www.ventoy.net/en/plugin_password.html)  
**Conf Replace Plugin** | [https://www.ventoy.net/en/plugin_bootconf_replace.html](https://www.ventoy.net/en/plugin_bootconf_replace.html)  
**Menu Class** | [https://www.ventoy.net/en/plugin_menuclass.html](https://www.ventoy.net/en/plugin_menuclass.html)  
**Menu Alias** | [https://www.ventoy.net/en/plugin_menualias.html](https://www.ventoy.net/en/plugin_menualias.html)  
**Menu Extension** | [https://www.ventoy.net/en/plugin_grubmenu.html](https://www.ventoy.net/en/plugin_grubmenu.html)  
**Memdisk Mode** | [https://www.ventoy.net/en/doc_memdisk.html](https://www.ventoy.net/en/doc_memdisk.html)  
**TreeView Mode** | [https://www.ventoy.net/en/doc_treeview.html](https://www.ventoy.net/en/doc_treeview.html)  
**Disk Layout MBR** | [https://www.ventoy.net/en/doc_disk_layout.html](https://www.ventoy.net/en/doc_disk_layout.html)  
**Disk Layout GPT** | [https://www.ventoy.net/en/doc_disk_layout_gpt.html](https://www.ventoy.net/en/doc_disk_layout_gpt.html)  
**Search Configuration** | [https://www.ventoy.net/en/doc_search_path.html](https://www.ventoy.net/en/doc_search_path.html)

## Links

* [Frequently-asked questions](https://www.ventoy.net/en/faq.html)
* [Forums](https://forums.ventoy.net)

## Support us

We appreciate your support in keeping Ventoy free and open-source. Your funding will go towards server hosting, domain name and bandwith costs, USB sticks and hard drives for testing, and other operational costs.

In order to keep Ventoy free and open-source, we provide the optional [subscription service](https://www.ventoy.net/en/doc_subscription.html).

Alternatively, you can make a one-off donation via:

### Alipay / WeChat Pay

Alipay | WeChat Pay
-|-
<img src="https://www.ventoy.net/static/img/AliPay.png" width="250" height="250">|<img src="https://www.ventoy.net/static/img/WeChatPay.png" width="250" height="250">

### PayPal

You can transfer to my PayPal account `admin@ventoy.net` or just click [https://www.paypal.me/ventoy](https://www.paypal.me/ventoy)  

### Crypto

Bitcoin address: `19mZDWzZgzkHCi9YX9H3fYCUuCHq3W6wfT`

### LiberaPay

Recurring donation: [https://liberapay.com/Ventoy/donate](https://liberapay.com/Ventoy/donate)