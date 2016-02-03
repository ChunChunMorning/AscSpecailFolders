# include "../SpecailFolders.hpp"
# include <shlobj.h>
# include <Siv3D.hpp>

namespace asc
{
	namespace SpecialFolders
	{
		FilePath Desctop()
		{
			wchar path[MAX_PATH];

			if (SHGetSpecialFolderPath(NULL, path, CSIDL_DESKTOP, true))
				return Format(path, L"\\");

			return nullptr;
		}

		FilePath StartMenu()
		{
			wchar path[MAX_PATH];

			if (SHGetSpecialFolderPath(NULL, path, CSIDL_STARTMENU, true))
				return Format(path, L"\\");

			return nullptr;
		}

		FilePath Programs()
		{
			wchar path[MAX_PATH];

			if (SHGetSpecialFolderPath(NULL, path, CSIDL_PROGRAMS, true))
				return Format(path, L"\\");

			return nullptr;
		}

		FilePath StartUp()
		{
			wchar path[MAX_PATH];

			if (SHGetSpecialFolderPath(NULL, path, CSIDL_STARTUP, true))
				return Format(path, L"\\");

			return nullptr;
		}

		FilePath Documents()
		{
			wchar path[MAX_PATH];

			if (SHGetSpecialFolderPath(NULL, path, CSIDL_PERSONAL, true))
				return Format(path, L"\\");

			return nullptr;
		}

		FilePath AppData()
		{
			wchar path[MAX_PATH];

			if (SHGetSpecialFolderPath(NULL, path, CSIDL_APPDATA, true))
				return Format(path, L"\\");

			return nullptr;
		}

		FilePath InternetCache()
		{
			wchar path[MAX_PATH];

			if (SHGetSpecialFolderPath(NULL, path, CSIDL_INTERNET_CACHE, true))
				return Format(path, L"\\");

			return nullptr;
		}
	}
}
