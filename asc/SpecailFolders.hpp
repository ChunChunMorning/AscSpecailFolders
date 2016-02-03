# pragma once
# include <Siv3D.hpp>

namespace asc
{
	namespace SpecialFolders
	{
		/// <summary>
		/// �f�X�N�g�b�v�̃p�X��Ԃ��܂��B�p�X�̖����ɂ� L'\\' ���t���܂��B
		/// </summary>
		/// <returns>
		/// �f�X�N�g�b�v�̃p�X
		/// </returns>
		FilePath Desctop();

		/// <summary>
		/// �X�^�[�g���j���[�̃p�X��Ԃ��܂��B�p�X�̖����ɂ� L'\\' ���t���܂��B
		/// </summary>
		/// <returns>
		/// �X�^�[�g���j���[�̃p�X
		/// </returns>
		FilePath StartMenu();

		/// <summary>
		/// �ꎞ�t�@�C���p�̃f�B���N�g���̃p�X��Ԃ��܂��B�p�X�̖����ɂ� L'\\' ���t���܂��B
		/// </summary>
		/// <returns>
		/// �ꎞ�t�@�C���p�̃f�B���N�g���̃p�X
		/// </returns>
		FilePath Programs();

		/// <summary>
		/// �X�^�[�g�A�b�v�̃p�X��Ԃ��܂��B�p�X�̖����ɂ� L'\\' ���t���܂��B
		/// </summary>
		/// <returns>
		/// �X�^�[�g�A�b�v�̃p�X
		/// </returns>
		FilePath StartUp();

		/// <summary>
		/// �h�L�������g�̃p�X��Ԃ��܂��B�p�X�̖����ɂ� L'\\' ���t���܂��B
		/// </summary>
		/// <returns>
		/// �h�L�������g�̂̃p�X
		/// </returns>
		FilePath Documents();

		/// <summary>
		/// �f�[�^�̕ۑ��p�̃f�B���N�g���̃p�X��Ԃ��܂��B�p�X�̖����ɂ� L'\\' ���t���܂��B
		/// </summary>
		/// <returns>
		/// �f�[�^�̕ۑ��p�̃f�B���N�g���̃p�X
		/// </returns>
		FilePath AppData();

		/// <summary>
		/// �C���^�[�l�b�g�L���b�V���̃f�B���N�g���̃p�X��Ԃ��܂��B�p�X�̖����ɂ� L'\\' ���t���܂��B
		/// </summary>
		/// <returns>
		/// �C���^�[�l�b�g�L���b�V���̃f�B���N�g���̃p�X
		/// </returns>
		FilePath InternetCache();
	}
}