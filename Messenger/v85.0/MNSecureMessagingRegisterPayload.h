/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:22 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSData, MNSecureMessagingSignedPublicKeyWithID, MNSecureMessagingPublicKeyWithID;

@interface MNSecureMessagingRegisterPayload : NSObject <TBase, NSCoding> {

	NSString* __suggested_codename;
	NSData* __identity_key;
	MNSecureMessagingSignedPublicKeyWithID* __signed_pre_key_with_id;
	MNSecureMessagingPublicKeyWithID* __last_resort_key;
	BOOL __suggested_codename_isset;
	BOOL __identity_key_isset;
	BOOL __signed_pre_key_with_id_isset;
	BOOL __last_resort_key_isset;

}

@property (setter=setSuggested_codename:,getter=suggested_codename,nonatomic,retain) NSString * suggested_codename; 
@property (setter=setIdentity_key:,getter=identity_key,nonatomic,retain) NSData * identity_key; 
@property (setter=setSigned_pre_key_with_id:,getter=signed_pre_key_with_id,nonatomic,retain) MNSecureMessagingSignedPublicKeyWithID * signed_pre_key_with_id; 
@property (setter=setLast_resort_key:,getter=last_resort_key,nonatomic,retain) MNSecureMessagingPublicKeyWithID * last_resort_key; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setSuggested_codename:(NSString *)arg1 ;
-(void)setIdentity_key:(NSData *)arg1 ;
-(void)setSigned_pre_key_with_id:(MNSecureMessagingSignedPublicKeyWithID *)arg1 ;
-(void)setLast_resort_key:(MNSecureMessagingPublicKeyWithID *)arg1 ;
-(id)initWithSuggested_codename:(id)arg1 identity_key:(id)arg2 signed_pre_key_with_id:(id)arg3 last_resort_key:(id)arg4 ;
-(NSString *)suggested_codename;
-(BOOL)suggested_codenameIsSet;
-(void)unsetSuggested_codename;
-(NSData *)identity_key;
-(BOOL)identity_keyIsSet;
-(void)unsetIdentity_key;
-(MNSecureMessagingSignedPublicKeyWithID *)signed_pre_key_with_id;
-(BOOL)signed_pre_key_with_idIsSet;
-(void)unsetSigned_pre_key_with_id;
-(MNSecureMessagingPublicKeyWithID *)last_resort_key;
-(BOOL)last_resort_keyIsSet;
-(void)unsetLast_resort_key;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)validate;
-(void)write:(id)arg1 ;
@end
