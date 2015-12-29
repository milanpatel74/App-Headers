//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLMetaRpc.h"

@class NSData, TLInputEncryptedChat;

@interface TLRPCmessages_acceptEncryption : TLMetaRpc
{
    TLInputEncryptedChat *_peer;
    NSData *_g_b;
    long long _key_fingerprint;
}

@property(nonatomic) long long key_fingerprint; // @synthesize key_fingerprint=_key_fingerprint;
@property(retain, nonatomic) NSData *g_b; // @synthesize g_b=_g_b;
@property(retain, nonatomic) TLInputEncryptedChat *peer; // @synthesize peer=_peer;
- (void).cxx_destruct;
- (void)TLfillFieldsWithValues:(map_d3ce7d86 *)arg1;
- (id)TLbuildFromMetaObject:(shared_ptr_20f5e271)arg1;
- (int)TLconstructorName;
- (int)TLconstructorSignature;
- (int)layerVersion;
- (int)impliedResponseSignature;
- (Class)responseClass;

@end

