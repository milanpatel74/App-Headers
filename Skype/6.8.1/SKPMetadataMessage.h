//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKPMessage.h"

@interface SKPMetadataMessage : SKPMessage
{
    unsigned long long _paramKey;
}

+ (id)keyPathsForValuesAffectingAttributedSummary;
+ (id)transformValue:(id)arg1 forKeyPath:(id)arg2 wasTransformed:(_Bool *)arg3;
+ (id)propertyMapping;
@property(nonatomic) unsigned long long paramKey; // @synthesize paramKey=_paramKey;
- (_Bool)isAnnotatable;
- (id)attributedSummary;
- (long long)type;

@end

