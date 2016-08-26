/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBAnalyticBlockController.h>
#import <Facebook/FBNativeArticleFooterNodeDelegate.h>
#import <Facebook/FBNativeArticleEngagementActionControllerDelegate.h>

@class FBNativeArticleFooterNode, FBContributorsMetrics, FBUserSession, FBRichStoryBlockDisplayContext, NSArray, NSMutableArray, NSString;

@interface FBContributorsBlockController : FBAnalyticBlockController <FBNativeArticleFooterNodeDelegate, FBNativeArticleEngagementActionControllerDelegate> {

	FBNativeArticleFooterNode* _contributorsNode;
	FBContributorsMetrics* _metricsForLikeButton;
	FBContributorsMetrics* _metricsForFollowButton;
	FBUserSession* _session;
	FBRichStoryBlockDisplayContext* _displayContext;
	NSArray* _contributors;
	NSMutableArray* _nodesList;
	NSMutableArray* _actionControllers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)blockControllerCanRenderStoryBlock:(id)arg1 presentationAttributes:(id)arg2 ;
+(id)blockControllerForStoryBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 ;
+(id)layoutForStoryBlock:(id)arg1 constrainingSize:(CGSize)arg2 presentationAttributes:(id)arg3 displayContext:(id)arg4 ;
+(id)titleText;
-(id)richStoryRenderable;
-(id)initWithStoryBlock:(id)arg1 metricsWithLikeButton:(id)arg2 metricsWithFollowButton:(id)arg3 session:(id)arg4 displayContext:(id)arg5 ;
-(BOOL)_isPage:(id)arg1 ;
-(void)footerNode:(id)arg1 didSelectNodeAtIndex:(unsigned long long)arg2 ;
-(void)engagementActionControllerDidChangeButtonSelectionState:(id)arg1 ;
@end
