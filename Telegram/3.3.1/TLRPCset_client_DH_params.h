//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLMetaRpc.h"

@class NSData;

@interface TLRPCset_client_DH_params : TLMetaRpc
{
    NSData *_nonce;
    NSData *_server_nonce;
    NSData *_encrypted_data;
}

@property(retain, nonatomic) NSData *encrypted_data; // @synthesize encrypted_data=_encrypted_data;
@property(retain, nonatomic) NSData *server_nonce; // @synthesize server_nonce=_server_nonce;
@property(retain, nonatomic) NSData *nonce; // @synthesize nonce=_nonce;
- (void).cxx_destruct;
- (void)TLfillFieldsWithValues:(map_d3ce7d86 *)arg1;
- (id)TLbuildFromMetaObject:(shared_ptr_20f5e271)arg1;
- (int)TLconstructorName;
- (int)TLconstructorSignature;
- (int)layerVersion;
- (int)impliedResponseSignature;
- (Class)responseClass;

@end

