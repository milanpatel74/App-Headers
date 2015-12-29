//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface TGBridgeContext : NSObject
{
    _Bool _authorized;
    _Bool _passcodeEnabled;
    _Bool _passcodeEncrypted;
    _Bool _customLocalizationEnabled;
    int _userId;
    NSDictionary *_startupData;
}

+ (int)versionWithCurrentDate;
@property(readonly, nonatomic) NSDictionary *startupData; // @synthesize startupData=_startupData;
@property(nonatomic) _Bool customLocalizationEnabled; // @synthesize customLocalizationEnabled=_customLocalizationEnabled;
@property(nonatomic) _Bool passcodeEncrypted; // @synthesize passcodeEncrypted=_passcodeEncrypted;
@property(nonatomic) _Bool passcodeEnabled; // @synthesize passcodeEnabled=_passcodeEnabled;
@property(nonatomic) int userId; // @synthesize userId=_userId;
@property(nonatomic) _Bool authorized; // @synthesize authorized=_authorized;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)encodeWithStartupData:(_Bool)arg1;
- (long long)startupDataVersion;
- (void)setStartupData:(id)arg1 version:(int)arg2;
- (id)initWithDictionary:(id)arg1;

@end

