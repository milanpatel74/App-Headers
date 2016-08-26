/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:49 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBContactSyncUserRegularTypeProperties : FBValueObject <NSCopying> {

	BOOL _canInstallMessenger;
	BOOL _isMemorialized;
	BOOL _isPartial;
	BOOL _hasMessenger;
	BOOL _isFriend;

}

@property (nonatomic,readonly) BOOL canInstallMessenger;              //@synthesize canInstallMessenger=_canInstallMessenger - In the implementation block
@property (nonatomic,readonly) BOOL isMemorialized;                   //@synthesize isMemorialized=_isMemorialized - In the implementation block
@property (nonatomic,readonly) BOOL isPartial;                        //@synthesize isPartial=_isPartial - In the implementation block
@property (nonatomic,readonly) BOOL hasMessenger;                     //@synthesize hasMessenger=_hasMessenger - In the implementation block
@property (nonatomic,readonly) BOOL isFriend;                         //@synthesize isFriend=_isFriend - In the implementation block
-(BOOL)isMemorialized;
-(id)initWithCanInstallMessenger:(BOOL)arg1 isMemorialized:(BOOL)arg2 isPartial:(BOOL)arg3 hasMessenger:(BOOL)arg4 isFriend:(BOOL)arg5 ;
-(BOOL)hasMessenger;
-(BOOL)canInstallMessenger;
-(BOOL)isPartial;
-(BOOL)isFriend;
@end
