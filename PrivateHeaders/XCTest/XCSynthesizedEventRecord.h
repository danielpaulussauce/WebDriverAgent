// Copyright 2004-present Facebook. All Rights Reserved.

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSMutableArray, NSString;

@interface XCSynthesizedEventRecord : NSObject <NSSecureCoding>
{
    NSMutableArray *_eventPaths;
    NSString *_name;
    long long _interfaceOrientation;
}

+ (_Bool)supportsSecureCoding;
@property (atomic, readonly) long long interfaceOrientation;
@property (atomic, copy, readonly) NSString *name;
- (id)description;
@property (atomic, readonly) double maximumOffset;
- (void)addPointerEventPath:(id)arg1;
@property (atomic, copy, readonly) NSArray *eventPaths;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 interfaceOrientation:(long long)arg2;
- (id)init;
- (void)dealloc;

@end