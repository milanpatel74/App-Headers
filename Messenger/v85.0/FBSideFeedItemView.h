/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:22 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBFeedSideFeedItemViewBase.h>
#import <Messenger/FBFeedSideFeedDetailViewBaseDelegate.h>

@class NSString;

@interface FBSideFeedItemView : FBFeedSideFeedItemViewBase <FBFeedSideFeedDetailViewBaseDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)heightConstrainedToSize:(CGSize)arg1 title:(id)arg2 subtitle:(id)arg3 description:(id)arg4 starRatingValue:(id)arg5 withButton:(BOOL)arg6 ;
-(void)_rightButtonViewTapped:(id)arg1 ;
-(void)sideFeedItemDetailViewDidTapRightButton:(id)arg1 ;
-(id)createDetailViewForBaseClass;
-(id)createCtaButtonForBaseClass;
-(void)layoutSubviews;
@end
