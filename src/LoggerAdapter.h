// Copyright (c) 2011-2016 The Cryptonote developers
// Copyright (c) 2015-2016 XDN developers
// Copyright (c) 2018-2019 xDrop developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include "Logging/LoggerManager.h"

namespace WalletGui {

class LoggerAdapter {

public:
  static LoggerAdapter& instance();
  void init();
  Logging::LoggerManager& getLoggerManager();

private:
  Logging::LoggerManager m_logManager;

  LoggerAdapter();
  ~LoggerAdapter();
};

}
