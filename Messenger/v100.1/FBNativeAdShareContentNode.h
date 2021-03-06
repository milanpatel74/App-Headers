/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:20 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASControlNode.h>
#import <Messenger/ASNetworkImageNodeDelegate.h>

@protocol FBNativeAdShareContentNodeDelegate;
@class FBNativeAdShareContentNodeMetrics, ASTextNode, ASNetworkImageNode, FBNativeAdCTAButtonNode, NSString;

@interface FBNativeAdShareContentNode : ASControlNode <ASNetworkImageNodeDelegate> {

	FBNativeAdShareContentNodeMetrics* _metrics;
	ASTextNode* _shareTitleNode;
	ASTextNode* _shareSubtitleNode;
	ASTextNode* _shareBodyNode;
	ASNetworkImageNode* _shareImageNode;
	FBNativeAdCTAButtonNode* _actionButtonNode;
	CGSize _shareImageSize;
	id<FBNativeAdShareContentNodeDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBNativeAdShareContentNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_staticInitialize;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(void)_didTapActionButtonNode;
-(id)initWithTitleText:(id)arg1 subtitleText:(id)arg2 bodyText:(id)arg3 actionButtonText:(id)arg4 imageURLString:(id)arg5 imageSize:(CGSize)arg6 metrics:(id)arg7 session:(id)arg8 ;
-(void)imageNode:(id)arg1 didLoadImage:(id)arg2 ;
-(void)setDelegate:(id<FBNativeAdShareContentNodeDelegate>)arg1 ;
-(id<FBNativeAdShareContentNodeDelegate>)delegate;
-(void)layout;
@end

