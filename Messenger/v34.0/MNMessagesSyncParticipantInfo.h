/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:40 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <Messenger/NSCoding.h>

@class NSString, NSMutableDictionary;

@interface MNMessagesSyncParticipantInfo : NSObject <TBase, NSCoding> {

	long long __userFbId;
	NSString* __firstName;
	NSString* __fullName;
	BOOL __isMessengerUser;
	NSMutableDictionary* __profPicURIMap;
	BOOL __userFbId_isset;
	BOOL __firstName_isset;
	BOOL __fullName_isset;
	BOOL __isMessengerUser_isset;
	BOOL __profPicURIMap_isset;

}

@property (assign,setter=setUserFbId:,getter=userFbId,nonatomic) long long userFbId; 
@property (setter=setFirstName:,getter=firstName,nonatomic,retain) NSString * firstName; 
@property (setter=setFullName:,getter=fullName,nonatomic,retain) NSString * fullName; 
@property (assign,setter=setIsMessengerUser:,getter=isMessengerUser,nonatomic) BOOL isMessengerUser; 
@property (setter=setProfPicURIMap:,getter=profPicURIMap,nonatomic,retain) NSMutableDictionary * profPicURIMap; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(BOOL)isMessengerUser;
-(void)setUserFbId:(long long)arg1 ;
-(void)setIsMessengerUser:(BOOL)arg1 ;
-(void)setProfPicURIMap:(NSMutableDictionary *)arg1 ;
-(id)initWithUserFbId:(long long)arg1 firstName:(id)arg2 fullName:(id)arg3 isMessengerUser:(BOOL)arg4 profPicURIMap:(id)arg5 ;
-(long long)userFbId;
-(BOOL)userFbIdIsSet;
-(void)unsetUserFbId;
-(BOOL)firstNameIsSet;
-(void)unsetFirstName;
-(BOOL)fullNameIsSet;
-(void)unsetFullName;
-(BOOL)isMessengerUserIsSet;
-(void)unsetIsMessengerUser;
-(NSMutableDictionary *)profPicURIMap;
-(BOOL)profPicURIMapIsSet;
-(void)unsetProfPicURIMap;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)validate;
-(void)setFirstName:(NSString *)arg1 ;
-(NSString *)firstName;
-(void)write:(id)arg1 ;
-(NSString *)fullName;
-(void)setFullName:(NSString *)arg1 ;
@end
