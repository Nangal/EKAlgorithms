//
//  EKStack.h
//  EKAlgorithms
//
//  Created by Evgeny Karkan on 20.10.13.
//  Copyright (c) 2013 EvgenyKarkan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EKStack : NSObject

- (id)initWithSize:(NSUInteger)size;

- (id)popLastObject;
- (void)push:(id)object;
- (id)peek;
- (NSInteger)sizeOfStack;
- (BOOL)isEmpty;
- (BOOL)isFull;
- (void)clear;
- (NSArray *)allObjectsFromStack;

@end
