//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SKPPNVProfilePhoneNumber : NSObject
{
    _Bool _searchable;
    NSString *_value;
    NSString *_countryName;
    NSString *_countryCode;
    NSString *_country;
    unsigned long long _state;
    unsigned long long _source;
}

+ (id)normalizedPhoneNumber:(id)arg1;
@property(nonatomic) unsigned long long source; // @synthesize source=_source;
@property(nonatomic, getter=isSearchable) _Bool searchable; // @synthesize searchable=_searchable;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *countryName; // @synthesize countryName=_countryName;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool canBeDeleted;
@property(readonly, nonatomic) NSString *valueWithCountryCode;
- (void)setVerificationState:(unsigned long long)arg1 verificationSource:(unsigned long long)arg2 searchable:(_Bool)arg3;
- (id)initWithValue:(id)arg1 country:(id)arg2;

@end

