// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE-CHROMIUM file.

#ifndef BRIGHTRAY_COMMON_CONTENT_CLIENT_H_
#define BRIGHTRAY_COMMON_CONTENT_CLIENT_H_

#include "base/compiler_specific.h"
#include "content/public/common/content_client.h"

namespace brightray {

class ContentClient : public content::ContentClient {
public:
  ContentClient();
  ~ContentClient();

private:
  virtual std::string GetUserAgent() const OVERRIDE;
  virtual base::StringPiece GetDataResource(int resource_id, ui::ScaleFactor) const OVERRIDE;

  DISALLOW_COPY_AND_ASSIGN(ContentClient);
};

}

#endif
