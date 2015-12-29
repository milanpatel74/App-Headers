//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURL.h"

@class NSString;

@interface NSURL (SKPImageBridgeAdditions)
+ (id)skp_URLWithImageBridgeName:(id)arg1 objectType:(id)arg2 objectIdString:(id)arg3 size:(struct CGSize)arg4 style:(id)arg5;
+ (id)skp_URLWithImageBridgeName:(id)arg1 objectType:(id)arg2 objectId:(unsigned long long)arg3 size:(struct CGSize)arg4 style:(id)arg5;
+ (id)skp_URLWithImageBridgeName:(id)arg1 objectType:(id)arg2 objectIdString:(id)arg3 size:(struct CGSize)arg4;
+ (id)skp_URLWithImageBridgeName:(id)arg1 objectType:(id)arg2 objectId:(unsigned long long)arg3 size:(struct CGSize)arg4;
+ (id)skp_URLWithImageBridgeName:(id)arg1 objectType:(id)arg2 objectIdString:(id)arg3;
+ (id)skp_URLWithImageBridgeName:(id)arg1 objectType:(id)arg2 objectId:(unsigned long long)arg3;
- (id)skp_valueForQueryKey:(id)arg1;
@property(readonly, nonatomic) struct CGSize skp_size;
- (_Bool)skp_boolForKey:(id)arg1;
@property(readonly, copy, nonatomic) NSString *skp_style;
@property(readonly, copy, nonatomic) NSString *skp_objectId;
@property(readonly, copy, nonatomic) NSString *skp_objectType;
@property(readonly, nonatomic) _Bool skp_isValid;
- (id)skp_imageBridgeName;
- (_Bool)skp_isBridgeNamed:(id)arg1;
- (id)skp_URLByRemovingStyleAndSize;
- (id)skp_URLWithImageBridgeStyle:(id)arg1 size:(struct CGSize)arg2 queryParameters:(id)arg3;
- (id)skp_URLWithImageBridgeStyle:(id)arg1 size:(struct CGSize)arg2;
- (id)skp_URLWithImageBridgeStyle:(id)arg1;
@end

