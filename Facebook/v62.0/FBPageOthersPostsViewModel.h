/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBComposerAuthor;

@interface FBPageOthersPostsViewModel : FBValueObject <NSCopying> {

	BOOL _canWritePost;
	BOOL _canSharePhoto;
	BOOL _enablePublisherBar;
	BOOL _enableOthersPostsUnit;
	BOOL _canViewAdminTimeline;
	BOOL _canMessage;
	NSString* _pageFBID;
	FBComposerAuthor* _composerAuthor;

}

@property (nonatomic,copy,readonly) NSString * pageFBID;                            //@synthesize pageFBID=_pageFBID - In the implementation block
@property (nonatomic,copy,readonly) FBComposerAuthor * composerAuthor;              //@synthesize composerAuthor=_composerAuthor - In the implementation block
@property (nonatomic,readonly) BOOL canWritePost;                                   //@synthesize canWritePost=_canWritePost - In the implementation block
@property (nonatomic,readonly) BOOL canSharePhoto;                                  //@synthesize canSharePhoto=_canSharePhoto - In the implementation block
@property (nonatomic,readonly) BOOL enablePublisherBar;                             //@synthesize enablePublisherBar=_enablePublisherBar - In the implementation block
@property (nonatomic,readonly) BOOL enableOthersPostsUnit;                          //@synthesize enableOthersPostsUnit=_enableOthersPostsUnit - In the implementation block
@property (nonatomic,readonly) BOOL canViewAdminTimeline;                           //@synthesize canViewAdminTimeline=_canViewAdminTimeline - In the implementation block
@property (nonatomic,readonly) BOOL canMessage;                                     //@synthesize canMessage=_canMessage - In the implementation block
+(void)setShouldEnablePublisherBarForAdmin:(BOOL)arg1 ;
+(id)viewModelForPage:(id)arg1 session:(id)arg2 ;
-(NSString *)pageFBID;
-(id)initWithPageFBID:(id)arg1 composerAuthor:(id)arg2 canWritePost:(BOOL)arg3 canSharePhoto:(BOOL)arg4 enablePublisherBar:(BOOL)arg5 enableOthersPostsUnit:(BOOL)arg6 canViewAdminTimeline:(BOOL)arg7 canMessage:(BOOL)arg8 ;
-(FBComposerAuthor *)composerAuthor;
-(BOOL)canWritePost;
-(BOOL)canSharePhoto;
-(BOOL)enablePublisherBar;
-(BOOL)enableOthersPostsUnit;
-(BOOL)canViewAdminTimeline;
-(BOOL)canMessage;
@end
