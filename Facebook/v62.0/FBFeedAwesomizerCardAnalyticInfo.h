/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface FBFeedAwesomizerCardAnalyticInfo : FBValueObject <NSCopying> {

	BOOL _openedDirectly;
	long long _homeRowPosition;
	NSString* _awesomizerSessionIdentifier;
	NSDictionary* _extra;
	NSString* _didFinishLoadingEdgesPerfEventName;

}

@property (nonatomic,readonly) long long homeRowPosition;                                       //@synthesize homeRowPosition=_homeRowPosition - In the implementation block
@property (nonatomic,readonly) BOOL openedDirectly;                                             //@synthesize openedDirectly=_openedDirectly - In the implementation block
@property (nonatomic,copy,readonly) NSString * awesomizerSessionIdentifier;                     //@synthesize awesomizerSessionIdentifier=_awesomizerSessionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extra;                                       //@synthesize extra=_extra - In the implementation block
@property (nonatomic,copy,readonly) NSString * didFinishLoadingEdgesPerfEventName;              //@synthesize didFinishLoadingEdgesPerfEventName=_didFinishLoadingEdgesPerfEventName - In the implementation block
-(NSDictionary *)extra;
-(id)initWithHomeRowPosition:(long long)arg1 openedDirectly:(BOOL)arg2 awesomizerSessionIdentifier:(id)arg3 extra:(id)arg4 didFinishLoadingEdgesPerfEventName:(id)arg5 ;
-(BOOL)openedDirectly;
-(long long)homeRowPosition;
-(NSString *)awesomizerSessionIdentifier;
-(NSString *)didFinishLoadingEdgesPerfEventName;
@end
