//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TGDeleteFileDesc : NSObject
{
    long long _hash0;
    long long _hash1;
    NSString *_filePath;
}

@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(nonatomic) long long hash1; // @synthesize hash1=_hash1;
@property(nonatomic) long long hash0; // @synthesize hash0=_hash0;
- (void).cxx_destruct;
- (id)initWithHash0:(long long)arg1 hash1:(long long)arg2 filePath:(id)arg3;

@end

