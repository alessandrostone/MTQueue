//
//  MTQueue.h
//  MTQueue
//
//  Created by Adam Kirk on 2/6/13.
//  Copyright (c) 2013 Mysterious Trousers. All rights reserved.
//


typedef void (^MTQueueBlock)();


@interface MTQueue : NSObject


+ (NSOperationQueue *)main;
+ (NSOperationQueue *)coreDataQueue;
+ (NSOperationQueue *)networkQueue;
+ (NSOperationQueue *)fileSystemQueue;

// NSBlockOperation
+ (void)main:(MTQueueBlock)operation;
+ (void)coreData:(MTQueueBlock)operation;
+ (void)network:(MTQueueBlock)operation;
+ (void)file:(MTQueueBlock)operation;

// GCD
+ (void)background:(MTQueueBlock)block;
+ (void)def:(MTQueueBlock)block;
+ (void)high:(MTQueueBlock)block;
+ (void)low:(MTQueueBlock)block;

@end
