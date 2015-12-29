//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSNumber;

@interface Secret1_DecryptedMessage : NSObject
{
    NSNumber *_randomId;
    NSData *_randomBytes;
}

+ (id)decryptedMessageServiceWithRandomId:(id)arg1 randomBytes:(id)arg2 action:(id)arg3;
+ (id)decryptedMessageWithRandomId:(id)arg1 randomBytes:(id)arg2 message:(id)arg3 media:(id)arg4;
@property(retain, nonatomic) NSData *randomBytes; // @synthesize randomBytes=_randomBytes;
@property(retain, nonatomic) NSNumber *randomId; // @synthesize randomId=_randomId;
- (void).cxx_destruct;

@end

