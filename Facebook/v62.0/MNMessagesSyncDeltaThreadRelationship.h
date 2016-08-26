/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMSyncedThreadKey;

@interface MNMessagesSyncDeltaThreadRelationship : NSObject <NSCopying> {

	unsigned long long _subtype;
	FBMSyncedThreadKey* _affectsThread;
	FBMSyncedThreadKey* _deletesThread;
	FBMSyncedThreadKey* _requiresThreadPrepared;
	FBMSyncedThreadKey* _requiresThreadPreparedFromNetwork;

}
+(id)requiresThreadPreparedFromNetwork:(id)arg1 ;
+(id)noThreadAffected;
+(id)requiresThreadPrepared:(id)arg1 ;
+(id)affectsThread:(id)arg1 ;
+(id)deletesThread:(id)arg1 ;
-(void)matchNoThreadAffected:(/*^block*/id)arg1 affectsThread:(/*^block*/id)arg2 deletesThread:(/*^block*/id)arg3 requiresThreadPrepared:(/*^block*/id)arg4 requiresThreadPreparedFromNetwork:(/*^block*/id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
