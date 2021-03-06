#include "pch.h"
#include <iostream>
#include <windows.h>
#include <tchar.h>

int main()
{
	setlocale(0, "");
	SYSTEM_INFO Info; 
	GetSystemInfo(&Info);

	_tprintf(TEXT("Iнфа з GetSystemInfo: \n"));

	_tprintf(TEXT("OEM ID: %u\n"), Info.dwOemId);

	_tprintf(TEXT("Архiтектура системи процесора: %u\n"), Info.wProcessorArchitecture);
	_tprintf(TEXT("wReserved: %u\n"), Info.wReserved);

	_tprintf(TEXT("Number of processors: %u\n"), Info.dwNumberOfProcessors);

	_tprintf(TEXT("Розмір сторінки: %u\n"), Info.dwPageSize);

	_tprintf(TEXT("Minimum application address: %lx\n"), Info.lpMinimumApplicationAddress);

	_tprintf(TEXT("Maximum application address: %lx\n"), Info.lpMaximumApplicationAddress);

	_tprintf(TEXT("Active processor mask: %u\n\n"), Info.dwActiveProcessorMask);

	_tprintf(TEXT("Кі-сть процесорiв в системi: %u\n"), Info.dwNumberOfProcessors);

	_tprintf(TEXT("Processor type: %u\n"), Info.dwProcessorType);

	_tprintf(TEXT("Гранулярнiсть : %u\n"), Info.dwAllocationGranularity);

	_tprintf(TEXT("Рiвень архiтектурно-залежного процесора системи: %u\n"), Info.wProcessorLevel);

	_tprintf(TEXT("Ревiзiя архiтектурно-залежного процесора: %u\n"), Info.wProcessorRevision);

	system("pause");
}