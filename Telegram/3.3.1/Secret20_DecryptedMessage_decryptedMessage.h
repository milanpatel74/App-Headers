//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Secret20_DecryptedMessage.h"

@class NSNumber, NSString, Secret20_DecryptedMessageMedia;

@interface Secret20_DecryptedMessage_decryptedMessage : Secret20_DecryptedMessage
{
    NSNumber *_ttl;
    NSString *_message;
    Secret20_DecryptedMessageMedia *_media;
}

@property(retain, nonatomic) Secret20_DecryptedMessageMedia *media; // @synthesize media=_media;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSNumber *ttl; // @synthesize ttl=_ttl;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

