/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:50 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAPISessionStoreFactory.h>

@protocol FBAPISessionStoreFactory <NSObject>
@required
-(id)APISessionStore;

@end


@class NSString;

@interface FBAPISessionStoreFactory : NSObject <FBAPISessionStoreFactory> {

	NSString* _appSecret;
	NSString* _appGroup;
	unsigned long long _keychainBackupPolicy;
	BOOL _shouldCacheLoggedInUserID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)APISessionStore;
-(id)initWithAppSecret:(id)arg1 appGroup:(id)arg2 shouldCacheLoggedInUserID:(BOOL)arg3 keychainBackupPolicy:(unsigned long long)arg4 ;
@end
