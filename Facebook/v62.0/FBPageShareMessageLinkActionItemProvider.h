/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPageActionItemProviding.h>

@protocol FBEntityCardPagesActionBarTapResponder;
@class FBMemPage, FBUserSession, NSString;

@interface FBPageShareMessageLinkActionItemProvider : NSObject <FBPageActionItemProviding> {

	FBMemPage* _page;
	FBUserSession* _session;
	id<FBEntityCardPagesActionBarTapResponder> _actionResponder;
	unsigned long long _iconSize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPage:(id)arg1 session:(id)arg2 actionResponder:(id)arg3 size:(unsigned long long)arg4 ;
-(BOOL)canProvideActionItem;
-(id)actionItem;
@end
