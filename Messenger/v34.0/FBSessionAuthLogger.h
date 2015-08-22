/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:57 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, FBSession;

@interface FBSessionAuthLogger : NSObject {

	NSString* _ID;
	NSMutableDictionary* _extras;
	FBSession* _session;
	NSString* _authMethod;

}

@property (nonatomic,copy) NSString * ID;                               //@synthesize ID=_ID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * extras;              //@synthesize extras=_extras - In the implementation block
@property (assign,nonatomic) FBSession * session;                       //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSString * authMethod;                       //@synthesize authMethod=_authMethod - In the implementation block
-(NSMutableDictionary *)extras;
-(void)setExtras:(NSMutableDictionary *)arg1 ;
-(id)initWithSession:(id)arg1 ID:(id)arg2 authMethod:(id)arg3 ;
-(void)logStartAuth;
-(void)logStartAuthMethod:(id)arg1 ;
-(void)logEndAuthMethodWithResult:(id)arg1 error:(id)arg2 ;
-(void)logEndAuthWithResult:(id)arg1 error:(id)arg2 ;
-(void)setAuthMethod:(NSString *)arg1 ;
-(id)newEventParameters;
-(void)logEvent:(id)arg1 params:(id)arg2 ;
-(void)logEvent:(id)arg1 result:(id)arg2 error:(id)arg3 ;
-(NSString *)authMethod;
-(void)addExtrasForNextEvent:(id)arg1 ;
-(NSString *)ID;
-(void)dealloc;
-(FBSession *)session;
-(void)setSession:(FBSession *)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(void)setID:(NSString *)arg1 ;
@end
