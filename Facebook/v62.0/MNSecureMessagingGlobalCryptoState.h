/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNSecureMessagingKeyPair, NSArray, MNSecureMessagingMasterKey, MNSecureMessagingPreKeyRecord;

@interface MNSecureMessagingGlobalCryptoState : FBValueObject <NSCoding, NSCopying> {

	MNSecureMessagingKeyPair* _ourIdentityKeyPair;
	NSArray* _signedPreKeys;
	MNSecureMessagingMasterKey* _storageMasterKey;
	MNSecureMessagingPreKeyRecord* _lastResortKeyPair;

}

@property (nonatomic,copy,readonly) MNSecureMessagingKeyPair * ourIdentityKeyPair;                  //@synthesize ourIdentityKeyPair=_ourIdentityKeyPair - In the implementation block
@property (nonatomic,copy,readonly) NSArray * signedPreKeys;                                        //@synthesize signedPreKeys=_signedPreKeys - In the implementation block
@property (nonatomic,copy,readonly) MNSecureMessagingMasterKey * storageMasterKey;                  //@synthesize storageMasterKey=_storageMasterKey - In the implementation block
@property (nonatomic,copy,readonly) MNSecureMessagingPreKeyRecord * lastResortKeyPair;              //@synthesize lastResortKeyPair=_lastResortKeyPair - In the implementation block
-(MNSecureMessagingKeyPair *)ourIdentityKeyPair;
-(id)initWithOurIdentityKeyPair:(id)arg1 signedPreKeys:(id)arg2 storageMasterKey:(id)arg3 lastResortKeyPair:(id)arg4 ;
-(MNSecureMessagingMasterKey *)storageMasterKey;
-(NSArray *)signedPreKeys;
-(MNSecureMessagingPreKeyRecord *)lastResortKeyPair;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
