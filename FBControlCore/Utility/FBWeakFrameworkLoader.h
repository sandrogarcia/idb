/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <Foundation/Foundation.h>

@class FBWeakFramework;
@protocol FBControlCoreLogger;

NS_ASSUME_NONNULL_BEGIN

/**
 A Utility Class for loading weak-linked Frameworks at runtime.
 */
@interface FBWeakFrameworkLoader : NSObject

/**
 Loads a list of Frameworks.
 Will avoid re-loading already loaded Frameworks.
 Will also completely bypass loading of user plugins to prevent compatability issues.

 @param weakFrameworks a list of frameworks to load
 @param logger a logger for logging framework loading activities.
 @param error an error out for any error that occurs.
 @return YES if successful, NO otherwise.
 */
+ (BOOL)loadPrivateFrameworks:(NSArray<FBWeakFramework *> *)weakFrameworks logger:(id<FBControlCoreLogger>)logger error:(NSError **)error;

@end

NS_ASSUME_NONNULL_END
