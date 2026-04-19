#pragma once

#include "includer.h"
#include "maths.h"

namespace Bytebeats
{
	DWORD WINAPI SHITYA(LPVOID lpvd)
	{
		HWAVEOUT hWaveOut = 0;
		WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 32100, 32100, 1, 8, 0 };
		waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);

		if (waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL) != MMSYSERR_NOERROR) {
			return 1;
		}

		const int bufferSize = 17000 * 60;
		BYTE* sbuffer = new BYTE[bufferSize];
		DWORD t = 0;

		while (true) {
			for (int i = 0; i < bufferSize; i++, t++) {
				sbuffer[i] = (BYTE)(t * ((t >> 80 | t >> 4) & 194 & t >> 100));
			}
			WAVEHDR header = { (LPSTR)sbuffer, (DWORD)bufferSize, 0, 0, 0, 0, 0, 0 };
			waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
			waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
			Sleep(30000);
			waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));

			while (!(header.dwFlags & WHDR_DONE)) {
				Sleep(10);
			}
		}
		return 0;
	}

	DWORD WINAPI OHS(LPVOID lpvd)
	{
		HWAVEOUT hWaveOut = 0;
		WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 32100, 32100, 1, 8, 0 };
		waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);

		const int bufferSize = 17000 * 60;
		BYTE* sbuffer = new BYTE[bufferSize];
		DWORD t = 0;

		if (waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL) != MMSYSERR_NOERROR) {
			return 1;
		}

		while (true) {
			for (int i = 0; i < bufferSize; i++, t++) {
				sbuffer[i] = (BYTE)(t * ((t >> 20 | t >> 4) & 34 & t >> 100));
			}
			WAVEHDR header = { (LPSTR)sbuffer, (DWORD)bufferSize, 0, 0, 0, 0, 0, 0 };
			waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
			waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
			Sleep(30000);
			waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));

			while (!(header.dwFlags & WHDR_DONE)) {
				Sleep(10);
			}
		}
		return 0;
	}

	DWORD WINAPI BLOCKY(LPVOID lpvd)
	{
		HWAVEOUT hWaveOut = 0;
		WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 32100, 32100, 1, 8, 0 };
		waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);

		const int bufferSize = 32100 * 5;
		BYTE* sbuffer = new BYTE[bufferSize];
		DWORD t = 0;

		while (true) {
			for (int i = 0; i < bufferSize; i++, t++) {
				DWORD c = t * 4;
				DWORD freq = (c | c << 2) >> 800;

				sbuffer[i] = (BYTE)(t | (freq | t) % 300);
			}

			WAVEHDR header = { (LPSTR)sbuffer, (DWORD)bufferSize, 0, 0, 0, 0, 0, 0 };
			waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
			waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));

			Sleep(5000);

			waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
		}

		delete[] sbuffer;
		return 0;
	}

	DWORD WINAPI SIREN(LPVOID lpvd)
	{
		HWAVEOUT hWaveOut = 0;
		WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 32100, 32100, 1, 8, 0 };

		waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);

		BYTE sbuffer[17000 * 60];

		DWORD c = 0;

		while (true)
		{
			for (DWORD t = 0; t < sizeof(sbuffer); t++)
			{
				double wave = Math::SineWave(1, c * 0.0311, (c & 32717), wfx.nSamplesPerSec * 2);

				sbuffer[t] = (int(wave * 0xA) & 0xF1FF);

				c++;
			}

			WAVEHDR header = { (LPSTR)sbuffer, sizeof(sbuffer), 0, 0, 0, 0, 0, 0 };

			waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
			waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
			waveOutSetVolume(hWaveOut, MAKELONG(0xFFFF, 0xFFFF));

			Sleep(1000);
		}

		delete[] sbuffer;
		return 0x00;
	}

	DWORD WINAPI BYTES(LPVOID lpvd) {
		Sleep(5000);
		HWAVEOUT hWaveOut = 0;
		WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 32100, 32100, 1, 8, 0 };
		waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);

		const int bufferSize = 17000 * 60;
		BYTE* sbuffer = new BYTE[bufferSize];
		DWORD t = 0;

		while (true) {
			for (int i = 0; i < bufferSize; i++, t++) {
				sbuffer[i] = (BYTE)(t * ((t >> 1 | t >> 100) & 80 & t >> 1));
			}
			WAVEHDR header = { (LPSTR)sbuffer, (DWORD)bufferSize, 0, 0, 0, 0, 0, 0 };
			waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
			waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
			Sleep(30000);
			waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
		}
		return 0;
	}
}