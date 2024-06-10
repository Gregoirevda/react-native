/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * @generated SignedSource<<9653b7699416f1702ba2f5e8b8f6da93>>
 */

/**
 * IMPORTANT: Do NOT modify this file directly.
 *
 * To change the definition of the flags, edit
 *   packages/react-native/scripts/featureflags/ReactNativeFeatureFlags.config.js.
 *
 * To regenerate this code, run the following script from the repo root:
 *   yarn featureflags-update
 */

#pragma once

#if __has_include("rncoreJSI.h") // Cmake headers on Android
#include "rncoreJSI.h"
#elif __has_include("FBReactNativeSpecJSI.h") // CocoaPod headers on Apple
#include "FBReactNativeSpecJSI.h"
#else
#include <FBReactNativeSpec/FBReactNativeSpecJSI.h>
#endif

namespace facebook::react {

class NativeReactNativeFeatureFlags
    : public NativeReactNativeFeatureFlagsCxxSpec<
          NativeReactNativeFeatureFlags> {
 public:
  NativeReactNativeFeatureFlags(std::shared_ptr<CallInvoker> jsInvoker);

  bool commonTestFlag(jsi::Runtime& runtime);

  bool allowCollapsableChildren(jsi::Runtime& runtime);

  bool androidEnablePendingFabricTransactions(jsi::Runtime& runtime);

  bool batchRenderingUpdatesInEventLoop(jsi::Runtime& runtime);

  bool destroyFabricSurfacesInReactInstanceManager(jsi::Runtime& runtime);

  bool enableBackgroundExecutor(jsi::Runtime& runtime);

  bool enableCleanTextInputYogaNode(jsi::Runtime& runtime);

  bool enableGranularShadowTreeStateReconciliation(jsi::Runtime& runtime);

  bool enableMicrotasks(jsi::Runtime& runtime);

  bool enableSynchronousStateUpdates(jsi::Runtime& runtime);

  bool enableUIConsistency(jsi::Runtime& runtime);

  bool fixStoppedSurfaceRemoveDeleteTreeUIFrameCallbackLeak(jsi::Runtime& runtime);

  bool forceBatchingMountItemsOnAndroid(jsi::Runtime& runtime);

  bool inspectorEnableCxxInspectorPackagerConnection(jsi::Runtime& runtime);

  bool inspectorEnableModernCDPRegistry(jsi::Runtime& runtime);

  bool lazyAnimationCallbacks(jsi::Runtime& runtime);

  bool preventDoubleTextMeasure(jsi::Runtime& runtime);

  bool setAndroidLayoutDirection(jsi::Runtime& runtime);

  bool useModernRuntimeScheduler(jsi::Runtime& runtime);

  bool useNativeViewConfigsInBridgelessMode(jsi::Runtime& runtime);

  bool useStateAlignmentMechanism(jsi::Runtime& runtime);
};

} // namespace facebook::react