//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Secret23_DecryptedMessage.h"

@class NSNumber, NSString, Secret23_DecryptedMessageMedia;

@interface Secret23_DecryptedMessage_decryptedMessage : Secret23_DecryptedMessage
{
    NSNumber *_ttl;
    NSString *_message;
    Secret23_DecryptedMessageMedia *_media;
}

@property(retain, nonatomic) Secret23_DecryptedMessageMedia *media; // @synthesize media=_media;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSNumber *ttl; // @synthesize ttl=_ttl;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

