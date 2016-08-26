/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:23 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBComposerSponsor : FBValueObject <NSCopying, NSCoding> {

	BOOL _isVerified;
	NSString* _sponsorName;
	NSString* _sponsorId;

}

@property (nonatomic,copy,readonly) NSString * sponsorName;              //@synthesize sponsorName=_sponsorName - In the implementation block
@property (nonatomic,copy,readonly) NSString * sponsorId;                //@synthesize sponsorId=_sponsorId - In the implementation block
@property (nonatomic,readonly) BOOL isVerified;                          //@synthesize isVerified=_isVerified - In the implementation block
-(id)initWithSponsorName:(id)arg1 sponsorId:(id)arg2 isVerified:(BOOL)arg3 ;
-(NSString *)sponsorName;
-(NSString *)sponsorId;
-(BOOL)isVerified;
@end
