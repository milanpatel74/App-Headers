//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SKPIngestionKeyValuePair : NSObject
{
    NSString *_value;
    long long _propertyType;
}

@property(nonatomic) long long propertyType; // @synthesize propertyType=_propertyType;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
- (void).cxx_destruct;
- (id)debugDescription;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToIngestionValuePair:(id)arg1;
- (id)propertyKey;
- (id)propertyValue;
- (id)initWithKeyType:(long long)arg1 andValue:(id)arg2;
- (id)init;

@end

