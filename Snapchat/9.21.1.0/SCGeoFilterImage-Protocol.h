//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSData, NSString;

@protocol SCGeoFilterImage <NSObject, NSCoding, NSCopying>
@property(readonly, nonatomic) unsigned long long positionSetting;
@property(readonly, nonatomic) long long scaleSetting;
@property(readonly, copy, nonatomic) NSString *filterId;
@property(readonly, copy, nonatomic) NSData *imageData;
@end
