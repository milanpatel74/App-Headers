/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class WAWebClientSessionData, NSString, NSData, NSDate;

@interface WAWebClientSession : NSObject {

	WAWebClientSessionData* _sessionData;
	BOOL _preemptiveChatResponseSent;
	BOOL _preemptiveContactsResponseSent;
	NSString* _browserID;
	NSData* _sharedSecret;

}

@property (nonatomic,copy,readonly) NSString * browserID;                      //@synthesize browserID=_browserID - In the implementation block
@property (nonatomic,copy) NSData * sharedSecret;                              //@synthesize sharedSecret=_sharedSecret - In the implementation block
@property (assign,nonatomic) BOOL preemptiveChatResponseSent;                  //@synthesize preemptiveChatResponseSent=_preemptiveChatResponseSent - In the implementation block
@property (assign,nonatomic) BOOL preemptiveContactsResponseSent;              //@synthesize preemptiveContactsResponseSent=_preemptiveContactsResponseSent - In the implementation block
@property (nonatomic,copy) NSString * webRef; 
@property (nonatomic,copy) NSDate * deviceLoginTime; 
@property (nonatomic,copy) NSDate * lastActiveTime; 
@property (nonatomic,copy) NSString * operatingSystem; 
@property (nonatomic,copy) NSString * browser; 
@property (nonatomic,copy) NSString * clientToken; 
@property (nonatomic,copy) NSString * location; 
+(id)allSavedSessionDataObjects;
+(id)existingSessionWithBrowserID:(id)arg1 ;
+(id)lastSession;
+(void)deleteKeychainEntryForBrowserID:(id)arg1 ;
+(id)keychainQueryForBrowserID:(id)arg1 ;
-(void)setOperatingSystem:(NSString *)arg1 ;
-(id)serialize:(id)arg1 ;
-(NSString *)webRef;
-(NSString *)browserID;
-(id)initWithNewBrowserID:(id)arg1 deviceLoginTime:(id)arg2 ;
-(void)setWebRef:(NSString *)arg1 ;
-(void)setClientToken:(NSString *)arg1 ;
-(void)makeTemporary;
-(void)setLastActiveTime:(NSDate *)arg1 ;
-(void)makeCurrent;
-(void)setOrExtendTimeoutIfNeeded;
-(id)unserialize:(id)arg1 streamError:(out BOOL*)arg2 ;
-(void)resetTimeoutIfNeeded;
-(id)hashWithSharedSecret:(id)arg1 ;
-(BOOL)preemptiveChatResponseSent;
-(void)setPreemptiveChatResponseSent:(BOOL)arg1 ;
-(BOOL)preemptiveContactsResponseSent;
-(void)setPreemptiveContactsResponseSent:(BOOL)arg1 ;
-(NSDate *)deviceLoginTime;
-(NSDate *)lastActiveTime;
-(void)setDeviceLoginTime:(NSDate *)arg1 ;
-(id)initWithExistingBrowserID:(id)arg1 secret:(id)arg2 sessionData:(id)arg3 ;
-(NSString *)operatingSystem;
-(NSData *)sharedSecret;
-(void)setSharedSecret:(NSData *)arg1 ;
-(void)save;
-(id)description;
-(NSString *)location;
-(void)remove;
-(void)setLocation:(NSString *)arg1 ;
-(void)resetState;
-(NSString *)browser;
-(void)setBrowser:(NSString *)arg1 ;
-(NSString *)clientToken;
@end

