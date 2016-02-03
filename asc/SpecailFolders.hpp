# pragma once
# include <Siv3D.hpp>

namespace asc
{
	namespace SpecialFolders
	{
		/// <summary>
		/// デスクトップのパスを返します。パスの末尾には L'\\' が付きます。
		/// </summary>
		/// <returns>
		/// デスクトップのパス
		/// </returns>
		FilePath Desctop();

		/// <summary>
		/// スタートメニューのパスを返します。パスの末尾には L'\\' が付きます。
		/// </summary>
		/// <returns>
		/// スタートメニューのパス
		/// </returns>
		FilePath StartMenu();

		/// <summary>
		/// 一時ファイル用のディレクトリのパスを返します。パスの末尾には L'\\' が付きます。
		/// </summary>
		/// <returns>
		/// 一時ファイル用のディレクトリのパス
		/// </returns>
		FilePath Programs();

		/// <summary>
		/// スタートアップのパスを返します。パスの末尾には L'\\' が付きます。
		/// </summary>
		/// <returns>
		/// スタートアップのパス
		/// </returns>
		FilePath StartUp();

		/// <summary>
		/// ドキュメントのパスを返します。パスの末尾には L'\\' が付きます。
		/// </summary>
		/// <returns>
		/// ドキュメントののパス
		/// </returns>
		FilePath Documents();

		/// <summary>
		/// データの保存用のディレクトリのパスを返します。パスの末尾には L'\\' が付きます。
		/// </summary>
		/// <returns>
		/// データの保存用のディレクトリのパス
		/// </returns>
		FilePath AppData();

		/// <summary>
		/// インターネットキャッシュのディレクトリのパスを返します。パスの末尾には L'\\' が付きます。
		/// </summary>
		/// <returns>
		/// インターネットキャッシュのディレクトリのパス
		/// </returns>
		FilePath InternetCache();
	}
}