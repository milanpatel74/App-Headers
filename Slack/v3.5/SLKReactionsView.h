/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UIView.h>

@protocol SLKReacted;
@class SLKDependencies;

@interface SLKReactionsView : UIView {

	BOOL _usedInDetail;
	id<SLKReacted> _reactableObject;
	SLKDependencies* _dependencies;

}

@property (assign,nonatomic,__weak) SLKDependencies * dependencies;              //@synthesize dependencies=_dependencies - In the implementation block
@property (assign,nonatomic) BOOL usedInDetail;                                  //@synthesize usedInDetail=_usedInDetail - In the implementation block
@property (nonatomic,retain) id<SLKReacted> reactableObject;                     //@synthesize reactableObject=_reactableObject - In the implementation block
+(double)heightThatFitsPaddedWidth:(double)arg1 forReactions:(id)arg2 inDetail:(BOOL)arg3 ;
+(double)appropriateHorizontalOffset:(BOOL)arg1 ;
+(double)heightThatFitsWidth:(double)arg1 forReactions:(id)arg2 inDetail:(BOOL)arg3 ;
+(id)cacheKeyForReactions:(id)arg1 ;
+(double)buttonSpaceForItem:(id)arg1 isLast:(BOOL)arg2 canAddMore:(BOOL)arg3 ;
+(unsigned long long)rowCountForWidth:(double)arg1 forReactions:(id)arg2 inDetail:(BOOL)arg3 ;
+(void)initialize;
-(id)initWithDependencies:(id)arg1 ;
-(id<SLKReacted>)reactableObject;
-(void)setUsedInDetail:(BOOL)arg1 ;
-(void)setReactableObject:(id<SLKReacted>)arg1 ;
-(BOOL)usedInDetail;
-(void)didLongPressReactionButton:(id)arg1 ;
-(void)didTapReactionButton:(id)arg1 ;
-(void)layoutInSuperviewIfNeeded;
-(void)layoutReactionButtonsIfNeeded;
-(void)showReactionPicker:(id)arg1 ;
-(void)toggleReaction:(id)arg1 ;
-(void)showReactionDetail:(id)arg1 ;
-(void)shouldAddNewReaction:(id)arg1 ;
-(SLKDependencies *)dependencies;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(void)setDependencies:(SLKDependencies *)arg1 ;
@end
