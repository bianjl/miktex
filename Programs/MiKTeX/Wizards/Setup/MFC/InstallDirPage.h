/* InstallDirPage.h:                                    -*- C++ -*-

   Copyright (C) 1999-2016 Christian Schenk

   This file is part of the MiKTeX Setup Wizard.

   The MiKTeX Setup Wizard is free software; you can redistribute it
   and/or modify it under the terms of the GNU General Public License
   as published by the Free Software Foundation; either version 2, or
   (at your option) any later version.

   The MiKTeX Setup Wizard is distributed in the hope that it will be
   useful, but WITHOUT ANY WARRANTY; without even the implied warranty
   of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with the MiKTeX Setup Wizard; if not, write to the Free
   Software Foundation, 59 Temple Place - Suite 330, Boston, MA
   02111-1307, USA. */

#pragma once

class InstallDirPage :
  public CPropertyPage
{
private:
  enum { IDD = IDD_INSTALLDIR };

protected:
  DECLARE_MESSAGE_MAP();

public:
  InstallDirPage();

protected:
  virtual BOOL OnInitDialog();

protected:
  virtual BOOL OnSetActive();

protected:
  virtual void DoDataExchange(CDataExchange * pDX);

protected:
  virtual LRESULT OnWizardNext();

protected:
  virtual LRESULT OnWizardBack();

protected:
  virtual BOOL OnKillActive();

protected:
  afx_msg void OnChangePathName();

protected:
  afx_msg void OnBrowse();

private:
  static INT CALLBACK BrowseCallbackProc(HWND hwnd, UINT uMsg, LPARAM lParam, LPARAM pData);

private:
  CString installDir;

private:
  bool noDdv;

private:
  class SetupWizard * pSheet = nullptr;
};
