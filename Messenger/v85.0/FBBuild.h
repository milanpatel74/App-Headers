/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBBuild : FBValueObject <NSCopying> {

	NSString* _branchName;
	NSString* _number;
	NSString* _revision;
	NSString* _time;

}

@property (nonatomic,copy,readonly) NSString * branchName;              //@synthesize branchName=_branchName - In the implementation block
@property (nonatomic,copy,readonly) NSString * number;                  //@synthesize number=_number - In the implementation block
@property (nonatomic,copy,readonly) NSString * revision;                //@synthesize revision=_revision - In the implementation block
@property (nonatomic,copy,readonly) NSString * time;                    //@synthesize time=_time - In the implementation block
-(id)initWithBranchName:(id)arg1 number:(id)arg2 revision:(id)arg3 time:(id)arg4 ;
-(NSString *)branchName;
-(NSString *)time;
-(NSString *)revision;
-(NSString *)number;
@end
